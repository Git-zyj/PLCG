/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 ^= ((var_3 == (arr_5 [i_1] [i_1])));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_2] [i_2 - 1] = var_3;

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            arr_15 [i_2] [i_2] [i_1] [i_2 - 2] [i_3] [i_2] = ((var_7 >= (arr_7 [i_0] [i_1] [i_3 - 1] [i_0])));
                            var_16 = (max(var_16, 6510368855560571940));
                            arr_16 [i_0] [1] [1] [1] [i_2] = (!65535);
                        }
                        var_17 ^= (!var_3);
                        var_18 *= (var_1 / 65528);

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_0] [i_5] = (((arr_9 [i_0] [i_0] [i_2] [i_2]) ? var_1 : var_4));
                            arr_21 [i_0] [i_1] [i_2 - 1] [i_2] [i_5] [i_1] = 6503339092538073302;
                            var_19 = 9485;
                        }
                    }

                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_2] [i_6] [i_6 - 1] = (((((arr_19 [i_0] [12] [i_2] [i_6] [i_0]) > 16383)) ? (arr_6 [i_1] [i_2 + 1] [i_1]) : ((var_9 ? var_6 : 3446923800469262038))));
                        arr_25 [8] [i_2] [8] [9] [i_2] [i_0] = 149150683;
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_29 [i_0] [i_2] [1] [i_7] = ((11943404981171478313 ? var_8 : 6503339092538073303));
                        var_20 |= (arr_13 [17] [i_2] [0]);

                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            arr_34 [i_8] [i_2] [i_2] [i_7] [i_8] = var_12;
                            arr_35 [2] [i_1] [2] [i_7] [i_2] [2] = 4;
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_21 *= 0;
                            arr_38 [i_2] = var_4;
                        }
                    }
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        arr_41 [i_0] [i_0] [i_0] [1] [i_2] [i_10] = var_3;

                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            arr_44 [i_2] [i_1] [i_10] [i_10 + 3] [12] [i_1] [i_2] = ((var_10 - (4080 | var_5)));
                            var_22 = ((((arr_26 [i_0]) ? 63488 : (arr_26 [i_0]))));
                            var_23 *= ((var_11 ? ((var_13 ? var_6 : var_12)) : 20671));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            arr_47 [i_0] [i_1] [i_2] [i_10 + 3] [i_2] = 4080;
                            arr_48 [i_1] [17] [i_10 + 3] [i_2] [i_10 + 3] = 1;
                        }
                        var_24 ^= (((arr_13 [i_2 + 1] [i_2 - 1] [i_10 + 3]) >= var_7));
                        var_25 = ((7 ? (arr_27 [i_2 - 1] [i_2 + 1] [i_10 + 3] [i_10 - 1]) : var_6));
                        arr_49 [i_2] = 5888613321121013298;
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        arr_53 [i_2] = var_8;

                        for (int i_14 = 1; i_14 < 16;i_14 += 1) /* same iter space */
                        {
                            arr_57 [1] [1] [i_2] [i_13] [i_2] = 1;
                            arr_58 [7] [11] [i_14 + 1] [i_2] [i_14 + 1] = ((var_0 / 532768069) ? var_1 : 1138553493);
                            arr_59 [i_0] [8] [i_2] [i_13] [i_2] [i_0] [i_0] = var_10;
                            arr_60 [i_0] [i_2] [i_0] = ((~(-1 > 65528)));
                        }
                        for (int i_15 = 1; i_15 < 16;i_15 += 1) /* same iter space */
                        {
                            var_26 ^= var_0;
                            var_27 *= ((var_1 << (((arr_50 [i_1] [i_2 + 1] [i_15 + 2] [i_15 - 1] [i_0] [i_15 - 1]) - 49449))));
                            arr_65 [i_2] [i_2] = ((65529 ? ((var_14 ? var_0 : -6510368855560571943)) : ((13893625468293574642 ? (arr_52 [i_15] [i_0] [i_2 + 1] [i_0]) : var_7))));
                            arr_66 [i_2] [i_13] [i_2] [i_2] = ((17845358334013828841 ? -21 : 5768));
                        }
                        var_28 = (max(var_28, 47));
                    }
                }
            }
        }
    }
    var_29 |= ((0 ? -6198535109287827005 : 65529));
    #pragma endscop
}
