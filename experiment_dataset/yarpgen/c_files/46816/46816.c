/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 |= max(((((var_5 ? (arr_0 [i_0] [i_1]) : var_4)) / (((arr_2 [i_0] [i_0]) ? (arr_3 [6]) : var_3)))), (~var_7));
                arr_5 [i_0] [i_1] [i_1] = (((max(var_9, (arr_0 [i_0] [i_1]))) != (arr_0 [i_0] [i_1])));
                arr_6 [i_1] = (~(min((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_1]))));
            }
        }
    }
    var_11 |= (!var_2);

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_12 = var_5;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_13 [i_2] = ((var_9 <= (arr_8 [i_3])));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_13 = arr_17 [i_2] [i_3] [i_3] [i_3] [i_3];
                        var_14 = (var_7 & (arr_12 [i_2]));
                        var_15 = ((var_4 | var_0) | (arr_15 [i_2] [i_3] [i_4] [i_2]));
                    }
                    arr_18 [i_2] [i_4] = (arr_14 [i_2] [i_3]);
                }
            }
        }
        arr_19 [i_2] [i_2] = ((arr_10 [i_2] [i_2] [i_2]) ? var_0 : (arr_10 [i_2] [i_2] [i_2]));
        var_16 = 1122667581;
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_17 = 8191;
        arr_23 [4] |= ((-((((!var_6) || ((max(var_5, (arr_14 [i_6] [i_6])))))))));

        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            arr_26 [i_6] [i_7 + 1] = var_7;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_32 [i_6] [i_6] [i_8 - 1] [i_9 - 2] [i_9 - 2] [i_6] = (1949848816 ? (min(((((arr_20 [i_6] [7]) >= var_5))), var_9)) : (((arr_20 [i_6] [i_6]) ? (arr_20 [i_6] [i_6]) : (arr_20 [i_6] [i_6]))));
                        var_18 = (min(var_18, (max((((!(arr_22 [i_7])))), ((var_4 ? var_3 : (arr_10 [i_8 - 1] [i_7] [i_7])))))));

                        for (int i_10 = 4; i_10 < 12;i_10 += 1)
                        {
                            arr_37 [i_7] [i_9 - 3] [i_6] [12] [i_7] |= ((~var_2) ? ((-(arr_30 [i_10 - 3] [2] [i_7 + 2] [i_7]))) : (((arr_30 [i_10 - 1] [i_8 - 1] [i_7 - 1] [i_7 - 2]) ? (arr_30 [i_10 - 4] [1] [i_7 - 2] [i_7]) : 4294959105)));
                            var_19 *= var_1;
                            arr_38 [i_6] [i_7] [i_8] [i_9 - 3] [i_7] [i_9 + 1] [i_8] |= min(var_9, (max(var_6, (arr_27 [i_10] [i_8 - 1] [i_9 + 1] [i_8 - 1]))));
                            var_20 = max(((3399551001 ? var_3 : var_8)), ((-((1737628937 ? var_5 : (arr_24 [i_6]))))));
                            arr_39 [i_6] [i_7] [i_8] [0] [i_10 - 1] &= 470764646;
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_21 = (((max((min(0, var_2)), (max((arr_42 [i_8 + 1] [i_6] [i_8] [i_9] [2]), var_5))))) ? ((var_2 ? var_3 : (arr_17 [i_7 - 2] [i_7] [i_8 - 1] [i_9 - 2] [i_9]))) : ((var_8 ? (arr_29 [i_6] [i_6] [i_6] [i_8 + 3]) : var_2)));
                            var_22 = (((((!((!(arr_9 [i_6]))))))) - 1684566942);
                            var_23 = (min(var_23, ((((max(var_7, (arr_29 [i_9 - 2] [i_7] [i_9 - 1] [i_9 + 1])))) ? -var_0 : ((var_9 ? (arr_42 [i_9 - 2] [i_7] [i_9] [i_9 + 1] [i_9 - 2]) : (arr_42 [i_9 - 2] [i_7] [i_9] [i_9 + 1] [i_9 - 2])))))));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                var_24 = 4132770771;
                arr_47 [i_6] [i_7] [i_6] [i_6] = var_1;
                arr_48 [i_6] [i_12] = (~(arr_34 [10] [i_6] [i_12]));
                var_25 = (var_0 * (arr_46 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 - 2]));
                var_26 = ((arr_44 [i_7] [i_7 + 1] [i_7 + 1]) * var_9);
            }
            var_27 = (min(var_27, (arr_16 [i_6] [i_6] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7])));
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            arr_51 [i_13] [i_6] [i_6] = (var_8 ? 0 : (((arr_46 [i_6] [i_6] [i_13] [i_6]) % (arr_49 [i_6] [i_6]))));
            arr_52 [i_6] = (max(var_8, var_1));

            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                arr_57 [i_6] [i_6] [i_6] [i_6] = var_0;
                arr_58 [i_6] [i_6] [7] [i_6] = ((-903167492 ? ((arr_27 [i_6] [i_13] [i_14] [i_13]) : -var_4)));
                var_28 = var_7;
                var_29 = var_9;
            }
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                var_30 = (min(var_30, (min(var_2, (arr_60 [i_6] [i_13] [i_15])))));
                var_31 = var_4;
                var_32 = min((max(var_3, var_7)), (min(var_1, 4294967295)));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_33 = 2933107979;
                            arr_66 [i_6] [i_15] [i_6] [i_16] [i_17 + 2] [i_17] [i_6] = (((arr_11 [i_17 - 1]) ? var_5 : (arr_35 [i_17 + 2] [i_17 + 2] [4] [i_17] [i_6])));
                        }
                    }
                }
                arr_67 [13] [0] [i_6] = min(((((var_6 ? var_2 : 4169380451)) ^ (max((arr_31 [i_6] [i_6] [10]), var_3)))), (!var_1));
            }
            arr_68 [i_6] = min((max((max(var_8, var_1)), (max((arr_64 [i_6] [i_6] [i_6] [10] [i_6]), var_6)))), var_9);
        }
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            var_34 = (min(var_34, (max(((((arr_31 [0] [2] [i_6]) != (arr_22 [12])))), ((var_3 ? var_4 : 0))))));
            arr_71 [i_6] [i_18] = min(((var_2 ? (min(var_1, (arr_12 [i_6]))) : var_6)), ((((min(var_7, 4294967290))) ? (min((arr_60 [i_6] [i_18] [i_6]), var_4)) : var_3)));
            var_35 = ((((~(arr_44 [i_6] [i_6] [i_18])))) ? (min(var_1, var_2)) : (min((arr_69 [i_18] [i_6] [i_6]), (arr_65 [i_6] [i_18] [i_6] [i_18]))));
        }
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            /* LoopNest 3 */
            for (int i_20 = 1; i_20 < 12;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 14;i_22 += 1)
                    {
                        {
                            var_36 = min((max(((var_4 ? var_0 : var_8)), var_1)), ((var_1 >> (-var_6 - 4185652373))));
                            arr_85 [i_22] [i_6] [i_20 + 2] [i_19] [i_6] [i_6] = (~var_6);
                            var_37 = (~(min(var_2, (arr_49 [i_20 - 1] [i_6]))));
                            arr_86 [i_6] [i_19] [i_6] = ((((var_1 ? 162196526 : 13) >> (((arr_43 [i_20] [i_20] [i_20 + 1] [i_20] [i_20 - 1] [i_22] [i_22]) - 4133030424)))));
                        }
                    }
                }
            }
            var_38 = max((arr_65 [i_6] [i_19] [i_19] [i_19]), ((-(min(var_7, (arr_20 [i_6] [i_6]))))));
            arr_87 [i_6] [i_6] = ((!(arr_64 [i_6] [i_6] [i_19] [i_19] [i_6])));
            arr_88 [i_6] [i_19] [i_6] = (~(((arr_79 [i_19] [i_19] [i_6] [10]) ? var_4 : (arr_56 [i_6]))));

            for (int i_23 = 0; i_23 < 14;i_23 += 1)
            {
                arr_91 [i_6] [i_19] [i_6] = var_2;
                var_39 = (+(((arr_89 [i_6] [i_19] [i_23] [i_23]) + var_2)));
                var_40 = (((2055766844 >= (arr_35 [i_6] [i_19] [i_6] [i_19] [i_6]))) ? ((~(arr_35 [i_6] [i_6] [i_23] [i_6] [i_6]))) : (2040 | var_4));
            }
        }
        arr_92 [i_6] = (((((var_1 ? var_3 : 1073741824))) <= ((min(var_7, var_5)))));
        arr_93 [i_6] [i_6] = ((((((arr_90 [i_6] [i_6]) != (arr_90 [i_6] [i_6])))) - (((!(4294967295 > var_3))))));
    }
    #pragma endscop
}
