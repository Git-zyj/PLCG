/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = ((~(!1)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = 4168379530071312435;
            var_13 = 14278364543638239170;
            var_14 = (min(var_14, 1));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_15 = (arr_0 [i_0]);
                var_16 = (((!(arr_0 [i_0]))));
                arr_8 [i_0] = 14766813371081897735;
                arr_9 [i_0] [i_1] = (~4168379530071312445);
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_17 += -6448537833697387160;
                var_18 = (min(var_18, (((~(((arr_7 [0] [i_1] [i_1]) >> (((arr_5 [i_3] [0] [i_0]) - 4573949523912405243)))))))));
            }
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_19 = (((-(arr_14 [i_0] [i_0]))));
            var_20 &= 2147483647;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_21 |= ((((!(arr_0 [i_6]))) && ((((!(arr_22 [i_6] [i_4] [2] [i_6] [i_7])))))));
                            var_22 = (max(var_22, (((3993780405 || (-96 || 14534206989293524108))))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_23 = ((~(arr_6 [i_8] [i_0] [i_0])));
            var_24 = arr_18 [i_0] [i_8] [i_0] [i_8];
        }
        var_25 ^= 2189539664;
        var_26 = ((!(arr_10 [i_0] [i_0] [i_0] [8])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_30 [i_9] [i_9] [i_9] = (((arr_29 [i_9]) || (arr_27 [0])));

            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                var_27 += 32767;
                var_28 = (max(var_28, (arr_28 [i_11] [i_10] [i_9])));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_29 = (max(var_29, 22520));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        {
                            var_30 = (!9);
                            arr_41 [i_14] = -42;
                            var_31 = (max(var_31, 4168379530071312466));
                            var_32 = (max(var_32, (arr_31 [i_13] [i_13] [1])));
                        }
                    }
                }
                arr_42 [i_10] [i_10] [i_9] = (arr_28 [i_9] [i_10] [i_12]);
                var_33 = (arr_40 [i_9] [i_9] [i_12] [i_12] [i_10]);
            }
            arr_43 [9] [i_10] [i_10] = 2;
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            arr_47 [i_15] [i_15] = (((arr_39 [6]) == 209341977));
            var_34 = (arr_37 [i_9]);
            var_35 = (arr_32 [i_9]);

            for (int i_16 = 4; i_16 < 9;i_16 += 1)
            {
                var_36 ^= 4168379530071312466;
                arr_50 [i_15] [i_16] = (123 != 11);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 11;i_18 += 1)
                    {
                        {
                            var_37 = (arr_49 [i_16 - 4] [i_15]);
                            arr_58 [0] [i_15] [i_15] [i_16] [0] [i_18] = (arr_40 [i_18] [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_18]);
                        }
                    }
                }
            }
            arr_59 [i_15] [i_15] [i_9] = -5535;
        }
        var_38 = (max(var_38, (((-1 != (arr_40 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        arr_60 [i_9] [i_9] = (arr_55 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
    {
        var_39 = (((-(arr_63 [i_19]))));
        arr_64 [i_19] = (arr_61 [i_19]);
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
    {
        arr_67 [i_20] = 11;
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 14;i_21 += 1)
        {
            for (int i_22 = 2; i_22 < 12;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 1;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 14;i_24 += 1)
                        {
                            {
                                arr_77 [i_21] [i_21] [10] [i_20] [i_22] = (arr_72 [i_22 - 2] [i_23 - 1] [1] [i_22]);
                                var_40 = (arr_62 [i_20]);
                                var_41 = ((((arr_75 [i_20] [i_21] [i_21] [i_23 - 1] [i_21] [i_22]) != (arr_65 [i_20]))));
                            }
                        }
                    }
                    var_42 = (min(var_42, ((((0 != (arr_65 [i_20])))))));
                    var_43 = (arr_75 [1] [i_22 - 2] [i_22 + 2] [i_20] [i_20] [i_21]);
                }
            }
        }
    }
    var_44 = var_3;
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 15;i_25 += 1)
    {
        for (int i_26 = 4; i_26 < 13;i_26 += 1)
        {
            {
                arr_84 [i_25] [i_25] = ((~(arr_83 [i_25] [i_26 - 4] [i_25])));
                arr_85 [i_25] [i_25] [i_26] = (((((((arr_83 [i_26 + 2] [i_26 + 2] [i_26 - 3]) || (arr_80 [i_26 + 1] [i_26 + 2]))))) > (arr_80 [i_25] [i_26 + 1])));
                arr_86 [i_25] [i_26] [i_26] |= (arr_78 [7]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_27 = 1; i_27 < 19;i_27 += 1)
    {
        for (int i_28 = 3; i_28 < 16;i_28 += 1)
        {
            {
                var_45 = ((arr_88 [i_28] [i_28]) / (((arr_87 [i_27 - 1]) / (arr_87 [i_28 + 3]))));
                arr_93 [i_27 - 1] [i_27] = arr_90 [i_28] [i_27] [i_27];

                for (int i_29 = 0; i_29 < 20;i_29 += 1)
                {
                    arr_96 [i_27] = (arr_91 [i_27 + 1] [i_28 + 2] [i_27 - 1]);
                    arr_97 [i_29] [i_28] [i_27] = ((((arr_90 [i_27 + 1] [i_27 + 1] [i_28 + 3]) != (arr_90 [i_27 + 1] [i_27 + 1] [i_28 + 1]))));
                }
                /* LoopNest 2 */
                for (int i_30 = 1; i_30 < 16;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 20;i_31 += 1)
                    {
                        {
                            var_46 = ((((arr_102 [i_30 + 3] [i_27 + 1] [i_30] [i_31] [i_28 - 1]) == (arr_102 [i_30 + 1] [i_27 - 1] [i_30] [i_30] [i_28 - 1]))));
                            var_47 += ((499677169 || (arr_98 [i_27] [i_28 + 2] [4])));
                            var_48 = (arr_99 [i_31] [i_30] [i_28] [i_27]);
                            var_49 = (min(var_49, (arr_98 [i_28 + 3] [i_31] [6])));
                        }
                    }
                }
            }
        }
    }
    var_50 += var_0;
    #pragma endscop
}
