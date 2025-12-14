/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            arr_17 [1] [7] [7] [1] = 0;
                            arr_18 [i_4] [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] = 181549118;
                            var_18 = var_16;
                        }
                        var_19 = arr_13 [i_0] [i_1] [i_2] [i_3] [i_3];
                        arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0 - 1] = -7342946436817785134;
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] = ((+((7814128011332083213 ? (arr_11 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 1]) : (arr_13 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1])))));
                        var_20 = (min(((max((min((arr_13 [i_5] [i_0] [i_0] [i_0] [i_0]), var_14)), (arr_12 [i_0] [i_0] [i_5 - 1])))), ((((max((arr_3 [i_0]), 32))) ? (arr_8 [i_2] [i_2] [i_2]) : (arr_21 [5] [5] [i_0 - 1] [i_5 + 1])))));
                    }
                    arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] = ((var_1 ? ((((((~(arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))) <= (min(-7342946436817785153, 6))))) : (min(18, ((24052 ? 44632 : var_13))))));
                    var_21 = (((min((arr_12 [i_0] [i_1] [i_2]), 1))) << (((((arr_12 [i_0] [i_1] [i_0 - 2]) | (arr_12 [i_0 - 2] [i_1] [i_2]))) - 32581)));
                }
            }
        }
    }
    var_22 = (((((((min(var_0, var_6))) ? var_4 : var_0))) ? (min((var_9 - var_7), var_4)) : 29373));
    #pragma endscop
}
