/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [8] [8] [i_1] = (((arr_4 [1] [i_1] [i_1]) == (arr_0 [i_1])));
            arr_6 [i_0] [i_0] = ((((((arr_1 [i_0]) && var_7))) >= (arr_0 [i_1])));
            var_12 = ((arr_0 [i_0]) > var_3);
        }
        var_13 = (min((((var_4 & 1) != var_2)), ((!(((var_10 ? var_11 : (arr_2 [i_0]))))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [11] &= (((!var_3) ? (((arr_13 [i_0] [i_2 + 1] [i_3 - 1] [i_0] [i_0]) >> (((arr_0 [i_0]) - 1139)))) : (max((arr_12 [i_2 + 1] [i_3 + 2] [i_3 + 2] [i_4]), (((!(arr_1 [i_0]))))))));
                        var_14 = ((!(arr_4 [i_2] [i_2 + 1] [i_3 + 2])));
                        var_15 ^= (((max((max(246, var_2)), (((arr_14 [i_3] [i_3] [i_3] [11] [i_2]) ? var_1 : var_2)))) != var_4));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_5] = (arr_19 [i_5]);
                        arr_28 [i_5] [13] [i_7 + 1] [i_7 + 1] |= (min(((((((arr_24 [i_5] [i_6] [i_6] [i_6]) >= (arr_20 [i_8])))) >> (((var_7 - var_1) + 22643)))), (min(((var_11 >> (var_6 - 31443))), (((arr_20 [i_6]) | -1277601908))))));
                    }
                }
            }

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                arr_32 [i_5] [i_6] [i_5] = (min((arr_26 [i_5] [i_5] [i_9] [i_9]), (arr_21 [i_6])));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_16 |= (min((~-13), (arr_31 [i_10 - 1])));
                            var_17 = (arr_29 [i_10 + 1] [i_6]);
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            arr_50 [i_5] = ((12 ? 11292 : 1));
                            arr_51 [i_5] [i_5] [i_6] [i_6] [i_12] [i_13] [1] = ((!((!(arr_39 [i_5] [i_5] [1] [i_5] [i_5] [i_5])))));
                            var_18 = (arr_36 [i_5] [i_5] [19] [i_5] [i_5] [i_5] [i_5]);
                        }
                    }
                }
                var_19 = ((~(max((arr_23 [i_5] [i_6] [i_6]), ((var_4 ? (arr_48 [6] [i_6] [i_6] [i_6] [1]) : var_9))))));
            }
            for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
            {
                arr_54 [i_5] = ((((max((arr_38 [3] [i_6] [i_6] [3] [i_15]), (arr_38 [i_5] [i_6] [i_6] [i_15] [i_15])))) ? (((var_11 - (((arr_41 [i_15] [i_5]) ? (arr_21 [18]) : (arr_24 [i_5] [i_6] [3] [i_15])))))) : (min((-9223372036854775807 - 1), -1))));
                arr_55 [i_5] = ((((((max((arr_30 [9] [12] [i_15] [12]), (arr_35 [i_6] [i_15])))) == (arr_40 [1] [i_6] [7] [1]))) ? ((((arr_43 [i_5]) ? (arr_35 [i_6] [i_6]) : var_0))) : 4245035376435530952));
            }
        }
        var_20 = (max(var_20, -2));
        var_21 = (((!(arr_42 [i_5] [i_5] [i_5]))) ? ((min((arr_42 [i_5] [i_5] [i_5]), (arr_42 [i_5] [20] [i_5])))) : ((max(var_10, (arr_42 [i_5] [1] [i_5])))));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_22 |= ((((var_5 | (arr_49 [i_16] [i_16] [16] [i_16] [i_16] [i_16])))));
        arr_59 [i_16] [12] = (((~(arr_57 [i_16] [i_16]))));
    }
    var_23 = var_4;
    #pragma endscop
}
