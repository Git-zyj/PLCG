/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((var_11 && var_7) ? var_5 : 8388480));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0 + 1]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_15 &= (8388484 | -1276174958);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0 - 1] [4] [i_0 + 1] [i_0 - 1] [i_1] [i_0] = (arr_8 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1]);
                        var_16 = (((arr_7 [i_0 + 1] [i_3]) ? 2 : var_9));
                        arr_11 [i_1] [i_1] [4] [i_1] = -120;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_16 [i_0 - 1] [8] [12] [i_5] &= (((var_7 ? var_5 : var_0)));

                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            arr_20 [i_0 + 1] [i_1] [i_4] [i_1] [i_6] = (((arr_0 [i_0 + 1]) == 13052));
                            arr_21 [i_0 + 1] [i_5] [i_4] [i_5] [i_0 + 1] |= (((arr_9 [i_6 - 2] [i_4 + 1] [i_0] [i_0 + 1]) - (arr_19 [i_0 + 1] [i_5] [i_4 + 2] [i_6] [i_6])));
                            arr_22 [i_0] [i_1] [9] [i_5] [i_6] [i_4] = (i_1 % 2 == zero) ? (((((((arr_18 [i_0] [i_1] [i_4 + 2] [i_4 + 2] [14]) <= 17460))) >> (((arr_6 [i_1]) - 1007178972))))) : (((((((arr_18 [i_0] [i_1] [i_4 + 2] [i_4 + 2] [14]) <= 17460))) >> (((((arr_6 [i_1]) + 1007178972)) + 1120580211)))));
                            arr_23 [i_0 - 1] [i_1] = var_9;
                        }
                        var_17 = (max(var_17, (arr_6 [i_5])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_18 = arr_17 [i_9] [i_7] [i_8 - 1] [i_7] [i_0];
                        var_19 |= (arr_12 [i_9] [i_9]);
                        var_20 += (~-120);
                        arr_34 [i_0 - 1] [i_7] [i_8 + 1] [i_8 + 1] [i_9] = (((arr_28 [i_0 - 1]) ? (arr_30 [i_8 + 2] [i_0 - 1] [i_7 - 1] [i_8 + 2] [i_0 - 1]) : (arr_28 [i_0 + 1])));
                        arr_35 [i_7] [i_7] [i_8] = ((-(arr_29 [i_0 - 1])));
                    }
                }
            }

            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_21 = ((-var_0 ? (!var_2) : (32767 <= -1292084662)));
                            var_22 = (min(var_22, var_3));
                            arr_45 [i_12] [i_11] [i_11] [i_11] [i_7 + 1] [i_0] &= (((arr_30 [i_12 - 4] [i_7 - 1] [i_7] [i_7 - 1] [i_12 - 1]) <= (((var_6 ? (arr_12 [i_11] [i_11]) : (arr_13 [i_11] [i_10] [i_7]))))));
                            arr_46 [i_7] [6] [i_10] [i_11] [i_12] = var_3;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_23 += -var_13;
                            var_24 = var_1;
                        }
                    }
                }
            }
            arr_55 [i_7] = (((arr_29 [i_0]) ? (((arr_40 [i_0 + 1] [i_7] [i_0] [i_7] [i_0 + 1] [i_7 - 2]) * 5380973983983466166)) : (arr_13 [i_0 + 1] [i_0 + 1] [i_7 - 1])));
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 14;i_15 += 1) /* same iter space */
        {
            var_25 -= ((11220976271568584002 && (arr_50 [0] [0])));
            var_26 = ((var_4 >= (arr_39 [6] [i_15] [i_0] [6])));
            /* LoopNest 2 */
            for (int i_16 = 3; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    {
                        var_27 += 17449;
                        var_28 += (arr_60 [11] [i_15] [11]);
                        var_29 = (~(arr_6 [i_17]));
                        arr_65 [14] [i_0] [i_0 - 1] &= var_7;
                    }
                }
            }
            var_30 &= (arr_25 [i_15 - 1] [i_0 + 1]);
            arr_66 [i_0] [2] = -82;
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 14;i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 14;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 11;i_20 += 1)
                {
                    {
                        var_31 |= (arr_44 [i_0] [i_18 - 2] [i_20 + 4] [2] [i_19 + 1] [i_0 + 1]);
                        arr_75 [i_20] [i_20] [i_19] [i_19] [i_20] [i_0] = var_8;
                        var_32 = (((arr_49 [i_0 + 1] [6] [i_0]) ? 82 : (arr_14 [i_0 - 1] [i_18 - 2] [i_19 + 1] [12])));
                    }
                }
            }
            var_33 = (max(var_33, (!var_5)));
            /* LoopNest 2 */
            for (int i_21 = 3; i_21 < 12;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 13;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 15;i_23 += 1)
                        {
                            var_34 -= (arr_13 [i_23] [i_22 - 2] [3]);
                            arr_84 [i_21] = (~var_5);
                        }
                        for (int i_24 = 1; i_24 < 13;i_24 += 1)
                        {
                            var_35 = 1295765658;
                            arr_87 [i_18] [i_18] [14] [i_18] [4] [i_18] [i_21] = (((arr_7 [i_0 - 1] [i_0 + 1]) ? (-2147483647 - 1) : var_2));
                            var_36 *= (((arr_69 [i_0 + 1]) && (arr_58 [i_22 - 1] [i_21 - 2] [i_18 - 1])));
                        }
                        for (int i_25 = 0; i_25 < 15;i_25 += 1)
                        {
                            arr_90 [i_0] [i_18] [i_21 + 1] [i_21] [i_25] = (((~(arr_58 [i_18] [i_18] [i_18]))) | (arr_68 [i_25]));
                            arr_91 [7] [12] [i_21 - 1] [i_22 + 2] [i_22 + 1] [i_21] = 8388480;
                            var_37 = (((arr_85 [i_21]) & (arr_85 [i_21])));
                        }
                        arr_92 [i_21] [i_18] [i_18] [3] = var_3;
                    }
                }
            }
        }
        var_38 = (min(((~(arr_31 [8] [i_0 - 1]))), (arr_37 [4] [i_0])));
        arr_93 [i_0 - 1] [i_0 - 1] = ((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]) ^ (arr_32 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1]))));
    }
    /* vectorizable */
    for (int i_26 = 1; i_26 < 19;i_26 += 1) /* same iter space */
    {
        var_39 = (arr_95 [i_26 + 3]);
        /* LoopNest 2 */
        for (int i_27 = 1; i_27 < 20;i_27 += 1)
        {
            for (int i_28 = 3; i_28 < 20;i_28 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_29 = 3; i_29 < 21;i_29 += 1)
                    {
                        for (int i_30 = 2; i_30 < 21;i_30 += 1)
                        {
                            {
                                var_40 = ((arr_99 [i_26]) ? 887595073 : (arr_100 [i_28 + 2] [i_29 - 2] [i_29 - 2] [i_28 + 2]));
                                var_41 = (max(var_41, var_10));
                            }
                        }
                    }
                    var_42 = var_2;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_31 = 1; i_31 < 19;i_31 += 1) /* same iter space */
    {
        arr_110 [i_31] = (arr_101 [16] [12] [6] [16]);
        var_43 = ((!((18769 != (arr_106 [i_31] [i_31] [i_31] [6] [i_31 + 3] [11])))));
    }
    var_44 = (~(!var_10));
    #pragma endscop
}
