/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (max(var_17, (((((max((var_3 <= var_11), (max((arr_0 [i_0] [i_0]), (arr_1 [1])))))) ? ((+(min((arr_1 [11]), (arr_1 [13]))))) : (~-1))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_1] &= (max(((-(min(5904, var_6)))), (((!((max(-1114385437, 59632))))))));
            var_18 = (max(var_18, (~59632)));

            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {

                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        arr_15 [i_0] [i_2] [i_0] [8] [i_0] [i_0] [i_0] = var_8;
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_2] = (arr_3 [i_0] [i_0] [i_0]);
                    }
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        var_19 = var_9;
                        var_20 &= (((arr_7 [i_0] [i_3] [i_1]) || ((max((max(5920, 2872112902)), (~var_8))))));
                        var_21 = (arr_0 [i_0] [i_3 + 4]);
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        arr_21 [i_1] [i_1] |= var_15;
                        var_22 ^= arr_2 [i_0] [i_0] [i_1];
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_23 = ((-((-(arr_17 [i_3] [i_3])))));
                        var_24 += var_12;
                        var_25 = ((arr_13 [i_7] [i_7] [i_1] [i_1] [i_3] [i_2 + 1]) ? (arr_7 [i_3] [i_3] [i_3]) : (arr_20 [i_2 - 2] [i_3 + 2] [i_3 + 2] [i_3] [i_7]));
                        var_26 *= -var_11;
                    }

                    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, var_3));
                        arr_27 [i_8 - 2] [i_2] [i_2 - 1] [i_2] [i_0] = var_15;
                    }
                    for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        var_28 ^= (min(1024, 30685));
                        var_29 = ((var_9 ? (max((~var_12), (((arr_11 [i_1] [i_1] [i_1]) * (arr_14 [1] [1] [i_2] [i_2 - 1] [i_2]))))) : ((((max(5904, 3946193529)) <= (max((arr_26 [i_9] [i_9 - 2] [i_9 + 1] [i_9] [i_9] [0]), (arr_9 [i_9] [i_9]))))))));
                        var_30 = (max(var_30, (arr_10 [i_0] [i_0] [i_3])));
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_31 = ((!(arr_28 [i_0] [i_2] [i_2 - 2] [i_2] [i_10] [i_10])));

                    for (int i_11 = 4; i_11 < 11;i_11 += 1)
                    {
                        var_32 *= ((!(((var_7 ? (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_14)))));
                        arr_36 [i_2] [i_10] [i_2] [i_2] [i_2] = arr_30 [i_11] [i_2] [i_1] [5];
                    }

                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        var_33 &= ((arr_25 [i_12] [i_12 + 1] [i_12] [i_12] [i_12]) ? (arr_25 [i_12] [i_12 + 1] [i_12] [i_12] [i_12 + 1]) : (arr_25 [i_12] [i_12 + 1] [i_12 - 1] [i_12] [i_12]));
                        var_34 = var_1;
                        var_35 = (max(var_35, ((((arr_32 [i_0] [i_1] [i_12] [i_10] [i_12 - 1] [1]) ? (arr_3 [i_1] [i_1] [i_0]) : var_12)))));
                        arr_39 [i_2] [0] [i_2] [i_10] [i_12 + 2] = ((-(arr_13 [i_0] [8] [i_2] [i_2] [i_2] [i_12])));
                        var_36 -= ((~(arr_7 [i_0] [i_0] [i_0])));
                    }
                    var_37 = (((arr_8 [i_10] [i_1] [i_1] [i_0]) ? (arr_3 [i_2 - 2] [i_2 - 1] [6]) : (arr_13 [i_2 + 1] [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 1])));
                }
                var_38 = (-var_3 ? (max(((var_15 ^ (arr_37 [i_2 + 1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))), (~var_5))) : (((!(((-(arr_17 [i_0] [i_1]))))))));

                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        arr_45 [i_0] [i_14] [i_2] [i_2] [i_2] = (~(max((arr_35 [8] [i_14] [i_13 + 3] [7] [i_13 + 3]), (arr_35 [i_13 + 3] [i_13 + 3] [i_13 + 3] [i_14] [i_13 + 3]))));
                        var_39 = (max(var_39, ((-(max((arr_23 [i_13] [i_14] [i_13] [i_14] [i_13]), (arr_20 [i_13] [i_13] [i_13] [i_13] [i_13])))))));
                        var_40 = ((-((~(max((arr_3 [i_0] [i_1] [i_2]), var_14))))));
                        var_41 += (((((~((~(arr_10 [8] [i_13] [i_0])))))) ? ((min((arr_32 [i_0] [i_1] [i_2] [i_13 - 1] [i_13] [i_14]), (arr_32 [i_0] [i_1] [i_0] [i_13 + 1] [i_1] [i_14])))) : (((~var_1) | (~var_2)))));
                    }

                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        arr_48 [i_2] [i_2] = (((max((((arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_1 : var_16)), (arr_42 [i_15] [i_15] [i_15])))) ? (max((arr_40 [i_0] [i_0] [i_0] [i_0]), (max(var_11, var_12)))) : ((max(((-(arr_37 [13] [i_2] [13] [i_13 + 1] [i_15] [13] [i_0]))), (max((arr_22 [i_0] [i_2]), (arr_18 [i_0] [i_1] [i_2] [i_13] [i_13] [i_15])))))));
                        var_42 = (max(var_42, (((min((arr_26 [i_13] [i_13 + 2] [i_13] [i_13] [i_13 + 1] [i_13]), (arr_26 [i_13] [i_13 - 2] [10] [i_13] [i_13 + 1] [i_13])))))));
                        var_43 ^= (-(arr_25 [i_0] [i_0] [i_0] [i_0] [10]));
                        var_44 = (~var_1);
                        var_45 ^= (max((min(((max(2147483631, 0))), (min(var_15, (arr_19 [i_15] [i_15]))))), (min((min((arr_9 [i_1] [i_13]), (arr_5 [i_0]))), ((max((arr_25 [i_0] [i_0] [i_0] [8] [8]), (arr_6 [i_0] [i_0]))))))));
                    }
                    arr_49 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((~(max((min(var_9, (arr_32 [i_0] [i_0] [10] [i_0] [4] [i_0]))), (max((arr_10 [3] [i_2] [i_0]), var_13))))));
                }
                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_46 *= ((~((~((min(var_7, var_7)))))));
                        var_47 = ((-(max((arr_35 [i_16] [i_16] [i_16 + 1] [i_16] [i_16 + 1]), (arr_33 [i_17] [i_2])))));
                        var_48 -= max((max((max(var_8, var_5)), var_3)), var_16);
                    }
                    var_49 = min((max((~var_8), (min(var_1, (arr_55 [10] [i_0] [4] [i_0] [i_0]))))), (max((arr_14 [i_2 - 1] [i_16] [i_2 - 1] [i_1] [5]), (min(var_16, (arr_47 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))))));
                }
                for (int i_18 = 2; i_18 < 11;i_18 += 1)
                {

                    for (int i_19 = 2; i_19 < 14;i_19 += 1) /* same iter space */
                    {
                        var_50 &= (min(var_8, ((~(max((arr_3 [i_0] [i_0] [i_0]), -866534405))))));
                        arr_60 [0] [i_1] [i_2] [i_2] [i_19] = (63306126 ? 41763 : 59639);
                        var_51 &= (~((~((23773 ? 159818897 : 2147483634)))));
                        var_52 = (20063 ? 201326592 : -407644702);
                        var_53 += (max((~264241152), (min(2147483631, 59633))));
                    }
                    /* vectorizable */
                    for (int i_20 = 2; i_20 < 14;i_20 += 1) /* same iter space */
                    {
                        var_54 = var_4;
                        var_55 = var_15;
                        arr_64 [i_2] [i_1] [i_2] = ((~(arr_14 [i_20 - 2] [i_20 + 1] [i_20] [i_20] [i_20 - 2])));
                    }
                    var_56 &= (max(-var_7, (arr_7 [i_2] [i_2 - 3] [i_0])));
                }
            }
        }
    }
    var_57 ^= ((-(max(-var_1, var_11))));
    var_58 += var_15;
    #pragma endscop
}
