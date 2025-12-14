/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((var_9 ? (min(1795159142491670178, var_6)) : (max(var_16, -5557312279476480121)))) == (arr_2 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [9] [11] [i_2] [9] [i_4] [i_4] = ((-((-var_18 ? (var_7 * var_3) : (((var_0 ? 3531855482 : 520148833)))))));
                                var_21 = ((var_6 ? (max((arr_3 [i_1] [i_1] [4]), var_2)) : ((((((min(var_10, (arr_11 [i_0] [i_1] [6] [i_3] [i_3] [3]))) + 9223372036854775807)) >> (var_3 - 7162306069226295151))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((~var_11) & (((~-513049365) ? 10957157557518683844 : -6357850934833646960))));
                                var_22 = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_23 = (max(((((((arr_6 [i_6] [i_5] [i_0] [i_0]) - 1))) | (var_16 ^ 7630439426841195270))), ((min((arr_15 [i_5 - 1] [i_5 + 1] [i_5]), 236)))));
                            var_24 = (max(var_24, -var_16));
                            var_25 = (min(1556656585, (((var_0 ? 0 : 1)))));

                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_26 = (min(0, (9182454269023859787 << var_18)));
                                var_27 = ((-(((!(arr_8 [i_6 + 1] [i_1] [1] [i_6] [i_7] [i_6]))))));
                                var_28 = (min(((15868470 || ((max(908773590, var_6))))), (((!var_9) > var_5))));
                            }
                            for (int i_8 = 0; i_8 < 13;i_8 += 1)
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = (((arr_18 [9] [i_1] [i_1] [i_6]) ? ((-(arr_4 [i_5 + 1]))) : var_18));
                                var_29 = -31532;
                                var_30 ^= max((((arr_10 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6] [i_6]) ? var_13 : (arr_10 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [0] [i_6]))), var_14);
                            }
                            for (int i_9 = 0; i_9 < 13;i_9 += 1)
                            {
                                arr_28 [i_5] [i_5] [1] [i_1] [3] [i_1] [i_1] = -1703223670;
                                var_31 = 1;
                            }
                        }
                    }
                }
                var_32 |= (((((((min(var_11, 9074126976796609321))) ? var_15 : var_13))) ? ((((!1) ? (!1) : (((arr_1 [7] [2]) ? 1 : 195))))) : (((var_12 && var_11) ? ((max(var_3, var_7))) : (((arr_20 [i_0] [i_0]) ? var_10 : 17736855547173977767))))));
                var_33 = (min(((max(169, 22151))), ((~(arr_18 [2] [2] [i_0] [1])))));
            }
        }
    }
    var_34 |= (((var_4 || var_18) >= ((var_10 ? var_7 : var_5))));
    var_35 = 3199578631;
    var_36 = ((max(var_7, var_18)));
    var_37 = (min(var_37, var_17));
    #pragma endscop
}
