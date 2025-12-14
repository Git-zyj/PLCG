/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_12 = 95;
                    var_13 -= (arr_0 [i_0 + 1]);
                    var_14 *= ((var_8 != (arr_6 [10] [1] [i_1 + 2] [i_1 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] = (70 & 17810);
                                var_15 = var_5;
                                var_16 = (arr_2 [i_0]);
                                arr_14 [15] [1] [i_0] [i_1] [i_0] [14] [i_0] = var_9;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_17 -= ((min((min(var_6, (arr_8 [i_0] [i_1] [i_0] [i_5]))), (arr_16 [12]))));
                    var_18 = (max(((max((((var_0 ? (arr_4 [i_0] [i_1] [i_0]) : (arr_7 [i_0] [i_1 - 1] [i_5] [i_5])))), var_0))), (max((var_3 | 562941363486720), ((max(42608, (arr_11 [i_1]))))))));
                }
                arr_17 [i_0] [i_0] = (((3659205020 ^ 562941363486720) ? (arr_10 [i_0] [i_1 + 1]) : (min((arr_10 [i_0] [i_1 + 1]), 2147483634))));
                var_19 = var_9;
                var_20 = (min(12025706912303684675, (~146)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_7] [i_8] [2] = (((-(arr_27 [i_6]))));
                    arr_30 [i_6] [16] [i_6] = ((((arr_18 [i_6] [i_6]) ? (arr_23 [i_6] [1] [2]) : (arr_25 [i_6] [i_7] [i_8] [i_8]))));
                    var_21 = (max(var_21, ((18446181132346064896 ? 4294967295 : 562941363486719))));
                }
            }
        }
    }
    #pragma endscop
}
