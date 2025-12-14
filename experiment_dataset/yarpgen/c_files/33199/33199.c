/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_14 = ((((!(((var_10 ? (arr_4 [i_0]) : (arr_5 [i_2 - 1] [0] [9])))))) ? (~var_8) : var_12));
                                arr_13 [i_0] [9] [i_2 - 1] [7] [i_0] = ((((~(arr_1 [i_0] [i_1 - 2])))));
                                var_15 += (arr_1 [2] [i_1 - 2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [3] [1] [i_5] [i_0] [i_1 + 1] [7] [5] = (((((arr_16 [i_0] [i_6] [i_6] [i_2 - 1] [i_0]) < (arr_16 [i_0] [7] [0] [i_2 + 1] [i_0]))) ? (min((arr_18 [i_1 + 1] [5] [i_6] [i_6] [i_6] [9]), var_9)) : ((((arr_18 [i_1 - 1] [i_6] [7] [i_6] [9] [i_6]) ? (arr_4 [i_1 - 1]) : var_11)))));
                                var_16 += (((((-(min(18446744073709551609, -106))))) ? (min(var_1, (((arr_2 [i_0] [i_5]) ? (arr_15 [1] [i_5] [1] [i_2 + 1] [i_1 - 2] [i_0]) : (arr_6 [7] [i_2 + 1] [1]))))) : var_3));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_17 = ((-((-30207 ? -1 : ((((arr_3 [i_0]) || var_2)))))));
                        var_18 = var_0;
                        var_19 = ((((((var_7 - var_6) / var_8))) ? (((-(arr_3 [i_0])))) : ((-(arr_9 [5] [1] [i_2 - 1])))));
                    }
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        var_20 = (!-var_11);
                        var_21 = (var_3 < 15);
                        arr_27 [0] [8] [i_2 + 1] [i_0] = ((1 ? var_4 : (var_4 <= var_13)));
                        var_22 = (((arr_25 [i_1 - 1] [i_1 + 1] [8] [i_8 + 2]) ? (max((arr_24 [i_1 + 1]), (arr_25 [i_8 + 1] [4] [4] [i_8 + 3]))) : ((((!var_12) ? var_10 : (~122))))));
                    }
                    var_23 = (max(var_23, (((!(~var_10))))));
                    var_24 = (max(1, (((arr_11 [i_0] [i_1 - 2] [i_2 + 1] [0] [4] [6]) ? ((381818937 ? var_0 : var_0)) : -52539))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    var_25 = (max(var_25, ((max(((921804787604390289 ? (arr_29 [i_9 + 1] [i_9 - 3]) : -1451817866)), -2147483631)))));

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_38 [18] [i_10] [i_10] [9] [i_10] = -1;
                        var_26 = (min(var_26, (((~(1 == 1))))));
                        var_27 = (min(var_27, (arr_36 [3] [i_11] [i_10] [i_9 - 2])));
                        var_28 = 1;
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_29 = var_11;
                        var_30 = (max((((-(arr_36 [i_9 - 4] [i_9 - 1] [i_9 + 2] [i_9 - 3])))), (arr_34 [i_9 + 2] [7] [i_10] [i_13])));
                        arr_41 [i_9] &= -4294967288;
                    }
                    var_31 |= ((!((max(74, (((arr_31 [i_9 - 2]) ? (arr_29 [i_10] [i_9 - 1]) : 140)))))));
                }
            }
        }
    }
    #pragma endscop
}
