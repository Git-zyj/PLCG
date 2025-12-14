/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (0 >> (((((var_15 >> (32644 - 32640))) < -104))));
    var_19 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = var_4;
                                var_20 = (~-var_14);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_21 = 6556497421262603911;
                                arr_22 [i_0] = ((-((max(var_5, (arr_7 [i_0] [i_1] [i_2] [i_6]))))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_7] [i_0] = -26;
                            var_22 = ((((((arr_12 [i_8] [i_8 + 4] [i_8 + 4] [i_8 + 3] [i_8 + 2]) ^ var_5))) ? (47 ^ var_8) : (3236728681 <= -5550)));
                        }
                        arr_30 [i_0] [i_1] [i_1] [i_1] = (max(((min((((var_10 && (arr_8 [i_0] [i_1] [i_7])))), var_5))), 1256659056));
                        var_23 = (max(43, var_16));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_0 [i_2 - 1]) ? 1392076821 : 7979233624682251321))) ? 1058238602 : 18446744073709551615));
                        var_24 = (-38 ? 1058238607 : 14157468099428798892);
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((!15) ^ var_9)));
                        var_25 += -var_17;
                        var_26 = var_12;
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_27 |= (~1058238614);

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_0] = ((-((var_1 ? (6 <= 7) : (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) : 1))))));
                            var_28 = (min((arr_28 [i_2] [i_2 - 1] [i_2] [i_2] [i_0]), 5486722120126108917));
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_0] = 1;
                            var_29 = ((var_11 << (((-46 + 75) - 15))));
                        }
                        for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                        {
                            var_30 = var_2;
                            var_31 = 11861;
                            var_32 = ((-(min((arr_23 [i_2 + 1] [i_2 - 2] [i_2]), var_8))));
                        }
                    }
                    var_33 = (((-26 < (arr_36 [i_0] [i_2 - 3]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            {
                var_34 = (((((var_13 ? -1 : 18))) < (max(((var_17 ? var_13 : (arr_48 [i_14] [i_14]))), (var_10 | var_9)))));
                var_35 = (min(var_35, (((((min(var_4, (arr_12 [i_14] [i_14] [i_14] [i_14] [i_15]))))) && 1))));
            }
        }
    }
    #pragma endscop
}
