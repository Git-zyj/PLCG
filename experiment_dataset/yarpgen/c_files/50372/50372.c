/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] = (((min(2147483641, 1)) | (max(var_13, var_2))));
                            var_16 = (min((min(1, var_6)), (min((arr_10 [i_1 + 1] [8] [14] [i_3]), (arr_10 [i_1 + 1] [i_1 + 1] [i_2] [2])))));
                            var_17 = (min(var_17, ((((1104985107 ? (arr_4 [i_3] [i_2 + 1] [i_1]) : var_5)) != (arr_9 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_2 + 1])))));
                            var_18 |= (min(((var_9 ? (arr_5 [i_1 + 1] [i_0 + 2] [i_0 + 3]) : var_1)), ((max((arr_5 [i_1 + 1] [i_0 + 3] [i_0 + 3]), (arr_5 [i_1 + 1] [i_0 - 2] [i_0 + 3]))))));
                        }
                    }
                }
                var_19 = (((((7 ? var_14 : 65535))) ? ((var_9 ? 0 : (arr_2 [i_0 - 2]))) : (((arr_2 [i_0 - 2]) ? 1266790375 : var_14))));
            }
        }
    }
    var_20 = (((var_12 ? var_11 : var_8)));
    var_21 = (!var_4);
    #pragma endscop
}
