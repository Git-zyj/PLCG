/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0]) / var_7);

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_9 [i_0] [i_1 + 1] [i_2] [i_2] = (arr_7 [i_0] [i_0] [i_0]);
                var_14 = (max(var_14, 4656));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_16 [i_4] = (arr_12 [i_2] [i_2]);
                            arr_17 [i_2] [3] [i_4] [i_3] [i_3] [i_2] = ((-4663 / (arr_13 [i_0] [i_1 + 3] [3] [i_1 - 3])));
                            arr_18 [i_4] = -711279888;
                            var_15 = (max(var_15, ((4769807220453836238 | (arr_11 [i_0] [i_2] [i_3] [i_4])))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    {
                        arr_24 [i_5] [i_5] [10] [i_6] = (arr_0 [i_6]);
                        arr_25 [i_5] = ((var_6 ? (arr_12 [i_1 + 1] [i_5]) : (arr_1 [i_1 + 2])));
                        var_16 = (((arr_10 [i_0] [i_1 - 3] [i_5] [i_6 - 1] [i_6] [i_1 + 2]) ? (arr_10 [i_0] [i_0] [i_1 - 1] [i_1] [i_5] [i_0]) : (arr_10 [i_0] [i_1 - 2] [i_5] [i_6] [i_6 + 2] [i_6 + 1])));
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_17 = (max(35184372088831, (arr_28 [i_7] [i_7 + 2])));

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_32 [i_7] [i_8] [i_7] = ((!(((-(arr_27 [i_7]))))));
            arr_33 [i_8] [i_7] = 1301446122;
            arr_34 [i_7 + 2] [i_7] [i_8] = 4673;
            arr_35 [i_7] [i_7] = (+(min((arr_29 [i_8]), ((max(-7501, (arr_31 [i_7] [i_7])))))));
            var_18 = (max(var_18, ((max((arr_27 [14]), 711279919)))));
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_39 [i_7] [i_7] = (!32767);
            arr_40 [i_7] [i_9] [i_9] = (min((-var_4 / var_5), (max((arr_29 [i_9 - 1]), (((arr_31 [i_7 - 1] [i_7]) ? -41 : (arr_30 [i_9 - 1] [i_9 - 1] [14])))))));
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_45 [i_7] [i_7] = ((~(arr_37 [i_7] [i_11])));
                arr_46 [i_7 + 1] [i_7] [i_11] = (~var_2);
                arr_47 [i_10] [i_7] [i_10 - 1] [i_10 - 1] = 24;
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_19 = (max(var_19, ((((min(8608810154167203923, (arr_37 [i_7] [i_12]))) & (~-711279917))))));
                arr_50 [i_7 + 1] [i_7] [i_12] = -28;
                var_20 = (arr_42 [i_7]);
                var_21 ^= (min(((max(-7803927767577761454, (arr_26 [i_10 - 1])))), ((7803927767577761427 + (min((arr_36 [i_7] [2] [i_12]), (arr_29 [i_7 + 1])))))));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {
                arr_54 [i_7] [i_7] [i_10] [i_7] = (((arr_37 [i_10 - 1] [i_13]) && var_10));
                var_22 *= ((((~(~var_12)))) ? (arr_51 [i_10 - 1] [i_7 + 1] [i_7 - 1]) : 16776960);
            }
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 21;i_16 += 1)
                    {
                        {
                            arr_64 [i_15] [i_7] [i_7] = (((((min(4664, 370362163))) ? (((var_4 ? var_1 : (arr_56 [i_7] [i_10 - 1] [i_7])))) : ((-4646 ? 4889950126823734232 : 3494943665)))));
                            arr_65 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_7 + 2] = (max(65522, (arr_26 [12])));
                            arr_66 [i_7] [i_7] [i_7] [i_16] [i_7] &= ((var_9 ? (arr_29 [i_16]) : (!-16776959)));
                        }
                    }
                }
            }
            var_23 ^= (((((var_4 ? (arr_58 [i_7] [i_7 - 1] [i_10 - 1]) : var_5))) ? ((~((7143077092208063963 % (arr_43 [8] [8] [2] [10]))))) : 711279889));
            arr_67 [2] [i_10 - 1] &= (arr_42 [12]);
            arr_68 [i_7 + 2] [i_7] = ((((max((((arr_53 [i_7]) * var_10)), ((max((arr_28 [i_7] [i_10 - 1]), var_11)))))) ? var_0 : ((-((48 ? 7803927767577761439 : 4670))))));
        }
        for (int i_17 = 4; i_17 < 19;i_17 += 1)
        {
            arr_71 [i_7] [i_7] = (arr_27 [i_7]);
            arr_72 [12] [i_7] [12] &= min(((((arr_48 [i_17] [i_17 + 2]) ? -53 : (arr_48 [i_17] [i_17 + 1])))), 18446744073709518859);
            var_24 = (arr_26 [i_7 - 1]);
        }
    }
    var_25 = var_7;

    /* vectorizable */
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        arr_77 [i_18] [i_18] = ((var_2 >= (arr_36 [i_18] [i_18] [0])));
        arr_78 [i_18] = ((106 ? 6969373665580123086 : 9223372036854775807));
    }
    #pragma endscop
}
