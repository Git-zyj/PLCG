/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 = ((9223372036854775807 ? 1 : 1));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 = (arr_0 [i_0 + 1]);

            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        var_21 *= 65533;
                        arr_15 [i_0] [i_1] = var_8;
                    }
                    var_22 = ((1 ? 0 : 9223372036854775807));
                }
                var_23 = 1;
                var_24 = (min(var_24, -90));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_25 = ((1 ? 1 : (arr_4 [1] [i_0 - 1] [i_0])));

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_22 [i_0 + 1] = 0;
                    arr_23 [i_5] [1] = (((arr_5 [i_0 - 1] [i_0 - 1]) ? ((((arr_7 [i_1] [i_6]) ? (arr_5 [11] [11]) : (arr_12 [i_0] [i_1] [i_5] [i_5] [i_0] [i_6])))) : 0));
                }
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
            {
                var_26 = (~-121);
                var_27 = (min(var_27, ((((arr_20 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2]) ? 1 : (((arr_3 [i_0] [i_0] [i_7]) ? (arr_16 [i_0] [12] [i_7]) : (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [8]))))))));
                var_28 = (arr_5 [i_0] [i_1]);
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_29 = (((arr_8 [i_1]) ? 4 : (arr_29 [i_8] [i_1] [i_8] [i_1])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_35 [i_0] [i_1] [10] [i_0] [i_10] [i_10] [i_10] = 0;
                            var_30 = 0;
                        }
                    }
                }
            }
        }
        var_31 *= -1526797488;
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_32 = arr_37 [i_11];
        var_33 = (min(var_33, (arr_36 [i_11] [i_11])));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {

        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            arr_43 [i_12] [i_13] = arr_42 [i_12];
            var_34 = (min(var_34, var_2));
        }
        for (int i_14 = 3; i_14 < 19;i_14 += 1) /* same iter space */
        {
            var_35 = (~(arr_40 [i_14 + 3] [i_14]));

            for (int i_15 = 2; i_15 < 21;i_15 += 1) /* same iter space */
            {
                var_36 = -103;
                arr_50 [i_12] [i_14] [i_14 - 1] [i_15] = ((~(arr_49 [i_12 + 1] [i_12 + 1] [i_12 + 1])));
                var_37 = (((arr_42 [i_14]) ? 56 : ((18334 ? 1 : (arr_36 [i_12] [i_15])))));
            }
            for (int i_16 = 2; i_16 < 21;i_16 += 1) /* same iter space */
            {

                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        var_38 = (arr_46 [i_14]);
                        var_39 = (1 ? -112 : 895016592);
                    }
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        var_40 = (max(var_40, (arr_49 [i_12 - 1] [i_14 - 1] [i_16 - 1])));
                        var_41 -= (4294967289 ? 218 : (arr_49 [i_16 - 1] [i_17] [i_17]));
                    }
                    var_42 ^= (arr_46 [i_12 - 1]);
                    var_43 *= ((32767 ? 219 : 9));
                    var_44 = (arr_55 [i_17] [i_16] [i_14] [i_14] [i_12]);

                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        arr_63 [i_12] [i_16] [i_14] = 3364254659;
                        var_45 = (min(var_45, ((((arr_60 [i_12 + 1]) ? (arr_60 [i_12 - 1]) : (arr_60 [i_12 - 1]))))));
                    }
                }
                arr_64 [i_14] [i_14] [i_14] = (arr_55 [i_12] [6] [i_12] [i_12 - 1] [i_12]);
            }
            for (int i_21 = 2; i_21 < 21;i_21 += 1) /* same iter space */
            {
                arr_69 [i_12] [i_14] [i_12] = ((((arr_42 [i_14]) ? 1427224077 : 1)));
                var_46 = (min(var_46, ((((arr_57 [i_21] [i_21] [i_12 + 1] [i_12 + 1]) ? ((69 ? 0 : 43834)) : 1)))));
                var_47 = (((arr_49 [i_21 + 1] [i_14 + 3] [i_12 + 1]) ? 632114235 : -124));
                var_48 = 255;
            }
            arr_70 [11] [i_14] = var_3;
        }
        for (int i_22 = 3; i_22 < 19;i_22 += 1) /* same iter space */
        {

            for (int i_23 = 0; i_23 < 22;i_23 += 1)
            {
                var_49 = (arr_54 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 + 1]);
                var_50 = 1;
            }

            for (int i_24 = 1; i_24 < 1;i_24 += 1)
            {
                var_51 ^= var_7;
                var_52 = ((var_5 ? (arr_36 [i_24] [i_24 - 1]) : 1));
            }
            for (int i_25 = 0; i_25 < 22;i_25 += 1)
            {
                var_53 = arr_75 [i_22] [i_22] [i_22] [i_22];

                for (int i_26 = 0; i_26 < 22;i_26 += 1)
                {
                    var_54 = 1;
                    var_55 = (arr_78 [i_22 - 1] [i_22] [i_22 + 1]);
                }
                for (int i_27 = 0; i_27 < 22;i_27 += 1) /* same iter space */
                {
                    var_56 = var_14;
                    var_57 *= (((arr_58 [i_12] [i_22] [i_25] [i_12] [i_22] [i_12] [i_27]) ? (arr_37 [17]) : (arr_81 [15])));
                    var_58 = (min(var_58, (arr_51 [i_12] [i_22] [i_25] [i_27])));
                    var_59 = (arr_77 [i_12]);
                }
                for (int i_28 = 0; i_28 < 22;i_28 += 1) /* same iter space */
                {
                    var_60 = 1;
                    var_61 = (arr_48 [i_22 - 3] [i_12 - 1] [i_12 + 1]);
                }
                arr_86 [i_22] = 1;
                arr_87 [i_22] [i_22] [i_25] [i_22] = 44;
            }
            /* LoopNest 2 */
            for (int i_29 = 1; i_29 < 1;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 0;i_30 += 1)
                {
                    {
                        arr_94 [2] [i_29 - 1] [i_29] [i_29] = (arr_91 [i_29 - 1] [i_22 + 3]);
                        var_62 = (min(var_62, (arr_61 [7] [i_12 + 1] [i_12])));
                        var_63 = (min(var_63, (arr_65 [i_12] [i_22 - 3] [i_29] [6])));
                        arr_95 [i_12] = (((arr_49 [i_22] [i_12 - 1] [i_12]) ? (arr_89 [i_30] [i_12 - 1] [i_12]) : 0));
                    }
                }
            }
        }
        var_64 = (arr_80 [i_12] [i_12]);
        var_65 = (min(var_65, (arr_82 [i_12] [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1])));
    }
    var_66 = (max(var_66, var_14));
    var_67 = var_16;
    #pragma endscop
}
