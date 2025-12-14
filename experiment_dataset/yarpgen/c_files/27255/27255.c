/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = ((var_12 << (-2102301396 <= var_12)));
    var_15 = (var_8 || -2102301373);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (~0);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = ((((max((!var_10), var_4))) ? var_1 : ((((max(var_7, 126))) ? var_2 : 1))));
            var_18 = -var_1;
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (min(0, 1183491955));
        var_19 = (min((((((255 ? 8573157376 : 127))) || 4294967295)), (!var_12)));
        arr_12 [i_2] [i_2] = ((!((((!(arr_8 [i_2] [1]))) && (((1 ? var_12 : var_8)))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_20 = ((max((arr_4 [i_3] [i_3]), (!1))));
            arr_19 [i_4] = var_1;
            arr_20 [15] [14] = (((max(127, var_8)) / (((65531 ? 65531 : 0)))));
        }

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_21 = ((min(2102301396, 1689)));
            arr_24 [i_3] [i_5] [i_5] = (min(var_11, (~var_9)));
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_27 [i_6] = (((((arr_4 [i_6] [i_6]) + 2147483647)) >> (16 || var_10)));
        arr_28 [1] = ((-6509019972415740714 || ((var_4 || (arr_4 [i_6] [i_6])))));
        var_22 = var_11;
        var_23 = (((((max(1183491967, var_0)))) ? ((-(max(-8219, var_8)))) : (var_11 | var_1)));
    }

    for (int i_7 = 3; i_7 < 7;i_7 += 1) /* same iter space */
    {
        arr_32 [i_7 + 1] |= (((((var_4 >> (((max(2998473805, 7248519564305125309)) - 7248519564305125299))))) ? ((((min(53592, 32767))))) : (arr_8 [i_7 + 1] [i_7 - 2])));

        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_24 = (((-28902 && 7052) ? (((!((max(63, var_8)))))) : (((!(!var_8))))));
            var_25 = var_9;
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_26 = ((var_1 < ((var_4 + ((var_7 ? 63836 : 1))))));
            arr_40 [i_7 - 3] = ((~(min(var_11, (arr_4 [i_9] [i_7 + 2])))));
        }
        var_27 = ((max(1032746902605192635, -28902)) ^ ((max(var_11, 1))));
    }
    for (int i_10 = 3; i_10 < 7;i_10 += 1) /* same iter space */
    {
        var_28 = -9223372036854775806;
        var_29 |= ((((~(arr_38 [i_10 + 4]))) & var_12));
        arr_43 [i_10 - 1] [i_10 - 1] = ((((arr_29 [i_10] [i_10 + 3]) ? (arr_29 [i_10] [i_10 + 2]) : (arr_16 [i_10]))));
        arr_44 [i_10] = var_12;
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_57 [i_11] [i_11] [i_12] [i_11] [i_13] [i_14] = var_3;
                        arr_58 [i_11] [i_12] [i_12] = (((max(var_7, 27892))) && ((((var_0 ? var_6 : var_7)))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_15 = 1; i_15 < 11;i_15 += 1)
        {
            arr_61 [i_11] = (var_8 ^ var_5);

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                arr_64 [i_11] [i_15] = ((var_7 ? 38 : (arr_48 [i_15 - 1])));

                for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                {
                    var_30 = (!1032746902605192640);
                    arr_69 [i_11] [i_11] [i_15 - 1] [i_16] [i_15 - 1] [i_11] = var_9;
                }
                for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
                {
                    arr_72 [i_11] = var_1;
                    var_31 = var_6;
                    var_32 = var_7;
                    var_33 = (arr_8 [3] [i_11]);
                }
            }
            for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
            {
                var_34 = -52;
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        {
                            var_35 = var_3;
                            var_36 = 18446744073709551615;
                            var_37 |= var_11;
                        }
                    }
                }
                arr_82 [4] [i_19] [i_15] [4] |= (-13696 != 7056);
            }
            for (int i_22 = 0; i_22 < 13;i_22 += 1) /* same iter space */
            {
                arr_85 [6] [9] [i_11] [i_22] = (((arr_62 [i_15 - 1] [i_15 - 1] [i_15 + 2] [i_15 + 2]) - (var_6 & 1)));
                var_38 = var_6;
                var_39 = -var_0;
                arr_86 [2] [i_11] [i_15] [i_22] = ((var_10 || (!var_2)));
            }
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 13;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 13;i_24 += 1)
                {
                    {
                        var_40 ^= var_1;
                        arr_92 [9] [9] [9] [i_11] = 18446744073709551596;
                        arr_93 [i_11] = (var_6 ? var_9 : var_7);

                        for (int i_25 = 1; i_25 < 10;i_25 += 1)
                        {
                            var_41 = (!var_4);
                            var_42 = (~6931314869044825015);
                            var_43 = ((var_6 | var_9) ? var_6 : (var_8 | var_6));
                        }
                        for (int i_26 = 0; i_26 < 1;i_26 += 1)
                        {
                            arr_99 [i_11] = ((var_9 ? 0 : var_8));
                            var_44 = var_12;
                            arr_100 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [1] = (var_11 / 1);
                            var_45 = (var_8 && 1);
                        }
                        for (int i_27 = 1; i_27 < 10;i_27 += 1)
                        {
                            arr_103 [i_11] [i_15] [i_15] = (arr_91 [i_15 - 1] [i_15 + 1] [i_11]);
                            arr_104 [i_11] [i_27] = ((var_6 ? var_11 : (((var_6 ? var_0 : var_2)))));
                            var_46 = (arr_54 [i_15 + 1] [i_11] [i_15 - 1]);
                            arr_105 [i_11] [i_11] = var_6;
                        }
                    }
                }
            }
            arr_106 [i_11] = var_11;
        }
    }
    #pragma endscop
}
