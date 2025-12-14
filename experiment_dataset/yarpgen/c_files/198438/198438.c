/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_14 = 3066825164;
            var_15 = ((~(-103 || var_13)));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_1 + 2] [i_2] = ((var_0 ? (((((arr_3 [i_0] [i_1] [i_2]) && var_9)))) : 1228142151));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_15 [4] [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [6] = ((118 > (arr_1 [i_1 - 1] [i_4 - 1])));
                            var_16 = (var_13 && 103);
                        }
                    }
                }
                arr_16 [i_0] [i_0] = 107;
                var_17 -= -var_10;
            }
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                arr_20 [i_0] [i_0] = 114;
                var_18 = -var_10;

                for (int i_6 = 4; i_6 < 23;i_6 += 1)
                {
                    arr_25 [i_0] [i_1 - 1] [i_5] [i_5] = (((((~35) + 2147483647)) >> (166 - 141)));

                    for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, var_13));
                        arr_30 [i_0] [20] [i_0] [5] [i_7] = (((((~(arr_14 [i_6] [i_1 + 2] [i_5] [i_6] [i_7] [i_7 + 1])))) && var_1));
                    }
                    for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [9] [i_0] = (((arr_19 [i_0] [i_6 + 1]) && (arr_19 [i_0] [i_6 + 2])));
                        var_20 = (((arr_28 [i_6] [i_8] [i_5] [i_6] [i_8] [i_6 + 1] [i_5]) ? (arr_0 [i_0]) : (arr_28 [10] [i_1 + 2] [10] [i_1 + 2] [i_0] [i_6 - 4] [6])));
                        var_21 = var_11;
                        var_22 = var_8;
                        arr_34 [i_0] [i_6] [i_6 - 1] [i_6 + 1] [i_0] = 3066825177;
                    }
                    for (int i_9 = 1; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_23 = var_1;
                        var_24 = (((-3352622422660501322 ^ -111) ? -var_2 : 1523469726121579814));
                        arr_39 [i_0] = (((arr_1 [i_1] [i_5 - 1]) <= var_2));
                        var_25 = (!-3234160803076004845);
                    }
                    var_26 = (((arr_13 [i_0] [i_5 + 1] [i_6 - 1] [i_1 + 1]) ? var_11 : 2727312605));
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_27 *= ((2727312600 ? (var_0 >= var_7) : ((var_9 ? var_9 : -3352622422660501322))));
                    var_28 = ((arr_35 [i_0] [i_5 - 2] [i_1 - 1] [i_1] [i_0]) <= (var_1 > 69));
                }
            }
            var_29 = (((-146629975 & var_11) != (arr_26 [i_0] [12])));
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_30 *= (~26);
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_31 = (127 == 831408031);
                        var_32 = (((((~((-29740 ? (arr_36 [i_0] [i_12] [24] [i_13] [i_0] [24]) : var_12))))) ? var_6 : ((((arr_26 [i_12 - 2] [i_12 - 2]) && (arr_21 [i_0] [i_0] [i_0]))))));
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_33 = (((arr_54 [i_0] [i_14] [i_14]) ? ((min(3040827590, var_4))) : (((arr_38 [20] [1]) / (arr_24 [i_0] [i_0] [i_14] [i_14] [i_14])))));
            var_34 = (((((14 ? (9223372036854775807 & var_4) : 0))) && (((var_3 ^ (0 + 222146168554576623))))));
            var_35 = -30590;
        }
    }
    var_36 = var_1;
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 17;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            {
                var_37 = (max(var_8, (((!(-29525 / -116))))));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 18;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 18;i_18 += 1)
                    {
                        {
                            var_38 = (max(var_38, ((((((var_11 ? 118 : var_9))) ? (((((arr_48 [i_17] [i_18 + 1] [i_17 + 1]) && 51)))) : (min(var_8, var_5)))))));
                            var_39 = (max(-105, 146629975));
                            arr_64 [15] [i_16] [i_17] [i_18 - 2] = ((((((var_10 ? var_4 : var_7)))) * (!var_3)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
