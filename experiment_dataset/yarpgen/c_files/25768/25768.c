/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_7 ? ((((var_10 >> (var_4 - 8405926555430504612))))) : -var_10));
    var_12 &= var_1;
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = ((((!(var_1 || -1))) ? var_9 : var_1));
                    arr_10 [14] = (max(((66 ? 4294967264 : 255)), 8328183756627410432));

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        var_14 = (max(var_14, var_0));
                        var_15 = (((~-10878) ^ -var_3));
                        var_16 += (((((var_3 != (arr_1 [i_0])))) == -var_0));
                        var_17 = (max(var_8, ((3 ? (max((arr_4 [i_0] [i_0]), var_0)) : (((min(var_3, 24231))))))));
                        var_18 = (arr_3 [i_3 + 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
