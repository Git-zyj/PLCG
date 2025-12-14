/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!var_16) ? var_18 : -126));
    var_21 = var_1;
    var_22 = (max(var_22, ((var_2 ? (21 - var_5) : var_3))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [3] [3] = ((arr_0 [i_0 - 1]) ? (((arr_0 [i_0 + 2]) - 7285985573218332133)) : ((2781241529314841791 ? 1 : -5541413613824992579)));

        for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
        {
            var_23 = ((min((arr_4 [i_0 - 1] [i_0] [i_0]), (arr_3 [0]))));
            arr_5 [i_1] [i_1] [1] = (arr_1 [i_1]);
        }
        for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    arr_14 [i_0] [i_2 + 1] [8] [i_4 - 1] = (arr_13 [i_0] [i_0 - 2] [6] [i_0] [8]);
                    arr_15 [i_0] [i_0] [i_0] [i_3] [i_4] = 125;
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_24 = (arr_0 [i_2 + 1]);
                            var_25 = (-127 - 1);
                            arr_20 [i_6] [i_5] [i_3] [i_2 + 1] [9] |= ((((min(1, (arr_11 [i_5] [0] [i_3 - 1] [i_2 - 1])))) ? ((((arr_13 [4] [i_6] [8] [i_3 - 1] [i_2 + 1]) && (arr_11 [7] [i_6] [i_3 - 1] [i_2 - 1])))) : (arr_13 [6] [i_6] [i_6] [i_3 - 1] [i_2 - 1])));
                        }
                    }
                }
                arr_21 [i_0] [i_2] [i_3] [i_3] = ((var_5 && ((min(126, (arr_10 [i_3 - 1] [i_3] [4]))))));
            }
            var_26 = 0;

            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                arr_26 [i_0] [i_2 - 1] [0] = (arr_11 [i_7] [i_2] [i_2] [i_0 + 1]);
                var_27 = ((((((arr_22 [i_2 + 2] [i_2 - 1] [7] [i_0 + 1]) % (arr_22 [i_7] [i_0 + 3] [i_0 + 3] [i_0 + 3])))) ? (arr_24 [i_7]) : var_3));
                arr_27 [i_0 - 1] [9] [i_2] [i_7] = 14215;
            }
        }
        var_28 ^= 3714;

        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_32 [i_8] [5] = (((arr_13 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 - 2]) ? (arr_13 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1]) : (arr_13 [8] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 2])));
            var_29 = var_4;
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_35 [i_0] [i_0] = ((((((arr_16 [i_9] [i_9] [i_9] [i_0] [8] [i_9]) ? (arr_30 [i_9]) : (((arr_1 [i_0 - 2]) & (arr_13 [7] [i_9] [i_9] [i_9] [i_9])))))) ? (arr_22 [i_0] [i_0] [1] [i_0 - 2]) : ((((((var_3 ? var_2 : (arr_1 [i_0])))) ? ((~(arr_17 [i_0] [i_0 - 1] [i_0 - 1] [5]))) : (arr_17 [i_0] [i_0] [i_0] [i_9]))))));

            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                arr_40 [i_10 - 1] [i_10] [i_10] [i_10] = ((!((((arr_33 [i_0 - 1] [i_9] [7]) ? (arr_7 [i_0 + 2] [1]) : (((arr_38 [i_0 + 1] [i_0] [i_0 + 1] [i_10 + 2]) ? (arr_18 [i_0] [i_0] [3] [i_0]) : (arr_33 [i_0] [i_9] [5]))))))));
                arr_41 [i_0] [i_0] [i_0] = max(var_7, (min((arr_11 [i_10] [i_10] [i_10 - 2] [i_10 - 2]), (arr_11 [i_10 + 2] [i_10 + 1] [i_10 - 1] [i_10 - 2]))));
                var_30 = arr_12 [i_10 + 2] [i_10] [i_9] [i_0];
            }
        }
    }
    for (int i_11 = 1; i_11 < 20;i_11 += 1)
    {
        var_31 = arr_42 [i_11] [i_11];
        var_32 = (~(arr_42 [i_11] [i_11]));

        /* vectorizable */
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 0;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            var_33 = arr_50 [i_11] [i_11] [i_11] [i_11];
                            var_34 *= (arr_44 [i_13] [15]);
                            arr_56 [i_13] [i_13] = ((-(arr_50 [i_12 - 1] [i_14 + 1] [i_14 + 1] [i_14])));
                            var_35 = (arr_43 [2]);
                        }
                    }
                }
            }
            arr_57 [i_11 - 1] [i_12 - 1] = (arr_55 [i_11 - 1] [i_12 - 1]);
            /* LoopNest 3 */
            for (int i_16 = 1; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 19;i_18 += 1)
                    {
                        {
                            arr_67 [i_16] [i_16] [i_17] = arr_55 [i_11 + 1] [i_11 + 1];
                            arr_68 [i_11 - 1] [i_11 - 1] [i_16] [i_17] [i_18 - 1] = (arr_49 [i_16] [i_11]);
                        }
                    }
                }
            }
        }
        var_36 = (arr_64 [i_11] [i_11 + 1] [i_11 - 1] [20] [i_11] [i_11 + 1]);
    }
    for (int i_19 = 0; i_19 < 15;i_19 += 1)
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 11;i_21 += 1)
            {
                {
                    arr_75 [i_19] [i_19] [i_19] = ((-(max(1655578487, (arr_72 [4])))));
                    arr_76 [i_19] [9] [9] [i_19] = (arr_65 [i_21 + 4] [i_21] [i_19] [i_19] [i_19]);
                }
            }
        }
        arr_77 [i_19] [i_19] = 1318646525;
        arr_78 [i_19] = (arr_58 [i_19] [i_19] [i_19] [i_19]);
        var_37 = arr_63 [i_19] [i_19] [19];
    }
    #pragma endscop
}
