/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_1 - 1] [5] [i_1 - 3] [1] [i_2] [i_1 + 2] = ((~(((arr_8 [i_1 + 2] [i_3] [i_3] [i_3 + 1] [i_3 + 1]) ? (arr_8 [i_1 - 3] [i_1 - 3] [i_2] [i_3 + 1] [i_3 + 3]) : (arr_8 [i_1 + 1] [i_2] [i_2] [i_3 + 2] [i_3])))));
                            arr_11 [i_2] = ((((((-(arr_7 [i_0] [9] [i_0 + 3]))))) ? ((((((var_11 ? var_6 : var_10)) != ((var_6 << (var_7 - 1353593300))))))) : (min(-var_12, (!2067696172)))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_0] = (((-1 / (arr_4 [i_1 - 2] [i_1 - 3] [i_1 + 1]))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_14 = (((-(arr_3 [i_1 + 1] [i_1 - 3]))));
                                var_15 = (((var_12 > 1) - (((arr_19 [i_0] [i_1 - 2] [i_4] [i_5] [i_6]) ? var_0 : ((0 ? 0 : 118))))));
                                var_16 = ((((((~(arr_0 [i_0 - 4] [4]))) ? ((var_3 ? (arr_20 [i_0 - 2] [2] [i_6] [i_5] [i_6] [i_1 + 1] [i_6]) : var_12)) : (!115)))));
                                var_17 = ((!((min((!1), var_3)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 -= (((461093433 & var_9) ? var_5 : -var_6));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_19 = ((((!(arr_27 [i_10 - 1] [i_10 + 1]))) ? ((max((arr_29 [i_10 - 1] [i_9 - 1] [i_9 - 1]), (1 | var_8)))) : (((var_13 || -11) ? (min(var_9, var_3)) : ((max(var_13, 0)))))));
                            var_20 = ((((min(-77479906, -846819021))) ? (((!var_13) ^ -var_1)) : -var_7));
                            var_21 = ((-(min((min(var_2, var_12)), var_4))));
                            arr_33 [i_9] = (((max((~-5), ((var_1 ? var_7 : var_13))))) ? ((var_2 ? (arr_24 [i_7] [i_8]) : -32755)) : ((((((arr_28 [i_7] [i_8] [i_9] [i_10]) | (arr_26 [i_10] [i_10 - 1])))) ? (!var_11) : (1681175842 && 102))));
                            var_22 = (arr_25 [i_7]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_23 = (max(var_23, var_5));
                            arr_39 [i_7] [i_8] [i_11] [11] [i_8] = (((((!(arr_38 [i_8]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
