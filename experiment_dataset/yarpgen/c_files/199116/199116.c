/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_6, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_1] [i_0] = (((arr_1 [i_1 - 1] [i_1]) | (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2])));
                            var_12 = (((((var_4 == (arr_2 [i_3])))) != var_9));
                            var_13 = ((65535 ? 28258 : var_1));
                            arr_12 [i_0] [i_0] [i_2] [i_2] [i_4] = 28258;
                            arr_13 [i_0] [i_0] [14] [i_3] [i_3] = var_2;
                        }
                    }
                }
            }
            arr_14 [i_0] [i_0] = var_4;
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_14 = (arr_7 [i_0] [i_0] [i_0]);
            var_15 = (((((4162131587 ? 115 : (arr_0 [i_0])))) && (arr_9 [i_5])));
        }
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_16 = 15389837553237603227;
                        arr_25 [i_8] [i_7] [i_7] [i_6] [17] = (arr_22 [i_6 + 1] [16] [19] [19]);
                    }
                }
            }
            var_17 = (min(var_17, 59846));
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            arr_29 [2] [i_0] [i_0] = (45 >> (-335226713 + 335226731));
            var_18 -= ((var_4 >= (arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
        }

        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            var_19 = (arr_4 [i_10 - 2] [8]);
            arr_32 [i_10] [i_0] = ((4294967291 == ((-8973789447166115469 - (arr_18 [i_0])))));
            arr_33 [10] [i_0] [10] &= var_0;
        }
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            arr_36 [8] [i_11] = (arr_9 [i_11 + 2]);
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            arr_46 [i_14] [i_13] [i_11] [i_0] = (var_6 + 4030642746);
                            var_20 = (max(var_20, 335226710));
                        }
                    }
                }
            }
            var_21 = ((var_6 ? 335226695 : (((arr_17 [i_0] [i_11 + 1]) ? var_8 : (arr_22 [13] [i_11] [i_0] [i_0])))));

            for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
            {
                arr_51 [i_0] [i_0] [i_0] [i_0] = var_3;
                var_22 = (min(var_22, ((((arr_34 [i_0] [i_11 + 2] [i_15]) && (arr_43 [i_11 - 1] [i_11 + 2] [i_11 + 1] [7] [i_11] [i_11 + 2]))))));
                arr_52 [1] = ((var_7 | (arr_35 [i_11] [i_11 + 2] [i_11 - 1])));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            var_23 = (min(var_23, var_10));
                            var_24 = (((arr_41 [i_11 - 1] [i_17]) + (arr_41 [i_15] [i_11 + 1])));
                            arr_58 [i_17] [i_0] = (((arr_22 [i_11 + 1] [i_11 + 1] [i_15] [i_15]) ? (arr_10 [i_11 + 1] [i_11] [i_16] [i_16] [i_11]) : 56195));
                            arr_59 [i_0] [i_15] [21] [18] = (((arr_26 [i_0]) % var_6));
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
            {
                var_25 = 47236;

                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    arr_66 [i_19] [i_18] [i_11] [i_0] = 1;
                    var_26 = (max(var_26, var_8));
                }
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    arr_70 [i_0] [i_0] [i_18] [i_0] [i_0] [i_20] = var_4;
                    arr_71 [i_11] [i_18] [i_11] [i_11] [i_0] = (((arr_65 [i_11 - 1] [i_11 + 2]) - (arr_65 [i_11 + 2] [i_11 - 1])));
                    arr_72 [i_0] = (arr_1 [i_11 + 1] [i_11 + 1]);
                }
                arr_73 [i_0] [i_0] [i_11 + 1] [i_18] = (((arr_7 [i_11 - 1] [i_0] [18]) && var_1));
            }
            for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
            {
                var_27 = 1798051468;
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 20;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 22;i_23 += 1)
                    {
                        {
                            arr_84 [9] [12] [i_21] [17] [0] [9] [17] = -1;
                            var_28 = (((arr_78 [i_0] [i_11 + 2] [i_21] [i_22 + 1]) - (arr_78 [i_0] [i_11 + 2] [i_22] [i_22 - 2])));
                        }
                    }
                }
            }
            for (int i_24 = 0; i_24 < 22;i_24 += 1) /* same iter space */
            {
                arr_89 [3] [i_11] [i_24] &= var_2;
                arr_90 [i_0] &= 5697;
                var_29 -= -335226695;
            }
            arr_91 [i_0] = (((((arr_7 [i_11 + 1] [i_11 + 1] [i_11]) + 9223372036854775807)) << (var_3 - 355557590)));
        }
        for (int i_25 = 0; i_25 < 22;i_25 += 1)
        {
            /* LoopNest 3 */
            for (int i_26 = 0; i_26 < 1;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 22;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        {
                            arr_104 [i_26] [10] [i_26] [i_28] [1] [i_0] [i_0] = (arr_18 [i_0]);
                            arr_105 [i_0] [i_0] [i_0] [i_0] [4] = (var_8 + 61360);
                            arr_106 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_37 [i_26] [i_25] [i_27]);
                        }
                    }
                }
            }
            arr_107 [6] [i_25] [i_25] = ((arr_62 [i_25] [i_25] [i_25] [i_25]) != (arr_24 [i_0] [i_0] [i_25] [i_25] [i_25] [i_0]));
        }
        var_30 = ((((((arr_76 [12] [15] [i_0] [i_0]) <= (-9223372036854775807 - 1)))) >> (var_3 - 355557570)));
        var_31 = (((((arr_6 [i_0] [20] [20]) ? 162 : 47373)) >> (((18300 + -646883816454082591) + 646883816454064316))));
    }
    var_32 = (min(var_4, var_6));
    var_33 = (min(var_33, var_1));
    #pragma endscop
}
