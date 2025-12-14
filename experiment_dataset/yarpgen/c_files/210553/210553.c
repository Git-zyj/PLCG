/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((min((!var_11), (min(var_16, var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((((((((arr_2 [i_2] [i_2]) < var_1)) || var_0))) <= (((var_15 >= (~var_4)))))))));
                    var_20 = var_14;
                    var_21 = min(((((arr_1 [i_2 - 1]) >= (arr_2 [i_1] [14])))), (min((arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_2 [i_2 - 1] [i_0 - 2]))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            var_22 &= (((arr_0 [i_1]) > ((var_13 ? (arr_10 [i_1] [14] [i_3 - 3] [1]) : (arr_0 [i_1])))));
                            var_23 = (var_6 == var_4);
                            var_24 = (((arr_4 [i_0] [i_0] [i_0]) > (((-(arr_3 [i_2 - 1] [i_4]))))));
                            var_25 &= (((arr_4 [i_2 - 1] [i_3 + 1] [i_1]) ? (arr_4 [i_2 - 1] [i_3 - 2] [i_1]) : (arr_4 [i_2 - 1] [i_3 + 2] [i_1])));
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_26 = (var_7 == var_11);
                            var_27 = (((((arr_2 [i_0] [i_0 - 1]) >= (arr_5 [i_1] [i_1] [i_0]))) ? var_0 : var_4));
                            var_28 = -var_7;
                            var_29 &= ((var_14 % (arr_7 [i_0 - 3] [i_0 - 3] [i_1])));
                        }

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_30 = (max(var_30, (((1713239448252746440 ? 17577531932566127652 : 417340758)))));
                            arr_19 [i_0] [i_1] [12] [i_0] [i_6] = -var_16;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_31 += ((var_11 << (arr_20 [i_0 + 1] [i_0] [17] [i_3 - 1] [i_7])));
                            var_32 *= (((arr_14 [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_3 - 2] [13] [i_3]) > (arr_1 [18])));
                        }
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_33 = max(((max((arr_5 [i_0] [i_2 - 1] [i_0]), (arr_20 [i_2 - 1] [18] [i_2 - 1] [i_8] [5])))), (min(617612282343731967, 13540895297504525559)));
                        var_34 = (((min(var_0, (!var_8))) >> (((((((var_7 ? (arr_1 [i_8]) : var_4))) & var_10)) - 3989434041003581407))));
                        var_35 = (((((((var_1 > (arr_25 [5] [i_1] [5] [i_8]))) ? (~var_4) : (max(var_15, var_3))))) ? (arr_22 [i_0] [i_0] [i_0]) : (((((((arr_22 [i_0] [i_1] [i_2]) ? var_15 : (arr_0 [i_0])))) >= var_8)))));
                        var_36 *= (((~-var_1) ? (((arr_7 [i_2 - 1] [i_2 - 1] [i_2]) << (var_5 - 2424469801))) : var_3));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_2] [i_2 - 1] [i_2 - 1] = (max((((!var_1) > (min(var_5, var_13)))), (((((-(arr_7 [i_2 - 1] [i_1] [i_2])))) || (((arr_16 [i_9]) > var_0))))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_31 [i_10] [1] [i_0] = (arr_18 [3] [3] [i_2] [i_2] [i_9] [i_9] [2]);
                            arr_32 [i_0 - 2] [i_2] [i_0] [i_10] = ((~(!var_6)));
                        }
                        var_37 += ((!((((arr_0 [i_1]) | (min(var_8, (arr_12 [i_1] [i_2] [14] [i_1]))))))));
                        arr_33 [i_0] [6] [i_2] [i_1] [i_1] = (var_14 <= var_11);
                    }
                    arr_34 [i_0] [i_1] &= ((-var_0 > (((-(arr_12 [i_1] [i_2 - 1] [16] [i_2 - 1]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 23;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 23;i_14 += 1)
                    {
                        {
                            arr_46 [i_14] [i_12] [1] [1] = (min(((var_14 ? var_4 : var_4)), (var_16 * var_15)));
                            var_38 = arr_45 [i_14] [i_12] [i_14 - 2];
                        }
                    }
                }
                var_39 = (((min((arr_39 [i_12 + 1] [i_12 - 2] [i_12 - 2] [i_12]), (arr_38 [i_12 - 2] [i_12] [i_12 + 1]))) & (((min(var_14, (arr_42 [i_12 + 1] [i_12 - 2] [i_12 - 2] [i_12 - 2])))))));
                var_40 = (min((((!(var_9 + var_0)))), (max(10264, -617612282343731968))));
                arr_47 [i_11] [i_11] [i_12] = ((-var_3 ? (arr_42 [i_11] [9] [1] [i_12]) : var_4));
            }
        }
    }
    #pragma endscop
}
