/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 15;
    var_17 = ((+(((!8796093021184) << (2097150 - 2097120)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (max((arr_2 [i_0]), var_7));
                var_19 = ((((max(-1861448497, -14384))) ^ ((var_8 ? (arr_0 [i_1 - 1] [i_1 + 2]) : (arr_0 [i_0] [i_0])))));

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_1] [4] = (((arr_6 [i_1 - 1] [i_2 + 2] [i_1] [i_3]) ? (arr_0 [i_0] [i_1 - 1]) : (arr_6 [i_3] [i_1] [i_1] [i_2 - 3])));
                        var_20 = (arr_6 [i_2 - 2] [i_1] [i_1] [i_1 + 1]);
                    }

                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        var_21 = (arr_11 [i_0] [6] [6] [i_4 - 2]);
                        var_22 = (max(var_22, (((((max(var_9, var_7))) ? (!113) : (arr_11 [i_0] [i_1 + 2] [i_0] [i_4 - 2]))))));
                    }
                    arr_12 [i_1] = (~-5498449211002464224);
                    arr_13 [i_0] [i_1] = var_3;
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_23 = (arr_10 [i_6] [i_1] [i_1] [i_0]);
                        var_24 += (926112602 % 1010784005);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_26 [i_8] [i_1] [i_5] [i_1] [i_0] = max(((((!-91) == ((197 ? 895880725 : 193))))), 14407);
                                arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] [19] = (arr_6 [i_0] [9] [i_1] [i_7 - 1]);
                                arr_28 [i_0] [i_1 + 2] [i_1] [i_0] = ((((max((arr_19 [i_0] [i_1] [i_7] [i_8]), (arr_19 [i_1 + 2] [i_5] [i_7] [i_8])))) && (((-(arr_19 [i_0] [i_0] [i_0] [i_0]))))));
                                var_25 = var_13;
                                var_26 = ((4077782852 ? ((max(var_14, var_10))) : (((var_1 ? var_11 : var_14)))));
                            }
                        }
                    }
                    var_27 = (max(var_27, (arr_0 [i_0] [13])));

                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        var_28 = (max(var_28, ((((arr_21 [i_1] [i_1] [i_1] [i_1 + 1]) ? (arr_21 [i_0] [i_0] [i_1] [i_1 - 1]) : (arr_21 [i_0] [i_1] [i_0] [i_1 + 2]))))));
                        var_29 = (min(var_29, (arr_6 [14] [14] [2] [i_9 - 3])));
                    }
                    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 3; i_11 < 17;i_11 += 1)
                        {
                            arr_38 [i_0] [i_1] [i_5] [i_1] [i_1] [i_11] = (max((arr_10 [i_0] [i_1 - 1] [i_5] [i_10]), (arr_11 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1])));
                            arr_39 [i_0] [i_1] = -5498449211002464224;
                            var_30 ^= (arr_1 [i_0]);
                        }
                        var_31 = (min(var_31, (257941010 % 41885)));
                    }
                    for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_12] [i_1] [i_1] [i_0] = (30 ? 18446744073709551615 : -14384);

                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            var_32 = ((13 * (-14384 + 33)));
                            arr_47 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_13] = (arr_17 [i_1 - 1] [i_1] [i_12 + 1] [i_13 - 1]);
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_33 = ((!((!(28945 && var_14)))));
                            arr_50 [i_1] [i_1 + 2] [i_1] [i_12 + 1] [i_14] = (arr_21 [i_1 + 2] [i_5] [i_12 - 1] [i_12 - 1]);
                        }
                        arr_51 [i_1] [i_5] [i_0] [i_1] = ((217184466 ? 3788736979 : 138928926));
                        var_34 = 8796093021200;
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 19;i_15 += 1)
                    {
                        var_35 = (max(var_35, (((!((((arr_31 [i_0] [1] [i_5] [18] [i_0]) ? var_2 : var_13))))))));
                        arr_54 [i_1] [10] [i_5] [i_5] [i_0] [i_1] = ((~(250 & 16495966577209842783)));
                        var_36 = (max(var_36, (((!(arr_21 [i_1] [i_1 - 1] [i_1 + 2] [i_1]))))));
                        var_37 = (max(var_37, ((((arr_16 [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1]) ? -926112593 : (arr_16 [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_38 = (min(var_38, ((((arr_36 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1]) ? (arr_1 [i_1 + 2]) : (arr_42 [4] [16] [i_0] [i_16]))))));
                                var_39 = (max(var_39, (!46638)));
                            }
                        }
                    }
                }
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            {
                                var_40 = (arr_57 [i_1]);
                                var_41 = ((((max((arr_8 [i_18] [10] [i_1 + 1]), ((((arr_59 [i_0] [i_1 + 2] [7]) ? (arr_61 [i_1] [i_1] [i_19] [i_20]) : (arr_2 [i_20]))))))) ? (max((9385 * var_9), -var_5)) : ((((max(4294967280, var_11))) ? var_1 : var_12))));
                            }
                        }
                    }
                    var_42 = (((-(arr_21 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 1]))));
                }
                var_43 &= (~3571245889);
            }
        }
    }
    #pragma endscop
}
