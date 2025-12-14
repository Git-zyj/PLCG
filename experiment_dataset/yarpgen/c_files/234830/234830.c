/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [3] [i_1] = min((min(((max(var_12, var_10))), var_0)), var_10);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_1] [i_1] [i_2] = 65532;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            arr_15 [8] [i_1] [i_3] [6] [i_4] [6] = var_2;
                            arr_16 [i_0] [i_1] = var_7;
                            arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = var_5;
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_3] [i_1] [i_2] [i_3] [i_2] = var_8;
                            arr_22 [0] [1] [i_3] [i_2] [i_3] [i_0] [i_0] |= ((var_3 ? (arr_18 [i_1] [i_2 - 1] [i_1] [i_1] [i_2 - 1] [i_2 - 1]) : (arr_3 [2] [i_2 - 1] [i_3])));
                            arr_23 [0] [i_1] [i_2 - 1] [i_2 - 1] [i_1] = var_6;
                        }

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_27 [i_0] [i_3] [i_2] [i_0] [i_6] [i_3] [i_6] = (((arr_2 [i_1] [6]) ? (arr_2 [i_0] [6]) : (arr_2 [i_1] [i_1])));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] |= var_14;
                        }
                        arr_29 [i_1] [i_1] = (~var_11);
                    }
                    arr_30 [1] [0] [i_1] [1] = -73;
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                    {
                        arr_37 [i_1] [i_7] [i_1] [i_1] = ((var_3 ? -var_8 : 3));
                        arr_38 [i_0] [0] [0] |= (((((0 ? var_2 : -72))) ? (arr_18 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) : var_2));

                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            arr_41 [i_9] [i_1] [i_1] [i_0] = (~var_9);
                            arr_42 [i_0] [i_1] [i_0] [i_0] [1] [2] = (arr_5 [i_7 - 1] [i_8 + 1]);
                            arr_43 [i_0] [i_1] [i_7] [i_7] [i_9] = var_12;
                            arr_44 [i_0] [1] [i_7] [i_8] [i_1] = -var_5;
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            arr_47 [i_1] [i_1] [i_7 - 1] [i_7] = ((var_3 ? (arr_34 [i_0] [i_1] [i_7] [i_1] [i_10] [i_10]) : var_12));
                            arr_48 [i_0] [i_10] [i_1] [i_0] [i_1] [i_0] = var_2;
                            arr_49 [4] [i_1] [i_1] [i_8] [6] = (((arr_39 [8] [1]) + var_4));
                            arr_50 [i_0] [6] [0] [i_10] = 1;
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            arr_55 [i_0] [i_1] [i_1] [7] [i_11] [i_1] = ((var_13 ? var_7 : (arr_34 [i_0] [i_0] [i_7 - 1] [i_1] [i_11] [i_7])));
                            arr_56 [4] [i_1] = ((~(arr_53 [i_0] [9] [i_7] [i_7] [i_11])));
                            arr_57 [8] [i_7] [i_7] [i_1] [8] = var_12;
                            arr_58 [i_0] [8] [i_7 - 1] [i_1] [i_11] = ((var_6 ? (arr_31 [i_7 - 1]) : (69 > var_10)));
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            arr_62 [i_0] [i_1] [i_1] [i_8] [i_12] [i_8] [i_12] = var_0;
                            arr_63 [i_0] [i_1] [i_7] [i_8] [3] = -19048;
                        }
                    }
                    for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
                    {
                        arr_68 [i_1] [3] = (arr_35 [i_7 - 1]);
                        arr_69 [i_0] [i_0] [i_1] [i_0] = var_3;
                        arr_70 [i_0] [i_1] [i_7 - 1] [i_1] = var_11;
                    }
                    arr_71 [i_0] [i_1] [i_1] = 127;
                    arr_72 [i_1] = (~65533);
                    arr_73 [i_0] [i_1] = var_5;
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    arr_77 [1] [i_0] [i_1] = (arr_4 [i_14] [i_14]);
                    arr_78 [i_0] [i_0] [i_1] [i_1] = -var_12;
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        {
                            arr_83 [i_0] [i_1] [i_1] [i_1] [4] = (((max(-7737722414770141002, (max(var_14, var_2))))) ? ((max((arr_11 [i_15] [i_1] [i_15] [i_15] [i_0] [1]), 19048))) : (arr_79 [i_1]));
                            arr_84 [6] [i_1] [i_15] [i_1] = (((((var_1 ? ((1 ? var_12 : var_13)) : (!7737722414770141001)))) ? ((49299 ? var_12 : ((65533 ? 16236 : -7737722414770140990)))) : (max(5496, 5640131907566180170))));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_11;
    #pragma endscop
}
