/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (179 << 5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 -= ((((-(arr_2 [i_3 - 1]))) * (((59 ? (arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 3] [i_3 + 3]) : (arr_8 [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_3 + 1]))))));
                                arr_14 [i_0] [i_0] [i_3] [i_3 + 1] [i_4] [13] = ((!(((!1997) >= (min(-278383774, (arr_9 [i_0] [i_1] [i_1] [i_3 + 2] [i_4])))))));
                                var_19 = (((((-278383774 ? 0 : 246))) ? ((max((arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]), (arr_11 [i_3 - 1] [i_3 + 2] [i_3 - 1])))) : (((!(arr_11 [i_3 + 2] [i_3 + 1] [i_3 + 2]))))));
                                arr_15 [15] [13] [i_2] [i_3] [i_4] [i_0] [i_2] = (!var_16);
                                var_20 = ((100 ? ((((~var_2) ? ((((arr_3 [i_0] [i_3 + 3] [16]) > var_7))) : 150))) : ((var_1 ? (min((arr_7 [i_0] [i_0]), var_7)) : (arr_8 [i_4] [10] [14] [10])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = (arr_13 [i_0] [i_6] [i_2] [i_6] [i_6]);
                                arr_21 [i_6] [i_1] [i_1] [i_1] [10] [i_1] = var_14;
                                var_22 = (min(var_22, ((((((!((max(1, (arr_10 [i_0] [0] [i_0] [i_0]))))))) <= ((~(arr_10 [i_0] [i_1] [i_5 + 2] [i_5 - 2]))))))));
                                arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] = 12;
                            }
                        }
                    }
                    arr_23 [i_2] [i_2] [11] [i_0] = ((((!(!var_11)))));
                    var_23 = ((((0 ? var_12 : (arr_17 [i_2] [i_2] [i_2] [i_2]))) >> (((arr_13 [i_0] [i_0] [i_1] [i_1] [i_2]) - 115))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_24 = ((!(((((((arr_9 [i_8] [i_7] [17] [i_1] [i_0]) ? var_3 : var_13))) ? 77 : 0)))));
                                arr_30 [i_0] [18] = (arr_27 [i_0] [i_1] [i_2] [i_7] [i_8]);
                                arr_31 [i_0] [i_1] [i_1] [i_7] [i_8] |= var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 &= var_9;
    #pragma endscop
}
