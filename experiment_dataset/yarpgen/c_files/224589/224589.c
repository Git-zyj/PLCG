/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 ^= ((~(!var_4)));
                var_21 = (arr_2 [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 19;i_6 += 1)
                            {
                                var_22 ^= ((((((arr_5 [i_4]) >> (((arr_2 [i_2] [i_2]) - 51576))))) ? (arr_1 [i_3 - 1] [i_5 - 2]) : 1));
                                arr_19 [i_6] [i_5] [i_5] [i_4] [i_3] [1] [i_6] = (arr_16 [i_2] [i_3] [i_4] [i_5] [i_5] [i_6] [i_6]);
                                var_23 = (arr_3 [i_3 - 1] [i_6]);
                            }
                            var_24 -= (((((var_11 ? (arr_7 [i_3] [19] [i_5]) : var_19))) / ((min(1, 896391148)))));
                        }
                    }
                }
                var_25 = (arr_7 [i_2] [i_3] [i_3]);

                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {
                    var_26 = ((((((arr_13 [14]) ? 19492 : (arr_7 [i_2] [5] [i_7])))) ? (((arr_21 [i_3] [8] [i_3] [i_3 - 2]) ? (arr_7 [0] [i_3] [i_7]) : var_13)) : (~1)));
                    arr_23 [i_2] [i_3] [i_7] [i_7] = (arr_10 [1] [15] [i_2]);
                    var_27 = ((((arr_2 [i_7 - 3] [i_3 + 1]) && (arr_12 [i_7 - 2] [i_3 - 2]))));
                    var_28 = (min(var_6, (((arr_8 [i_3 - 3] [i_7 - 1]) ? (arr_8 [i_3 + 1] [i_7 - 3]) : (arr_9 [i_3 - 3] [i_7 + 1])))));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_27 [18] [1] [i_2] = (((((((237 ? var_19 : (arr_21 [i_8] [i_3] [2] [i_2]))) + (((min(196, (arr_26 [i_8] [i_3] [i_2])))))))) ? (((arr_6 [i_2] [i_3 - 2]) * (arr_6 [i_8] [i_3 - 2]))) : -233));
                    arr_28 [i_8] [i_3] [i_2] = (var_15 - 213);
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_29 = ((var_13 == ((~(((arr_0 [i_2]) ? var_2 : var_3))))));
                                var_30 += (~var_2);
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_31 = (min(var_31, (((!(((~(arr_17 [i_2] [i_2] [i_3] [i_3] [i_3 - 1] [14] [0])))))))));
                        var_32 &= ((max((arr_14 [i_3 - 3] [i_3 - 1] [19] [i_8]), (arr_3 [4] [18]))));
                        arr_39 [i_2] [9] [i_2] [i_2] [4] [i_2] = ((!(arr_37 [i_3 - 2] [i_3])));
                    }
                    var_33 = ((!(arr_30 [i_8] [i_3 - 3] [i_2] [i_2])));
                }
                for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    var_34 |= ((((((-((((arr_35 [i_12] [i_3] [1] [8]) >= var_13))))) + 2147483647)) << ((((((((((arr_4 [i_2]) ? (arr_35 [10] [i_3] [i_12] [i_2]) : (arr_17 [i_2] [i_3] [4] [i_3] [i_3] [6] [16])))) ? ((-7613297388181490174 ? (arr_3 [12] [0]) : 1)) : (arr_37 [i_3] [3]))) + 1547172418861258478)) - 17))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_48 [i_2] [i_3] [i_12] [i_13] [i_14] = arr_7 [i_2] [1] [i_12];
                                var_35 ^= arr_44 [4] [i_13] [i_12] [i_3] [1];
                            }
                        }
                    }
                    var_36 = ((((~var_3) ? ((51 ? (arr_15 [18] [i_2] [i_3] [i_12] [i_12]) : (arr_46 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) : var_0)) & (((~(arr_5 [i_3])))));
                    var_37 &= (((max((arr_25 [i_3] [i_3] [i_3 - 3]), (var_5 - var_0)))) || ((min(((((arr_9 [i_2] [i_12]) / var_2))), 18010000462970880))));
                    var_38 = max((((!(!var_2)))), (max((arr_26 [12] [12] [13]), var_14)));
                }
                var_39 = ((((((((arr_16 [i_2] [i_3] [i_3] [i_2] [i_2] [i_2] [i_3]) ? var_16 : (arr_20 [i_2] [i_3] [1])))))) | (min((arr_11 [i_2] [i_3] [i_3] [i_3]), (arr_22 [12] [i_3] [16])))));
            }
        }
    }
    #pragma endscop
}
