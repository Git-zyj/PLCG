/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((((arr_4 [i_0] [i_1]) && (arr_4 [16] [1]))) && ((min(var_1, (arr_0 [i_0]))))));
                var_13 = (max((min(-7328293145645257509, 1)), (arr_5 [14] [14])));
                var_14 *= var_11;
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_15 *= (((((((max(0, 65535))) ? 37210 : ((min(26365, 28333)))))) ? -9122250620212856923 : 1));
        var_16 = (min((max((arr_6 [i_2] [i_2] [i_2]), var_3)), ((~(arr_6 [i_2] [i_2] [i_2])))));
    }
    var_17 = max(var_0, var_10);

    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((((min((arr_4 [i_3] [i_3]), (arr_9 [i_3])))) ? ((((min(var_3, (arr_10 [i_3] [i_3])))) ? var_4 : (((arr_7 [i_3]) / (arr_9 [i_3]))))) : (((max(var_7, (arr_5 [i_3] [i_3])))))));
        var_18 = (max((max((arr_0 [i_3]), (max(var_10, var_3)))), (~var_3)));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_19 = (((((var_1 / (arr_19 [i_4])))) ? var_9 : ((min((arr_16 [i_5]), (arr_16 [i_4]))))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_20 *= (((arr_8 [i_4]) ? (arr_8 [i_4]) : (arr_8 [i_4])));
                    var_21 -= var_11;
                    var_22 = (arr_1 [1]);
                }
                var_23 = var_9;
            }
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                var_24 = var_3;

                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_25 = ((((max((var_3 || var_9), (arr_21 [i_4] [i_4] [i_8 + 1])))) ? (((min(var_2, (min(var_4, var_4)))))) : (max(var_6, var_0))));
                    arr_28 [i_4] [i_5] [i_4] [i_4] [i_4] [0] = (i_4 % 2 == 0) ? (((min((arr_18 [i_4] [i_8 - 2] [i_8 - 1]), var_11)) >> (((((arr_18 [i_4] [i_8 - 2] [i_8 - 1]) >> (((arr_18 [i_4] [i_8 - 2] [i_8 - 1]) - 8458280969786801216)))) - 4229140484893400549)))) : (((min((arr_18 [i_4] [i_8 - 2] [i_8 - 1]), var_11)) >> (((((((arr_18 [i_4] [i_8 - 2] [i_8 - 1]) >> (((((arr_18 [i_4] [i_8 - 2] [i_8 - 1]) - 8458280969786801216)) - 7188557334847168399)))) - 4229140484893400549)) - 14217603588830381776))));
                }

                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    arr_31 [i_4] [11] [i_5] [i_8] [i_4] = ((var_8 ? (((min((min((arr_5 [i_5] [15]), var_5)), (var_10 || var_8))))) : (min(((max(var_4, var_6))), (min((arr_15 [i_8]), (arr_18 [i_4] [i_5] [i_5])))))));
                    var_26 |= ((((max(28333, (55090 && 65535)))) ? (((((var_9 != (arr_11 [i_10]))) ? ((((arr_11 [i_8]) == var_1))) : var_9))) : (min((max(var_8, var_1)), (arr_21 [i_10 + 1] [i_5] [i_8 + 1])))));

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_27 = (((((((max(var_9, var_2))) ? (min(var_2, (arr_17 [i_10 + 1]))) : var_4))) ? (((arr_32 [i_4] [i_10 - 1] [i_8 - 1] [i_10 - 1] [i_8 - 1] [i_8 + 1] [i_4]) & var_0)) : (((max((var_10 <= var_8), (max(var_4, var_4))))))));
                        var_28 *= ((var_1 != (((((var_6 || (arr_33 [i_11] [i_5] [i_11] [i_4] [i_11]))))))));
                        var_29 = ((((max((arr_19 [i_8 - 1]), (arr_19 [i_8 - 2])))) ? ((~(arr_19 [i_8 + 1]))) : (var_2 - var_6)));
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_30 = ((var_0 ^ (((((arr_34 [i_4] [i_10 - 1] [i_8] [i_10] [i_8 + 2]) == (arr_34 [i_4] [i_10 - 1] [i_12] [i_10] [i_8 + 2])))))));
                        var_31 = var_3;
                        var_32 = (((max((arr_32 [i_4] [i_4] [i_8] [i_10 + 1] [10] [i_8 + 2] [i_10]), (var_4 ^ var_6))) / var_7));
                    }
                    var_33 *= (min(((min(var_8, (max(var_4, var_8))))), ((~(((arr_6 [8] [i_5] [i_10]) * var_1))))));
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 12;i_14 += 1)
                    {
                        {
                            var_34 -= ((((max((((arr_30 [i_4]) * var_5)), (((arr_3 [1]) / var_2))))) ? ((var_4 ? (arr_18 [i_14] [i_14 - 2] [i_8]) : var_2)) : var_7));
                            var_35 |= (max((max((arr_34 [i_8 + 2] [i_13 + 4] [i_13] [i_8 + 2] [i_14 + 1]), (((var_8 ? (arr_12 [i_4] [i_14]) : var_2))))), (max(((~(arr_33 [i_4] [12] [i_14] [i_4] [i_14]))), (max(var_1, var_6))))));
                        }
                    }
                }
                var_36 = (((((min((arr_12 [i_4] [i_4]), (arr_17 [i_4]))) > ((0 ? 4061430496163353893 : 6)))) ? -var_6 : ((var_9 ? (arr_35 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 2]) : var_11))));
            }
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_37 = (min(var_37, ((((((arr_45 [i_17] [i_16] [i_5] [i_5] [8]) || var_11)) ? (((((min(var_3, var_5)) > (((-(arr_24 [i_17] [i_16] [1] [8])))))))) : (max((arr_6 [i_16] [i_16] [i_17]), (arr_19 [i_15 + 1]))))))));
                            var_38 = ((((((arr_4 [15] [i_15 + 2]) - (var_1 || var_10)))) - (min(var_3, var_3))));
                            var_39 = (((((var_0 ? (arr_9 [i_4]) : (arr_16 [1])))) ? (((arr_39 [i_4] [i_15 + 2]) ? (arr_39 [i_4] [i_15 + 2]) : (arr_39 [i_4] [i_15 - 1]))) : ((((((var_2 ? var_7 : (arr_1 [i_4])))) || ((((arr_4 [i_15] [i_16 - 2]) - var_5))))))));
                        }
                    }
                }
            }
            arr_50 [i_4] = ((-(min((var_7 == var_8), (arr_2 [i_5])))));
            var_40 = (((arr_8 [i_4]) << ((((((var_6 < (arr_10 [i_4] [i_4])))) < var_9)))));
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 10;i_19 += 1)
            {
                {
                    arr_57 [i_4] [i_18] [i_4] = (((arr_48 [i_4] [i_18] [5]) * (arr_20 [i_18] [i_4])));
                    var_41 = (arr_49 [i_4] [i_18] [i_18] [i_4] [i_19] [i_4] [1]);
                    var_42 = (max(-24991, var_6));
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 13;i_20 += 1) /* same iter space */
    {
        var_43 = ((((((arr_19 [i_20]) / (arr_19 [i_20])))) ? (((!(arr_19 [i_20])))) : (((((var_2 ? var_10 : (arr_10 [i_20] [i_20]))) != (arr_42 [i_20] [i_20]))))));
        var_44 = (30066 | 1);
        var_45 = (max(var_45, ((max((arr_39 [8] [i_20]), (var_1 || var_10))))));
    }
    for (int i_21 = 0; i_21 < 13;i_21 += 1) /* same iter space */
    {

        for (int i_22 = 0; i_22 < 13;i_22 += 1)
        {
            arr_66 [i_22] [i_22] = (arr_62 [i_21]);
            var_46 = (max(var_46, ((max((min((max((arr_64 [i_21] [10]), var_5)), ((((arr_42 [0] [0]) > var_3))))), ((((arr_8 [i_21]) - (arr_8 [i_21])))))))));
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 13;i_23 += 1)
        {
            arr_69 [i_21] [i_23] = ((((!(arr_25 [i_23] [i_23] [i_23] [i_21]))) ? var_7 : (arr_8 [i_21])));
            var_47 = (~var_11);
            arr_70 [i_21] [8] = (arr_47 [i_23] [2] [0] [0] [i_23] [i_23]);
            var_48 = (((arr_19 [2]) ? var_11 : (arr_42 [i_21] [i_23])));
        }
        for (int i_24 = 0; i_24 < 13;i_24 += 1)
        {
            var_49 |= (max((var_4 ^ var_4), var_2));
            arr_73 [i_24] = var_1;
            arr_74 [i_21] [5] [i_21] = ((~(((arr_34 [i_21] [i_21] [i_21] [i_24] [i_24]) - (arr_34 [i_24] [i_24] [i_21] [9] [9])))));
        }
        var_50 = ((((~(arr_25 [i_21] [i_21] [i_21] [i_21]))) / (max((arr_25 [i_21] [i_21] [i_21] [i_21]), var_9))));
    }
    #pragma endscop
}
