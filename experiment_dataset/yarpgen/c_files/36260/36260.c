/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (min((((((((arr_2 [i_1]) ? var_6 : var_2))) ? (var_6 ^ var_7) : (arr_1 [i_1 + 1] [i_1 + 1])))), (arr_6 [i_0])));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_15 = (max(var_15, ((((-114 ? ((var_4 + (arr_4 [i_0]))) : (arr_6 [i_2 + 1])))))));
                    var_16 = (max(var_16, ((min((((arr_6 [i_1 + 2]) * (arr_0 [i_2 - 2]))), ((((arr_8 [i_2 - 2]) + var_10))))))));
                }
                var_17 = (arr_4 [i_1]);
                var_18 &= (((((max(var_7, (arr_9 [i_0] [0] [i_0]))) ? (arr_2 [i_1 + 1]) : (arr_5 [i_0])))));
                arr_11 [i_0] [i_1] [i_1] = -1;
            }
        }
    }
    #pragma endscop
}
