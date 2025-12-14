/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((-((((max(var_14, (arr_11 [i_0] [i_2])))) ? ((var_10 ? (arr_3 [i_0]) : (arr_8 [i_2] [i_1] [i_2] [i_4]))) : (arr_11 [i_0] [i_1 - 2]))))))));
                                var_18 = (((!var_6) ? ((948179105 ? -948179108 : (((arr_3 [i_1]) ? (arr_3 [i_0 - 3]) : var_7)))) : (arr_5 [i_1] [i_2])));
                            }
                        }
                    }
                }
                var_19 += ((((((-948179102 ? 65512 : 37224)) % (min(-948179116, var_7))))) * (((arr_2 [i_1 + 1] [i_0 + 3]) ? (((arr_10 [16] [16] [i_0] [i_0]) / (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (arr_13 [6] [i_1] [i_1] [i_1] [i_1]))));
                var_20 = (--65529);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            {
                var_21 |= (arr_17 [i_5] [6]);
                var_22 = ((~(max((arr_14 [i_5 - 1]), (arr_14 [i_5 - 1])))));
            }
        }
    }
    var_23 += var_16;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_24 = (948179100 && -32753);
                            var_25 = ((~(arr_6 [i_8] [3])));
                            var_26 += (((((((var_5 ? (arr_8 [14] [14] [14] [i_10]) : (arr_2 [i_7] [i_8 - 2]))) % (arr_6 [i_7] [i_8])))) ? ((((arr_1 [i_9]) ? (((arr_20 [i_7] [i_9]) & var_2)) : (((var_3 * (arr_10 [i_9] [i_8 + 2] [i_9] [i_10]))))))) : ((var_5 >> ((((max(var_9, var_2))) - 33847))))));
                            var_27 = ((arr_22 [i_7] [i_7]) ? (arr_13 [i_9] [i_9] [i_8] [i_9] [i_9]) : var_6);
                        }
                    }
                }
                var_28 = (max(var_28, var_8));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_33 [i_7] [i_12] [i_11] [i_11] = ((min(var_5, (var_3 + var_5))));
                            var_29 = ((min((arr_18 [i_8 - 1] [i_8 - 2]), (min((arr_19 [i_7] [i_7]), (arr_16 [i_12] [i_12]))))));
                            var_30 = ((((28753 ? (var_10 | var_7) : (-948179095 <= 37303))) % (((~(min((arr_0 [i_8] [i_8]), 39183)))))));
                        }
                    }
                }
            }
        }
    }
    var_31 = max(3, var_0);
    #pragma endscop
}
