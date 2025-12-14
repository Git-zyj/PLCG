/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_11 - 18446744073709551615);
    var_19 = 9223372036854775807;
    var_20 *= (var_10 / 4294966784);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0] [i_0]) ? (((min(var_2, (arr_2 [i_0]))))) : -var_5));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_22 = var_16;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = 9223372036854775807;
                            arr_13 [i_0] [i_1] [i_0] = 2147483647;
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_23 = (min(var_23, (((!(1108307720798208 - var_17))))));
                            var_24 = (arr_11 [i_5] [i_5] [i_3] [i_1] [i_0] [i_1] [i_0]);
                            arr_18 [i_5] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0] = ((((~(arr_7 [i_0]))) - var_12));
                            var_25 *= (arr_8 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1]);
                            var_26 |= 9223372036854775807;
                        }
                        arr_19 [i_0] [i_1] [i_1] [i_1] [i_0] [i_3] = var_11;
                        var_27 = ((var_2 ? (arr_0 [i_0] [i_2 + 1]) : (arr_0 [i_0] [i_2 - 1])));
                    }
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_28 = ((-var_2 ? (((9223372036854775807 / 9223372036854775807) - (arr_2 [i_0]))) : 10643));
                        var_29 |= (((arr_11 [i_2 + 1] [i_1] [i_6] [i_6 - 1] [i_1] [i_1] [i_6]) / 41285));
                        var_30 = ((((var_10 ? var_7 : (-9223372036854775807 - 1))) - (arr_21 [i_6] [i_2 - 1] [i_2 + 1] [i_1] [i_0])));
                    }
                    var_31 = var_4;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_32 = (min(((var_2 ? var_3 : (arr_22 [i_2 + 1]))), (min((arr_24 [i_0] [i_0]), (arr_17 [i_2] [i_7])))));
                                var_33 = var_0;
                                var_34 = ((((((var_13 - var_0) / (min(var_0, var_16))))) ? (((((var_16 / (-9223372036854775807 - 1))) - (32256 - 41285)))) : (min((arr_26 [i_0] [i_7] [i_2 - 1] [i_2] [i_8] [i_2 - 1] [i_2]), var_10))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = (min(((var_9 ? 255 : ((min(var_4, var_2))))), ((((var_2 ? var_5 : var_13))))));
    #pragma endscop
}
