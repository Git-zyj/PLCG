/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [1] [i_2] [i_3] [i_3] = (max(1, (!1)));
                                var_12 = max(((((max((arr_3 [i_1] [1] [i_1]), 3825108026))) ? (arr_2 [i_0] [i_0] [i_0]) : (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [8]) ? var_3 : 3537728429)))), ((min(var_3, var_4))));
                                arr_13 [i_0] [i_3] = (((((min(var_9, 757238888) > ((var_5 ? 4294967284 : 3688239678)))))));
                                arr_14 [i_0] [i_0] [i_3] [2] [i_4] = 21;
                            }
                        }
                    }
                    arr_15 [1] [i_0] [i_0] = (((((arr_1 [i_2] [i_2]) - (arr_1 [i_0] [0]))) != (((4294967293 ? (min(var_5, (arr_6 [11]))) : 16)))));
                    arr_16 [i_2] [i_1] [i_0] = 158;
                    var_13 |= (((arr_4 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : var_4));
                }
            }
        }
    }
    var_14 = (((((var_1 - 3688239678) + 40)) != (var_11 - var_10)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                arr_23 [i_5] = (max((((+(((arr_20 [i_5]) ? (arr_21 [i_5] [i_5]) : 44))))), 3457798226));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_15 = (min(var_15, var_0));
                    arr_28 [i_5] [i_6] = (((!2806401242) < ((var_6 ? 2806401242 : (arr_17 [i_6])))));
                    var_16 = (min(var_16, -1590048761));
                }
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_38 [i_10] [i_9] [i_5] [i_5] [i_5] [i_5] = ((-1 ? 14607 : 1));
                                arr_39 [i_5] [i_10] = (max((((arr_37 [i_8] [i_8] [i_8 - 2] [i_8] [i_8 + 1] [i_8] [i_8]) & 757238866)), ((~(((arr_21 [i_5] [i_5]) | (arr_22 [i_8] [i_8])))))));
                                var_17 = (((var_3 > 606727618) & ((0 ? var_1 : (arr_33 [i_5] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_10])))));
                                var_18 *= ((((!var_7) < var_10)) || (8 & -157400273));
                            }
                        }
                    }
                    var_19 = (((((arr_36 [i_5] [i_8] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_5] [i_5]) % (arr_36 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_5] [1]))) != (max((arr_36 [i_8] [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_6] [7]), (arr_36 [4] [0] [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8] [i_8])))));
                }
            }
        }
    }
    var_20 = 3;
    #pragma endscop
}
