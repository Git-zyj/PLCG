/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (min((((var_11 / ((var_2 ? var_1 : var_9))))), (max(((max(var_2, var_9))), var_7))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [10] = (max((((-1 ? 0 : var_11))), (max(var_7, ((((arr_0 [5] [2]) || (arr_1 [9] [0]))))))));
        var_15 = (max(((((arr_1 [1] [18]) > (arr_1 [i_0] [i_0])))), (arr_0 [7] [8])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_16 = (min(var_16, (arr_5 [3])));
        var_17 -= ((!var_1) && var_10);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_10 [4] = var_7;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = (((1023 | (((arr_8 [6]) ^ var_0)))));
                                var_19 += ((((((~(arr_8 [i_2]))) + 2147483647)) >> ((((~(arr_13 [i_2] [6] [9] [5]))) + 53678))));
                                arr_21 [14] [5] [6] [16] [7] = (max(2, 254));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_20 = ((~((var_2 ? (max(37331, var_7)) : var_2))));
                                var_21 |= ((~(max(((max((arr_19 [5] [10] [15] [2] [6]), var_10))), ((-(arr_7 [5] [15])))))));
                            }
                        }
                    }
                    var_22 = ((((max((arr_20 [14] [6] [7] [11] [7] [12]), 8119854981937845692))) || (!28204)));
                }
            }
        }
    }
    for (int i_9 = 3; i_9 < 13;i_9 += 1)
    {
        var_23 = ((-(~-23)));
        var_24 = (min(var_24, ((min((min((var_8 + var_3), (((var_12 / (arr_11 [10] [12] [6])))))), (arr_11 [17] [i_9 - 3] [i_9 - 1]))))));
        var_25 = ((-(max((arr_22 [13] [i_9 - 2] [i_9 - 3] [7] [i_9 + 1]), (arr_22 [2] [i_9 - 2] [i_9 + 1] [16] [i_9 - 1])))));
        var_26 = ((~(var_3 * var_0)));

        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
        {
            var_27 += var_11;
            var_28 ^= (~var_6);
            var_29 = (((arr_13 [0] [13] [17] [1]) ? var_9 : ((max((arr_1 [0] [17]), (arr_31 [5]))))));
            var_30 ^= ((((arr_18 [i_9 - 3] [16] [3] [15]) ^ (arr_18 [i_9 - 3] [13] [12] [0]))));

            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                var_31 = ((~(var_6 || -var_12)));
                var_32 = ((~(((!(17033640180987873924 > var_2))))));
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                var_33 += (((~67) || var_8));
                var_34 = (((arr_37 [i_9 - 2]) ? ((((!(var_6 && var_6))))) : (max(((min((arr_29 [4] [9]), var_8))), (min(var_6, (arr_1 [10] [14])))))));
                var_35 = (max(var_35, ((min((((255 ? (arr_16 [i_9 - 3] [i_9 - 1] [2]) : (arr_16 [i_9 - 3] [i_9 + 1] [1])))), (max((arr_9 [i_9 - 2]), (((var_1 ? var_0 : var_9))))))))));
                var_36 = ((-((((((arr_25 [7] [14] [10] [1] [12]) + -1601966255))) ? (((arr_29 [8] [13]) % 251)) : (arr_29 [i_9 + 1] [i_9 - 3])))));
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    {
                        var_37 = (min(var_37, (var_1 & var_3)));
                        var_38 = (((arr_35 [i_9 - 3] [i_9 + 1] [i_9 - 3]) ? (arr_35 [i_9 - 2] [i_9 - 1] [i_9 + 1]) : var_3));
                        var_39 = (((~var_11) == var_10));

                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            var_40 = ((var_8 ? (arr_35 [i_9 - 2] [i_9 - 1] [i_9 - 2]) : (arr_16 [i_9 - 3] [13] [i_9 + 1])));
                            var_41 = ((var_6 ? (arr_11 [i_9 - 1] [i_9 + 1] [i_9 - 2]) : 30990));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 12;i_18 += 1)
                {
                    {

                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            var_42 ^= (((arr_19 [i_9 + 1] [i_9 - 2] [12] [2] [i_9 - 2]) | (arr_50 [i_9 + 1] [i_9 - 3] [2] [5])));
                            var_43 = ((!(arr_15 [7] [4] [i_18 - 1] [13])));
                        }
                        var_44 = ((var_4 >> (((arr_49 [i_9 + 1] [3] [i_18 - 1] [5]) - 6851422850576419161))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            var_45 = ((var_6 ? var_0 : (arr_32 [i_9 + 1] [11] [4] [i_9 + 1])));
            var_46 = ((arr_7 [i_9 + 1] [i_9 + 1]) ? (arr_7 [i_9 - 2] [i_9 + 1]) : (arr_7 [i_9 - 2] [i_9 - 3]));
        }
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            arr_63 [i_9] = (arr_54 [10] [12] [9] [3] [1] [1] [6]);
            var_47 = (max((((arr_28 [i_9 - 1] [i_9 - 1]) ? (arr_14 [i_9 - 3] [6] [i_9 - 3]) : var_0)), ((max((arr_28 [i_9 - 1] [i_9 + 1]), var_1)))));
            var_48 = var_9;
        }
    }
    #pragma endscop
}
