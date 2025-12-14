/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (min((arr_1 [i_1]), (min((arr_0 [i_0]), (arr_1 [i_0])))));
                arr_4 [i_0] [i_1] = (arr_1 [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_2] [i_1] [i_0] = ((((((arr_7 [i_1]) ? (arr_1 [i_0]) : 5436228620759594751))) ? (arr_1 [i_0]) : -5436228620759594733));
                    var_19 = (-2147483647 - 1);
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, ((min(7571893430985192160, ((((((5436228620759594725 / (arr_6 [i_3] [i_0] [i_0]))) + 9223372036854775807)) >> (var_4 + 704677948))))))));
                    var_21 = ((((min(-1500621733, ((2622374891 ? var_8 : var_8))))) ? ((min(var_6, (arr_0 [i_3])))) : ((((~var_2) ? (((5436228620759594721 != (arr_10 [i_3] [i_1] [i_0])))) : 249)))));
                    var_22 = (min((((~7571893430985192165) ? var_2 : ((~(arr_6 [i_0] [i_1] [i_3]))))), -5436228620759594728));
                    var_23 ^= ((((((~var_10) == (!3679804233)))) * 200));

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_24 = (min(var_24, (arr_10 [i_1] [i_3] [i_4])));
                        arr_15 [i_4] [i_3] [i_1] [i_0] = var_5;
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_5] [i_3] [i_5] = (min((~var_13), ((min((arr_1 [i_5 + 2]), 19)))));
                        arr_20 [i_0] [i_5] [i_5] [i_5] = (arr_10 [i_0] [i_0] [i_5]);
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_6 - 1] [i_6] [i_3] [i_3] [i_1] [i_0] = (((-2147483647 - 1) > (arr_7 [i_6])));
                        var_25 = (min(var_25, ((((arr_7 [i_0]) <= (((arr_12 [i_6 + 1] [i_6 + 2] [i_6 + 2] [i_6 - 1]) ? (arr_14 [i_6 + 1] [i_6 + 2] [i_6] [i_6 - 1] [i_6] [i_6]) : (arr_14 [i_6 + 1] [i_6 + 2] [i_6] [i_6 - 1] [i_6] [i_6]))))))));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_26 ^= (-(arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1]));
                            arr_26 [i_7 - 1] [i_1] [i_3] [i_6] = (-5646 < -2748105875);
                            var_27 = -310163241482202643;
                            arr_27 [i_0] [i_0] [i_3] [i_6] [i_6] = 20541;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_28 = ((!(((-(arr_28 [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6] [i_6]))))));
                            arr_30 [i_0] [i_1] [i_3] [i_6] [i_8] = -5436228620759594719;
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_35 [i_0] [i_1] [i_1] [i_3] [i_6] [i_9] = ((((min(((((arr_22 [i_6] [i_9]) == var_11))), (((arr_17 [i_0] [i_0] [i_6 - 1]) ^ (arr_16 [i_0] [i_0] [i_0] [i_0])))))) ? (arr_29 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1]) : ((-(arr_33 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 - 1])))));
                            var_29 *= (arr_28 [i_0] [i_0] [i_0] [i_6] [i_3]);
                        }
                    }
                }
            }
        }
    }
    var_30 ^= var_13;
    var_31 = (min(var_3, var_2));
    #pragma endscop
}
