/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_7);
    var_20 = (min((((-0 && (((-8388608 ? var_13 : var_18)))))), var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (arr_1 [i_0]);
        var_22 -= (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_23 = (max(var_23, (!60852)));
            var_24 = (max(var_24, (var_11 & 22545)));
            var_25 |= (!18446744073709551607);
            var_26 = (((((arr_0 [i_0]) + (arr_3 [i_0] [i_0]))) ^ (18446744073709551602 * var_11)));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_0] [i_0] = (((arr_0 [i_3 + 3]) ? 0 : -var_7));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_27 = ((4700 ^ ((var_10 >> (var_8 + 8006503389572356122)))));
                                arr_16 [i_0] = (((arr_8 [5] [i_0] [i_4]) ? -9164966540185619587 : var_14));
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            var_28 = (1 + 1);
                            var_29 = ((~var_7) ? -4591646137320756751 : var_3);
                            var_30 = (4591646137320756750 % 60851);
                        }
                        arr_22 [i_0] [i_2] [16] [i_2] [i_0] = (!((!(arr_21 [i_6]))));
                        var_31 *= ((var_14 * (arr_20 [i_3 + 3] [i_3 + 1] [i_3 + 1] [i_3] [i_6 - 1])));
                    }
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        var_32 = arr_1 [i_0];
                        var_33 = (min(var_33, ((((arr_5 [1] [1]) ? (!-6156332592183930269) : ((var_14 ? 4080 : 0)))))));
                    }
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        arr_28 [1] [i_0] [i_0] = -var_6;
                        var_34 = (arr_20 [10] [4] [1] [i_2] [i_0]);
                        arr_29 [i_0] [8] = (((var_18 << 1) ? -var_8 : (arr_11 [i_3 - 1] [i_9 - 2] [i_9] [i_9])));
                        var_35 = ((arr_5 [i_3 + 4] [i_3 - 1]) > 32756);
                    }
                }
            }
        }
        arr_30 [i_0] = ((!(arr_15 [i_0] [10] [i_0] [i_0] [i_0])));
    }
    var_36 = (((var_12 == -6602612099345544663) ? (((var_9 / 31) / 988833937956912476)) : 1));
    #pragma endscop
}
