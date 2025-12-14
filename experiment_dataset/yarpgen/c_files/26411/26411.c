/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_11 &= (43 || 1);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, (((((((var_2 * var_5) ? var_6 : (~18446744073709551615)))) || ((max((-4727394488587764328 == 2147483647), var_2))))))));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            var_13 = (~1);
                            var_14 &= ((~(((arr_7 [i_0] [i_4 + 3] [i_4 + 3]) ? var_0 : ((max(36477, var_4)))))));
                            var_15 |= (1 * var_0);
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_16 ^= min(var_2, (max((arr_13 [i_2] [i_1 + 1] [i_1] [i_1 + 1] [i_0 + 2] [i_0] [i_0]), (var_7 ^ 1))));
                            arr_15 [3] [i_1] [i_1] [i_2] [i_3] [i_5] [i_5] = (max((arr_0 [i_5] [i_0]), 8210161018688440621));
                            var_17 += 9223372036854775807;
                            var_18 = (0 << (((min(((min((arr_7 [i_0] [i_2] [5]), var_4))), (arr_3 [i_5] [2] [2]))) + 7808224168513617350)));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_19 = (max(var_19, ((max(1, (((arr_5 [0]) ? 1 : (min(var_8, var_9)))))))));
                            var_20 *= (min(1, (((arr_2 [i_1]) && var_2))));
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] = (-var_4 || var_0);
                        var_21 = ((938604683280040784 ? 1 : -106));
                    }
                }
            }
            arr_19 [i_1 + 1] [i_0] = (max((arr_12 [i_0 + 2]), (((arr_12 [i_0 - 1]) + 26416))));
            var_22 = ((((((-(arr_5 [i_1 + 1])))) ? -var_6 : (arr_16 [i_0] [15] [i_0] [i_0]))));
            arr_20 [i_1 + 1] = var_8;
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                arr_25 [i_8 - 1] = 36;
                var_23 = 1;
                arr_26 [i_0 + 2] [i_7] [i_0 + 2] = 4584908557341490526;
                var_24 = (min(var_24, ((((arr_13 [i_0] [i_0] [i_7] [i_0] [14] [i_8 + 2] [i_8 + 1]) ? var_5 : (arr_23 [i_8 + 1] [i_7 + 1] [i_7 - 1] [i_0 + 1]))))));
            }
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                var_25 = var_0;
                arr_31 [i_0 - 1] [i_7 + 2] [i_9 - 1] [i_9 + 1] = ((!(((var_2 >> (17508139390429510811 - 17508139390429510790))))));
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                arr_35 [i_10] [i_0] [i_0] [i_0] |= var_10;

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_26 = (max(var_26, var_10));
                    var_27 &= (arr_34 [i_0] [i_7 - 1] [i_7]);
                    arr_38 [i_0] [i_7] [9] [i_7] [i_7 + 2] [9] = (var_6 & var_0);
                }
                arr_39 [i_0] [11] [i_0] = (~-38);
            }
            arr_40 [i_0] [i_0 + 2] [i_0 + 2] = 1;

            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                var_28 = (min(var_28, (arr_5 [i_7])));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_29 = (arr_5 [i_7 + 1]);
                            var_30 *= ((-1818435820 ? (~var_5) : var_9));
                            var_31 = var_6;
                        }
                    }
                }
                var_32 = (((arr_10 [i_7] [i_7 - 1] [i_7 - 1] [i_0]) * ((var_0 ? (arr_1 [i_12]) : (arr_22 [i_0 + 1] [6])))));
            }
            var_33 = (max(var_33, -var_8));
        }
        /* vectorizable */
        for (int i_15 = 2; i_15 < 15;i_15 += 1)
        {
            arr_52 [i_15] = (arr_6 [i_15] [i_0 + 1] [1] [i_0 + 1]);
            arr_53 [i_0] [i_0] = (1 ? ((2412070437923945549 ? var_7 : (arr_37 [i_0 - 1] [i_15] [i_15 - 1] [10] [i_0 - 1]))) : (var_10 >= var_9));
        }
    }
    var_34 ^= ((var_8 ? var_10 : ((((min(var_8, -2147483647)))))));
    var_35 = -85;
    var_36 *= ((var_6 ^ ((-(var_9 * var_9)))));
    #pragma endscop
}
