/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((min(var_2, var_4))))));
    var_14 = ((((min(var_1, var_7)) != var_1)));
    var_15 = (max(1, (((((min(var_2, var_6)) + 2147483647)) << ((((((min(1, var_6))) + 1792)) - 10))))));
    var_16 = var_12;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 ^= (min(((~(1 >> 1))), 1));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_18 = (arr_0 [i_1 - 1]);
            var_19 = var_9;
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_20 = var_1;
            var_21 = (arr_4 [i_0] [i_0] [20]);

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_22 = (arr_8 [0] [i_3]);
                arr_9 [16] [16] [i_3] |= var_0;
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_23 = var_1;
                arr_13 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1] = var_6;
                var_24 = (var_2 ? 1 : 1);
                var_25 = (max(var_25, ((((arr_3 [i_0] [i_0 + 1] [i_0 + 1]) ? (arr_12 [i_2 + 1] [7] [i_0] [i_0]) : (arr_3 [18] [i_0 + 2] [8]))))));
                var_26 = (((var_9 / (arr_11 [i_0] [i_0] [i_0]))));
            }
        }
        for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                var_27 = var_7;

                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    var_28 = (max(var_28, 1));
                    var_29 -= ((1 && ((1 && ((max(var_8, var_6)))))));
                }
            }
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                arr_25 [i_5] [i_5] = (1 == 1);
                var_30 = (arr_1 [i_0]);
            }
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                arr_28 [i_0] [i_5] [13] = var_3;

                /* vectorizable */
                for (int i_10 = 2; i_10 < 21;i_10 += 1)
                {
                    var_31 = var_0;
                    var_32 = (min(var_32, (+-1)));
                    arr_32 [i_5] [i_9] = (!(arr_16 [i_0 - 1] [i_9 - 1]));
                    arr_33 [i_0] [i_0] [16] [i_0] [i_5] = (((arr_2 [1]) - var_6));
                }
                /* vectorizable */
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    arr_37 [i_5] [10] = (((arr_11 [i_5 - 1] [i_9 - 1] [i_11 - 2]) && var_8));
                    var_33 *= (arr_22 [i_9 - 1] [i_11 - 1]);
                    arr_38 [i_0 - 1] [i_5] [i_11] = 1;
                }
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                arr_42 [i_0 + 1] [i_0 + 1] [12] [i_12] &= (((arr_39 [i_12] [i_0] [i_0]) ? (1 >> 1) : (max(((((arr_5 [11] [0] [i_12]) == (arr_22 [9] [i_5])))), ((var_12 ? (arr_27 [i_0] [i_0] [i_0]) : (arr_34 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5])))))));
                var_34 = (max(var_34, (arr_22 [i_12] [i_5 - 3])));
            }

            /* vectorizable */
            for (int i_13 = 1; i_13 < 18;i_13 += 1)
            {
                arr_45 [i_5] [i_5] [i_13] = (1 & 1);
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 20;i_15 += 1)
                    {
                        {
                            arr_52 [i_5] [i_14] [i_13] [i_13] [i_0] [i_0] [i_5] = ((!(arr_44 [i_13 - 1] [i_13 - 1] [i_0 - 1])));
                            arr_53 [i_15 + 2] [i_14] [19] [i_5] [i_0] [i_13 - 1] [2] = var_2;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                var_35 ^= (1 ? var_10 : (arr_50 [i_0 + 1] [i_0 + 1] [i_5 - 1] [i_5] [i_5 - 1]));
                var_36 &= 1;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_37 = (((((arr_55 [i_5] [21] [i_5]) >= var_4))) <= (((arr_7 [i_0] [2]) * 1)));
                            arr_61 [i_0 + 2] [i_5] [i_16] [9] [i_18 + 1] [i_0] [i_5] = ((arr_11 [i_0] [i_17] [i_16]) ^ (((((arr_30 [5] [i_5 - 2]) == var_8)))));
                            var_38 = ((~(arr_30 [20] [i_17])));
                        }
                    }
                }
                var_39 = (~var_4);
                var_40 -= (~1);
            }
            arr_62 [i_0] [i_5] = ((1 ^ ((min((arr_39 [i_5] [i_5 - 3] [i_5 - 1]), (arr_39 [i_5] [i_5 + 1] [i_5 + 3]))))));
        }
        /* vectorizable */
        for (int i_19 = 2; i_19 < 19;i_19 += 1)
        {
            arr_66 [i_0] [12] &= var_3;

            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 21;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 22;i_22 += 1)
                    {
                        {
                            var_41 -= (arr_16 [20] [i_22]);
                            var_42 = ((!((((arr_31 [0]) ? 1 : 1)))));
                            var_43 ^= (((arr_50 [18] [18] [1] [i_20] [i_21 + 1]) ? var_3 : var_8));
                            arr_74 [i_21] [15] [0] = (((arr_68 [20] [i_21 + 1] [i_19 - 1]) % (arr_68 [i_22] [i_21 + 1] [i_19 - 1])));
                        }
                    }
                }
                var_44 = ((var_4 != (arr_69 [i_0] [i_0] [3] [i_0 - 1])));
                arr_75 [i_20] = (~1);
                arr_76 [i_0] [i_0] = ((!(!1)));
                var_45 = var_12;
            }
            var_46 -= ((~(arr_48 [i_0] [i_0] [i_19])));
            arr_77 [i_0] [14] = (arr_11 [i_0 - 1] [i_19] [18]);
            var_47 -= var_5;
        }
        var_48 = var_8;
    }
    for (int i_23 = 2; i_23 < 8;i_23 += 1)
    {
        arr_81 [i_23] = (((((min(var_8, var_6)) * (arr_35 [i_23 - 2]))) * ((max(1, 1)))));
        var_49 = (max(var_49, (arr_7 [i_23 + 1] [i_23 + 1])));
        var_50 = (((var_9 * (1 * var_4))));
        var_51 |= var_1;
        var_52 = (max(var_52, ((((min(1, var_2))) != (arr_14 [i_23 + 2] [i_23 + 2] [i_23 + 1])))));
    }
    /* vectorizable */
    for (int i_24 = 3; i_24 < 21;i_24 += 1)
    {

        for (int i_25 = 1; i_25 < 21;i_25 += 1)
        {
            arr_86 [i_25] = ((((arr_83 [i_24]) - var_7)));

            for (int i_26 = 2; i_26 < 21;i_26 += 1) /* same iter space */
            {
                var_53 = (!var_6);
                var_54 = var_8;
            }
            for (int i_27 = 2; i_27 < 21;i_27 += 1) /* same iter space */
            {
                arr_91 [i_24] [i_25] [i_27 - 2] [i_25 + 2] = (arr_83 [i_24 + 1]);
                var_55 = 1;
            }
            var_56 = (max(var_56, var_0));
        }
        for (int i_28 = 1; i_28 < 22;i_28 += 1)
        {
            /* LoopNest 2 */
            for (int i_29 = 1; i_29 < 21;i_29 += 1)
            {
                for (int i_30 = 3; i_30 < 21;i_30 += 1)
                {
                    {
                        var_57 = 1;
                        arr_102 [i_29] [i_29] [i_29] [19] [i_29] [i_29] = (arr_89 [i_30 - 1] [i_30 - 1] [i_30 - 1] [i_30 - 1]);
                    }
                }
            }

            for (int i_31 = 2; i_31 < 20;i_31 += 1)
            {
                var_58 = (((var_3 > var_5) * (arr_104 [i_24] [i_28] [i_31 - 2])));
                var_59 += (arr_85 [22] [i_28 + 1] [i_31]);
            }
            for (int i_32 = 3; i_32 < 22;i_32 += 1)
            {
                arr_109 [i_32] = (1 <= 1);
                var_60 -= ((1 ? 1 : 1));
                var_61 = ((var_11 / (arr_90 [i_32 - 2] [i_24 - 2] [i_28 - 1])));
                var_62 = ((((1 ? (arr_92 [i_28]) : (arr_104 [i_24] [i_28] [1]))) / var_3));
            }
            for (int i_33 = 1; i_33 < 20;i_33 += 1)
            {
                arr_112 [i_28] [6] [i_28] [i_28] |= (1 << (!var_7));
                var_63 -= (arr_100 [i_33 + 1] [18] [i_33]);
                /* LoopNest 2 */
                for (int i_34 = 1; i_34 < 20;i_34 += 1)
                {
                    for (int i_35 = 0; i_35 < 23;i_35 += 1)
                    {
                        {
                            arr_120 [i_24] [i_33] [16] [i_33] [i_35] = (1 << 1);
                            arr_121 [11] [21] [i_33] [i_33] [i_35] [i_33] = ((var_10 * (arr_115 [5] [i_28 + 1] [i_28] [15] [18] [18])));
                        }
                    }
                }
            }
            arr_122 [14] [i_28] [i_28 - 1] = var_5;
            var_64 = (arr_96 [i_24] [i_28] [20] [i_24]);
        }
        arr_123 [15] = ((((((arr_116 [i_24] [8] [8] [i_24] [8] [0]) <= 1))) >= (arr_95 [2])));
    }
    #pragma endscop
}
