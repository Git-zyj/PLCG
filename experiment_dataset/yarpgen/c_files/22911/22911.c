/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [22] |= (arr_0 [i_0 + 1] [i_0 + 1]);
        arr_3 [i_0] = var_15;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_17 += ((20893 ? 71776119061217280 : 20880));
            var_18 = (220 < 20880);
        }

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_19 = ((~(((arr_0 [i_0] [i_0 - 1]) + (arr_1 [i_0])))));
            arr_10 [i_0] = (min((min(1125899898454016, ((max(1, 20910))))), 1));
        }
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_13 [9] [9] = var_14;

        /* vectorizable */
        for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_20 = (max(var_20, (arr_7 [20])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_21 = var_10;
                        var_22 &= var_5;
                        var_23 ^= (((arr_4 [4] [i_6] [i_3 + 1]) << (var_2 - 2042630770)));
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_24 = (min((max((var_1 ^ var_0), (arr_1 [i_7]))), (((((min(1, 0))) || 7411088380950856947)))));
            arr_24 [i_7] = (max((((arr_20 [i_3 - 1] [i_7] [1] [i_3 + 1]) >= var_13)), ((0 || (arr_22 [i_7])))));
            var_25 = (min(var_25, 7803103657946491355));
            var_26 = (max(var_26, var_7));
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_27 += (((arr_8 [i_8 - 1] [i_8 - 2] [i_8 - 1]) ? 71776119061217280 : (~0)));
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 8;i_11 += 1) /* same iter space */
                        {
                            var_28 = (var_16 % var_1);
                            var_29 += (-20894 == var_3);
                        }
                        for (int i_12 = 1; i_12 < 8;i_12 += 1) /* same iter space */
                        {
                            arr_39 [0] [8] [0] [i_8] [i_10] = (arr_11 [i_3] [i_8]);
                            var_30 = (var_3 ? (arr_27 [i_3] [4] [i_8]) : (arr_37 [2] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_12 + 2] [i_8] [0]));
                        }
                        arr_40 [11] [i_8] [0] [10] = var_8;
                        arr_41 [i_10] [1] [0] [0] &= (arr_30 [i_3] [0] [i_8] [i_8] [4] [i_10 + 1]);
                        var_31 = (min(var_31, ((((arr_11 [8] [8]) || var_10)))));
                    }
                }
            }
            var_32 = (0 != 20894);
        }
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 9;i_15 += 1)
            {
                {

                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        var_33 -= 0;
                        var_34 = ((7121 ? 1 : 1798585962113756196));
                        arr_52 [i_13] [i_14 - 3] [i_16] [9] [4] [i_16] = (((arr_0 [i_13] [i_14 - 2]) && var_8));
                        var_35 = -6750;
                    }
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        var_36 = (arr_29 [i_13] [2]);

                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            var_37 -= var_4;
                            var_38 = (!var_12);
                        }
                        for (int i_19 = 0; i_19 < 12;i_19 += 1)
                        {
                            arr_63 [i_13] [i_13] [i_13] [i_13] [0] |= (((((arr_38 [i_13] [i_14] [6] [i_19] [i_19] [i_13 + 1]) && 10643640415763060282)) && (((~(arr_23 [i_13] [i_15]))))));
                            var_39 = arr_42 [i_13];
                        }
                        for (int i_20 = 0; i_20 < 12;i_20 += 1)
                        {
                            var_40 = arr_4 [i_14] [i_20] [i_17];
                            var_41 = var_8;
                        }
                        for (int i_21 = 3; i_21 < 9;i_21 += 1)
                        {
                            var_42 = (var_11 - var_4);
                            arr_69 [11] [6] [8] [8] [i_21] [i_13] = (var_13 ^ var_5);
                            var_43 = (((arr_18 [i_17] [i_17] [4] [i_21]) ^ var_9));
                        }
                    }
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        var_44 = 1;
                        arr_73 [11] [8] |= (~var_13);
                    }
                    var_45 = -102;
                }
            }
        }
        arr_74 [i_13] [i_13] = ((17531 - ((var_12 + (arr_16 [i_13] [i_13] [i_13] [2])))));
        var_46 = (max(var_46, -var_11));

        for (int i_23 = 1; i_23 < 11;i_23 += 1)
        {
            arr_79 [i_23] [i_23] = var_2;
            var_47 += (arr_77 [i_23 - 1] [2]);
            arr_80 [i_23] [i_23] [i_13 + 1] = 1;
        }
        for (int i_24 = 0; i_24 < 12;i_24 += 1)
        {

            for (int i_25 = 0; i_25 < 12;i_25 += 1)
            {

                for (int i_26 = 3; i_26 < 11;i_26 += 1)
                {
                    arr_91 [10] [10] [i_25] [i_25] [i_25] |= var_4;
                    var_48 = (max(var_48, 0));

                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        var_49 = (1 + 7803103657946491386);
                        arr_96 [i_24] [i_24] [i_27] [i_24] = ((3584 ? 1829143811 : -95));
                    }
                    for (int i_28 = 1; i_28 < 11;i_28 += 1) /* same iter space */
                    {
                        arr_99 [i_24] [i_26 - 2] [i_25] [i_26] = var_13;
                        arr_100 [i_13] [i_24] [2] [2] [i_28 - 1] = var_2;
                        arr_101 [i_26] [i_24] [i_25] [i_24] [i_24] = (arr_67 [i_26] [8] [i_26] [i_26] [i_26]);
                        var_50 = (max(var_50, ((var_0 ? 7803103657946491355 : var_1))));
                    }
                    for (int i_29 = 1; i_29 < 11;i_29 += 1) /* same iter space */
                    {
                        var_51 = (((arr_15 [i_29 + 1] [i_13 - 1] [i_24]) ? (arr_15 [i_29 + 1] [i_13 + 1] [i_24]) : 1099511627775));
                        var_52 = (~var_14);
                        var_53 = (min(var_53, 18446744073709551615));
                        var_54 &= var_9;
                    }
                    for (int i_30 = 2; i_30 < 11;i_30 += 1)
                    {
                        var_55 = (arr_56 [i_13] [i_24] [i_25] [i_25]);
                        arr_106 [i_25] [i_24] = var_0;
                    }
                    var_56 &= -102;
                }
                for (int i_31 = 1; i_31 < 10;i_31 += 1)
                {
                    arr_110 [i_13 - 1] [i_24] [i_31] [i_13 - 1] = 11332515143225639989;
                    var_57 = (min(var_57, var_1));
                    var_58 = (((arr_90 [9] [i_24] [i_25] [i_24] [3] [i_25]) && var_4));
                    var_59 = ((~(arr_102 [i_13] [i_13] [i_24] [i_13] [i_31])));
                    var_60 += (arr_89 [i_13 - 1]);
                }

                for (int i_32 = 0; i_32 < 12;i_32 += 1)
                {
                    var_61 |= var_7;
                    arr_113 [i_13 + 1] [8] [i_25] [i_32] [8] &= var_10;
                    var_62 = (max(var_62, (arr_76 [i_32])));
                }
            }
            for (int i_33 = 0; i_33 < 12;i_33 += 1)
            {
                var_63 = 536870911;
                arr_116 [i_24] = (((arr_45 [i_13 - 1]) > var_14));
                var_64 = (((~255) ? (!255) : (arr_70 [1] [i_13 - 1] [i_33] [i_24])));
            }
            arr_117 [9] [i_24] [i_24] = ((var_8 && (!var_16)));

            for (int i_34 = 0; i_34 < 12;i_34 += 1)
            {
                var_65 = (var_4 + (arr_103 [8] [8] [0] [8] [i_13 + 1] [i_13 - 1]));
                arr_121 [i_24] = 17541;
                var_66 = (max(var_66, (((arr_37 [i_13] [i_24] [i_34] [i_24] [8] [1] [i_13]) ? (arr_72 [i_13] [i_13 - 1] [7] [i_13 + 1] [i_13]) : (arr_60 [0] [0] [i_24])))));
            }
            for (int i_35 = 0; i_35 < 12;i_35 += 1)
            {
                var_67 = 64;
                var_68 = (min(var_68, 48));
                arr_124 [i_24] [i_24] [3] = var_14;
            }
            arr_125 [i_24] = ((!(arr_58 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [6])));
        }
        arr_126 [i_13] = ((-(arr_43 [i_13 + 1])));
    }
    for (int i_36 = 2; i_36 < 19;i_36 += 1)
    {
        arr_129 [i_36] = (arr_6 [i_36] [i_36]);
        var_69 *= ((!((max(13666054770554719845, 10551778752065250245)))));
        /* LoopNest 3 */
        for (int i_37 = 0; i_37 < 22;i_37 += 1)
        {
            for (int i_38 = 0; i_38 < 22;i_38 += 1)
            {
                for (int i_39 = 0; i_39 < 22;i_39 += 1)
                {
                    {

                        for (int i_40 = 3; i_40 < 19;i_40 += 1)
                        {
                            var_70 = ((!(((146 ? 9223055909639839430 : 146)))));
                            var_71 = var_0;
                        }
                        var_72 = ((((((max(var_12, (arr_127 [i_36])))) ? var_10 : -8))) ? var_8 : 0);
                        var_73 |= (max(((min((var_5 && var_16), (!-1184122211)))), (max(var_8, (arr_137 [i_36 + 3])))));
                        var_74 *= (((arr_8 [4] [i_36] [i_36]) > var_16));
                    }
                }
            }
        }
        var_75 ^= (max(((((((max(var_12, var_16)))) <= (arr_7 [12])))), 1333571159));
    }
    var_76 = var_15;
    var_77 = (((var_8 && -var_4) >> var_0));
    #pragma endscop
}
