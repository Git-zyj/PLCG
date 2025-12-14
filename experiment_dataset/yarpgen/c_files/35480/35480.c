/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!var_3) + (max(var_10, ((var_4 ? var_4 : 524160))))));
    var_15 ^= var_7;

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_16 = -32761;

            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                var_17 = (arr_0 [i_0] [i_2]);
                var_18 = ((1957553844 ? (arr_3 [i_0 - 3] [i_2 + 1]) : (arr_3 [i_0 - 1] [i_2 - 1])));
                var_19 = (arr_0 [i_1] [i_2]);
                var_20 = (arr_6 [i_2 + 1] [i_0 - 2]);
            }
            var_21 = ((-(arr_0 [15] [i_1 - 1])));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_17 [i_0] [i_3 + 1] [i_0] [i_3 + 1] [i_3] = ((!(((arr_14 [i_6] [i_6 + 3] [i_3] [i_6 - 1] [i_6]) == 11))));
                            var_22 *= (max((~1957553830), (arr_8 [i_6 - 1])));
                        }
                    }
                }
                var_23 = ((var_13 ? -30770 : 3577001768));
                arr_18 [i_3] [i_3] [10] = (arr_4 [i_0] [i_0 - 4]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_26 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 1] = ((arr_12 [i_3 - 1] [i_3] [i_7 + 1] [i_3] [1]) - ((41381 ? 1732332678 : 6)));
                            var_24 ^= (((((-30770 ? 2337413451 : 30749)))) ? var_2 : ((((((~(arr_19 [i_0] [i_0 + 1]))) < var_9)))));
                            var_25 = (((arr_0 [i_0 - 3] [i_3 + 1]) ? (arr_12 [i_3] [i_3] [i_4 + 4] [i_3] [i_4 + 4]) : (arr_0 [i_0 + 1] [i_3 + 1])));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
            {
                arr_29 [i_3] [i_9] = (((arr_28 [i_3] [i_3 + 1] [i_9] [i_3]) >= ((2617423339 ? (arr_8 [i_0]) : var_0))));
                var_26 = (((var_10 ? (arr_25 [i_0] [i_3] [i_0] [7] [4]) : (arr_3 [16] [i_3]))) << (((((arr_7 [i_3] [11] [i_9]) ? var_5 : var_11)) - 51773)));
            }
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                var_27 = (max(var_27, (!var_8)));
                arr_32 [i_0] [i_3] [i_3] = var_9;
                var_28 = 38724;
                var_29 |= (((arr_15 [i_0] [i_3] [i_0] [i_0]) ? (((arr_14 [i_0 - 2] [i_0 - 2] [i_10] [i_10] [i_10 - 1]) ? (arr_3 [i_3] [i_0]) : (arr_25 [i_0] [i_0] [i_3 - 1] [i_10] [i_10]))) : var_7));
            }
            /* vectorizable */
            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                var_30 = (((arr_0 [i_3] [i_0]) ? (arr_14 [i_3 - 1] [i_11] [i_3] [i_3 - 1] [i_0 - 1]) : var_0));
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_31 = (((arr_33 [4] [4] [i_11 + 1] [i_12 + 2]) + (arr_8 [i_0 - 2])));
                            arr_42 [i_0] [i_3] = ((!((((arr_22 [6] [i_3] [i_0 - 3]) ? var_3 : (arr_14 [i_0] [15] [i_3] [i_12] [i_13]))))));
                            var_32 = (((arr_6 [i_11 + 1] [i_13 - 1]) ? (arr_6 [i_11 - 1] [i_13 - 1]) : (arr_6 [i_11 - 1] [i_13 - 2])));
                            var_33 = (((arr_28 [i_3] [i_3] [i_3] [i_12 - 2]) ? (arr_28 [i_3] [14] [14] [14]) : (arr_28 [i_3] [i_3] [i_12 + 2] [9])));
                            var_34 = (1844513602 ? 41375 : 627947874);
                        }
                    }
                }
            }
            arr_43 [i_3] [i_3] [i_3] = var_8;
        }
        for (int i_14 = 1; i_14 < 17;i_14 += 1) /* same iter space */
        {
            arr_46 [i_0] |= ((-(((!(arr_7 [i_0] [i_0] [i_14 + 1]))))));
            var_35 = ((549701979 > ((((!(arr_41 [i_0] [i_14] [i_14] [i_14 - 1] [i_14 - 1])))))));
            var_36 = var_6;
            arr_47 [i_14] = ((max((arr_27 [i_14]), ((-(arr_45 [i_0] [i_14 - 1] [8]))))) - ((((((arr_39 [i_0] [i_0] [i_14 + 1] [i_14 + 1] [i_14]) ? -19431 : (arr_22 [i_0] [13] [i_0])))) ? (((arr_38 [i_14] [i_0] [i_14] [i_14] [i_14]) ? var_10 : (arr_40 [i_0] [i_0] [i_0 - 2] [i_14] [i_14]))) : -var_10)));
        }
        var_37 ^= (max(-1831936925, (arr_28 [i_0] [2] [i_0] [i_0])));
        arr_48 [i_0] [i_0] = ((~(arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 3])));
    }
    var_38 = var_10;
    #pragma endscop
}
