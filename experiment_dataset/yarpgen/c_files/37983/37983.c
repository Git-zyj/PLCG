/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((min(var_2, (min(202, var_3))))) ? 1 : var_11)))));
    var_14 = (min(var_14, (((!((min(((var_6 ? 1 : var_11)), ((max(var_8, 3)))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (((((-(arr_1 [i_0])))) || (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_16 = (max(var_16, ((((((arr_2 [i_2]) ? var_7 : var_0)) | -var_11)))));
                        arr_10 [i_0] [i_1] = (arr_5 [i_0] [i_1] [i_2] [6]);
                        var_17 = 2147483624;
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 += var_4;
                        var_19 = 224;
                    }
                }
            }
        }
        var_20 = ((32766 + (((!(arr_12 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_21 = ((27263 ? ((var_10 ? (arr_14 [i_5]) : (arr_15 [i_5]))) : ((-2147483625 ? (arr_13 [i_5]) : var_5))));
        var_22 = var_6;
        var_23 ^= (-(arr_13 [i_5 - 1]));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_24 *= (max(var_0, ((((arr_15 [i_6 - 1]) > (arr_13 [i_6 - 1]))))));
        var_25 *= (((((var_4 ? (((arr_13 [i_6 - 1]) ? (arr_14 [i_6 - 1]) : (arr_18 [1]))) : (arr_18 [6])))) ? (min((max(144, 9223372036854775807)), -var_8)) : ((min(-var_1, 1)))));
        arr_19 [i_6] = ((-(arr_14 [i_6 - 1])));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_26 += ((-((((!var_4) <= ((-(arr_13 [i_6]))))))));
            arr_22 [2] &= (((((max(3740610546597209461, (arr_16 [i_6 - 1])))) ? 32766 : ((var_7 ? 215 : var_4)))));
            var_27 = (((!var_11) || var_8));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_27 [i_6] [i_8] [i_6] = -1024;
            var_28 = (((((arr_24 [i_8] [i_6]) - var_7))) ? (((arr_24 [i_8] [i_8]) - 53)) : var_10);
            var_29 = ((-(((arr_24 [i_6] [7]) + (arr_26 [i_6])))));
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_30 = (-9223372036854775807 - 1);

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_31 &= var_3;
                arr_33 [14] [i_9] [10] |= (((((min(3802525000975832537, (arr_17 [i_6] [i_6]))) * var_9)) % ((var_2 ? 7748099924485923362 : 32752))));
            }
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                var_32 = 0;
                var_33 = (min((((arr_34 [i_6] [i_6 - 1] [i_6 - 1]) ? (((-(arr_32 [i_6] [i_6] [i_9] [i_11])))) : 159)), (((-((max(1, 1))))))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_34 = var_12;
                var_35 = (arr_35 [i_6] [i_6] [i_6]);
                var_36 = (((-(arr_17 [i_6] [i_9]))));

                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    arr_43 [i_6] [i_9] [i_6] [i_12] [i_12] [i_12] = (arr_16 [i_6 - 1]);
                    var_37 = -2147483624;
                    var_38 = (max(var_38, (((-((1 ? (arr_23 [i_12]) : 26)))))));
                    var_39 *= (((((arr_26 [i_12]) ? 2873537279779945200 : (arr_38 [i_6 - 1] [i_9] [i_12] [i_13]))) < (((((arr_14 [i_6]) >= 20826))))));
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_40 += (((arr_36 [i_14] [i_6 - 1] [i_9 - 1] [i_9 - 1]) ? (arr_16 [i_6 - 1]) : 117));
                            var_41 = (((arr_31 [i_6] [i_6]) ? var_0 : 5603));
                            arr_49 [15] [i_9] [9] [i_9] [i_6] [i_9] [i_9] = (arr_38 [i_6 - 1] [i_9] [i_12] [i_14]);
                            var_42 = (max(var_42, 448));
                            var_43 = (!var_4);
                        }
                    }
                }
            }
            for (int i_16 = 2; i_16 < 13;i_16 += 1)
            {
                var_44 -= var_0;
                var_45 = (max(var_45, 95));
                var_46 = (min(var_46, (((var_8 ? ((((var_2 ? 116 : (-9223372036854775807 - 1))) ^ (0 | 0))) : (((~((var_1 ? 0 : var_5))))))))));
                var_47 -= ((-((-((var_6 ? var_11 : var_1))))));
                var_48 = ((!(((-((62988 ? var_7 : (arr_40 [i_16] [i_9] [i_6]))))))));
            }
            var_49 = (min((((-(arr_47 [i_6] [i_6 - 1] [i_9] [i_9] [i_9 - 1])))), (arr_39 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
        }
    }
    for (int i_17 = 2; i_17 < 14;i_17 += 1)
    {
        arr_56 [i_17] [i_17 + 1] = (max((arr_13 [i_17 - 2]), (min((((var_0 > (arr_14 [i_17 + 2])))), (min((arr_14 [i_17]), (arr_53 [i_17])))))));

        /* vectorizable */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_50 = (min(var_50, 1));
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        var_51 = (((arr_63 [i_18] [i_17 + 3] [i_19] [i_20]) ? -28 : var_9));
                        arr_65 [i_17] [i_18] [i_18] [i_18] [i_19 + 1] [i_20] = ((((((arr_15 [10]) & 2767))) ? var_7 : (~6)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 17;i_21 += 1)
        {
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 17;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {
                    {
                        var_52 = (((arr_66 [i_21]) ? var_7 : -63));
                        var_53 = ((var_8 ? var_2 : var_9));
                    }
                }
            }
            var_54 = var_6;
            arr_74 [i_17] &= (arr_15 [i_17]);
        }
        var_55 = (arr_57 [i_17 - 1] [i_17 - 2]);
    }
    var_56 = (max(var_56, ((min(((((-32059 & var_7) ^ 4))), (max(((var_0 ? 9223372036854775802 : 31)), (!var_6))))))));
    #pragma endscop
}
