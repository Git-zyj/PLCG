/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (var_8 / var_14);
                                var_18 = var_10;
                            }
                        }
                    }
                    var_19 = ((((((!((min(var_5, var_13))))))) * (min((min((arr_7 [i_1] [i_1] [i_2] [i_1] [i_1]), var_3)), (arr_2 [i_0] [i_1] [i_1])))));
                    arr_10 [i_2] [i_2] = var_9;
                }
                var_20 = ((((!(((-(arr_9 [i_0] [i_0] [i_0] [6] [10])))))) && ((((((var_6 + 2147483647) << (var_9 - 2334920770730361814))) << (((arr_1 [i_1]) - 9945)))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_14 [i_5] = (min((arr_11 [i_5] [i_5]), (((((((arr_12 [i_5]) << (((arr_11 [13] [i_5]) - 2135277487))))) && (((-(arr_11 [i_5] [i_5])))))))));
        var_21 = (372770006479669857 / 9223372036854775807);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_18 [i_6] [i_6] = (arr_16 [i_6]);
        var_22 = ((((var_11 - (arr_16 [i_6]))) - (arr_17 [i_6])));
        var_23 = var_6;

        for (int i_7 = 3; i_7 < 13;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_24 = (var_2 / (arr_16 [4]));
                var_25 = (arr_19 [i_6] [i_7]);
            }
            for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_31 [6] [i_7 - 2] [i_9] [i_10] [5] [i_11 - 1] = (arr_20 [i_9] [i_9]);
                            arr_32 [i_6] [i_7] [i_9] [i_10] [i_11 - 1] [i_7] = ((+(((arr_21 [i_7] [i_7] [i_9]) % var_0))));
                            var_26 = (((arr_27 [i_6] [6] [i_6] [i_11]) / (arr_17 [i_6])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_27 = (arr_27 [i_7] [i_12] [i_7] [i_6]);
                            var_28 = (((((arr_29 [i_6] [i_7] [i_12]) >> (var_15 - 13616904306699334772))) << ((((arr_28 [i_6] [i_6] [i_6] [i_6] [i_6]) && var_5)))));
                            var_29 = (2739 & 1);
                        }
                    }
                }
            }
            for (int i_14 = 1; i_14 < 13;i_14 += 1) /* same iter space */
            {
                var_30 = ((!(57419 / 9223372036854775807)));
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 4; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_31 = (((arr_35 [i_16] [i_14] [i_7] [i_6]) * (var_3 / var_2)));
                            arr_47 [i_6] [i_6] = arr_36 [i_6] [i_16] [i_6] [i_6];
                            arr_48 [i_6] [1] [i_6] [i_6] [1] [i_6] = (arr_39 [i_6]);
                            var_32 = (var_10 / (arr_13 [0]));
                        }
                    }
                }
                var_33 = (((arr_41 [i_6] [i_7 - 1] [i_14]) / -4566372678362088758));
            }
            arr_49 [i_6] [i_6] = ((var_13 != (~var_13)));
        }
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
    {

        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            var_34 = ((var_14 && (((-(min(var_8, (arr_30 [3] [9]))))))));

            for (int i_19 = 2; i_19 < 13;i_19 += 1)
            {
                arr_58 [i_19] = (min((min(14, 1)), var_1));
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 13;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        {
                            arr_63 [i_17] [i_18] [i_19] [i_19] [13] [i_20] = ((((((var_12 / (arr_17 [i_17]))))) && (arr_56 [i_17] [i_19] [i_19] [i_17])));
                            var_35 = var_15;
                            var_36 = (arr_40 [i_18]);
                            arr_64 [i_19] [i_18] [8] [i_18] [i_18] = (arr_30 [i_21] [i_18]);
                            var_37 = var_0;
                        }
                    }
                }
            }
            for (int i_22 = 4; i_22 < 10;i_22 += 1)
            {
                var_38 = min(((min((min((arr_51 [i_17]), (arr_56 [i_17] [13] [13] [13]))), (arr_57 [i_17] [i_17])))), var_15);
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 14;i_24 += 1)
                    {
                        {
                            arr_72 [i_17] [i_24] [i_22] [i_23] [i_23] = (arr_26 [i_17] [i_18] [i_22] [i_23] [i_22]);
                            var_39 = (arr_35 [i_17] [2] [i_17] [i_17]);
                            var_40 = (!var_6);
                            var_41 = var_8;
                        }
                    }
                }
                arr_73 [i_17] [i_18] [6] = ((((min((arr_46 [i_17] [i_17] [i_17] [i_17] [i_22 - 3]), var_10)) * ((min((arr_65 [i_17] [i_17] [i_22 - 3]), var_8))))) | ((min((min((arr_33 [1] [i_18] [i_22] [i_18]), (arr_20 [i_17] [i_17]))), 1))));
                arr_74 [i_17] [i_17] [i_17] [4] = (arr_55 [i_17] [i_17]);
            }
            var_42 = (arr_42 [0] [i_18] [i_17] [i_17]);
        }
        for (int i_25 = 0; i_25 < 14;i_25 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 14;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {
                    {
                        arr_81 [i_17] [i_25] [i_25] [7] [i_26] = (((min((((arr_41 [i_17] [3] [i_25]) & var_4)), (!var_12))) % ((-(min(var_10, var_7))))));
                        var_43 = var_11;
                        var_44 = var_11;
                    }
                }
            }
            arr_82 [i_17] [i_25] [i_25] = (min(-1, -5815));
        }
        for (int i_28 = 0; i_28 < 14;i_28 += 1) /* same iter space */
        {
            arr_87 [i_17] = (((arr_84 [7]) & (arr_61 [i_28] [i_28] [i_28] [i_17] [i_28] [i_17])));
            arr_88 [i_17] = ((+(min((~var_6), (((arr_53 [i_17] [i_28]) & (arr_55 [i_17] [i_17])))))));
            var_45 = (arr_69 [1]);
        }
        var_46 = (4055535862360576971 <= 0);
        arr_89 [i_17] [i_17] = (3190 != 32767);
    }
    var_47 = var_7;
    var_48 = (((min(var_10, (~var_10))) ^ (0 | 32767)));
    var_49 = var_6;
    #pragma endscop
}
