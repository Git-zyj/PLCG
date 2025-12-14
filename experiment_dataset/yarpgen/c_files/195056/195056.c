/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 63));
    var_19 = var_8;
    var_20 = (min(var_20, ((((((min(562949953413120, var_3))) ? (5726 + var_7) : ((var_3 ? var_17 : var_3)))) - ((~((min(var_5, var_13)))))))));
    var_21 = (max(var_21, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_22 = -63;
                            var_23 = (max(var_23, ((max((arr_9 [i_2 - 2] [3] [i_2 - 2]), var_0)))));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_2] [14] [i_0] [i_1] [i_2] &= (((((arr_4 [i_0]) ? (arr_5 [i_2] [i_3 - 1] [i_4]) : 13067)) & (arr_5 [i_0] [i_1 - 3] [i_2])));
                                var_24 = max((~13047), 19);
                                var_25 = (max(var_25, (((var_3 == (max(1482637170, var_9)))))));
                            }
                            for (int i_5 = 4; i_5 < 12;i_5 += 1)
                            {
                                arr_19 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3] [i_5] [i_5 - 2] [i_3] |= (((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2 + 1]) ? (((arr_5 [i_1] [i_3] [15]) ? var_17 : (max(234881024, (arr_2 [i_2]))))) : (max(var_12, ((var_13 ? var_5 : var_10))))));
                                arr_20 [i_0] |= (((-(arr_10 [8] [i_3] [i_3] [i_3]))));
                                var_26 = (min(var_26, var_15));
                                var_27 = 237;
                                var_28 = (min((~var_2), ((((arr_9 [i_5 - 4] [i_2 + 1] [i_1 + 3]) < var_5)))));
                            }
                            for (int i_6 = 1; i_6 < 12;i_6 += 1)
                            {
                                var_29 ^= var_7;
                                var_30 = (arr_23 [i_1] [i_1] [0] [i_1] [6] [10] [i_1]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                            {
                                arr_32 [2] [i_9] [i_7] [2] [3] [i_7] = max(var_16, ((max((arr_13 [3] [i_9]), var_8))));
                                var_31 = (max(var_31, (((+((1482637170 ? (arr_6 [i_1 + 2] [i_1 - 3] [12]) : (!9075999458580228762))))))));
                                var_32 = (min(var_32, ((((((((arr_31 [i_9] [i_1] [i_0] [13] [13] [i_9]) ? (arr_22 [i_7] [i_0]) : 9075999458580228762)))) < (arr_5 [i_0] [i_0] [i_0]))))));
                                var_33 ^= ((((((((min((arr_17 [3] [i_8] [i_7] [i_1 - 2] [3] [i_0]), (arr_28 [i_7] [i_1])))) || ((max((arr_17 [i_0] [i_0] [2] [12] [10] [i_9]), 26))))))) ^ 234881040));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                            {
                                var_34 = (((arr_9 [i_0] [i_1 - 1] [i_8]) | (((!(arr_34 [i_10] [i_8] [i_7] [1] [i_0]))))));
                                arr_37 [i_10] = ((~(arr_34 [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 3])));
                                var_35 = (min(var_35, (arr_31 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 1])));
                                var_36 -= (arr_35 [5]);
                                var_37 = 249;
                            }
                            arr_38 [i_1] = (((63 - 21348) % ((-(arr_34 [i_0] [i_0] [i_7] [i_1 - 2] [14])))));
                        }
                    }
                }

                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_38 = (max((arr_36 [i_1 - 3] [i_11 - 1] [i_12 + 3] [i_11 - 1] [i_12]), 2006665868));
                                var_39 ^= 5196081884613765564;
                                var_40 = (max(var_40, (((!(!var_7))))));
                            }
                        }
                    }
                    var_41 = max(((-((min(1, -1))))), (((max((arr_3 [i_0] [i_0]), (arr_10 [i_0] [i_0] [7] [i_11]))))));
                    var_42 = (max(4060086278, var_14));
                }
                arr_48 [i_0] = (max(60, ((((arr_0 [i_0] [i_1 + 3]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : ((var_7 ? (arr_47 [i_1 + 1] [11] [11] [i_0]) : 1)))))));
            }
        }
    }
    #pragma endscop
}
