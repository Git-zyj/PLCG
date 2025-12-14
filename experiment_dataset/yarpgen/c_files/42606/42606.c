/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((380950543 ? -2070439644809810620 : 22)))));
                                var_13 = ((((max((var_6 ^ var_6), (arr_2 [14])))) ? (arr_5 [i_0] [i_1] [i_0 - 3]) : (((!var_0) ? (arr_4 [i_1 + 1] [i_0 - 1] [21]) : (((var_3 ? (arr_5 [i_3] [i_3] [i_2]) : var_11)))))));
                                var_14 = (arr_7 [i_3] [i_1] [i_2]);
                                var_15 &= (min((arr_12 [i_1 + 1]), (arr_4 [i_4] [i_2] [i_1 + 1])));
                                var_16 = var_3;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_17 = (arr_0 [i_5]);
                        var_18 += (max((max((arr_15 [i_0] [i_0] [i_0 - 3] [i_0] [i_1] [i_1 + 1]), (arr_15 [i_0] [i_0] [i_0 - 3] [i_1 + 1] [1] [i_1 + 1]))), (((arr_15 [i_0] [5] [i_0 - 3] [i_0 - 1] [i_0] [i_1 + 1]) || (arr_15 [0] [i_0] [i_0 - 2] [i_1] [i_1] [i_1 + 1])))));
                        arr_16 [17] [i_1] [1] [i_5] = (arr_11 [i_0] [i_0] [i_1] [10] [i_5]);
                        var_19 = (min((((arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_7 [i_0 - 1] [i_2] [i_5]) : (arr_7 [i_0 + 1] [i_0 - 1] [i_0]))), (((var_3 ? (arr_5 [7] [7] [10]) : (arr_8 [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        var_20 = (min(var_20, ((((arr_18 [i_0] [i_1] [i_2] [i_2]) ? (((arr_3 [15]) ? (arr_18 [i_6 + 2] [i_6 + 1] [i_6 + 4] [i_6 - 2]) : (((!(arr_6 [3] [i_1])))))) : ((min((arr_11 [i_0 - 1] [i_6] [3] [i_6] [4]), (arr_11 [i_0 + 1] [i_6] [i_6 + 4] [i_6] [i_6])))))))));
                        var_21 = (!var_4);

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_22 &= (min(((max((((!(arr_15 [i_0 - 1] [i_0] [i_1 + 1] [i_2] [i_6 + 1] [18])))), (((arr_12 [i_0]) ? var_9 : (arr_19 [i_0] [17] [17] [i_6] [i_7])))))), (max((arr_4 [i_1] [i_2] [i_6 - 2]), var_4))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(var_10, (((-(var_1 > var_0))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            var_23 = (arr_15 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]);
                            arr_24 [i_0] [i_0 - 3] [i_8] [i_0] [21] = (arr_7 [i_0] [i_0] [15]);
                        }
                    }
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        var_24 *= ((!(((var_7 & (((48 ? 116 : -2046140922))))))));
                        arr_28 [i_0 - 3] [8] [1] [1] [i_2] [i_2] |= (arr_14 [i_0] [4] [i_0] [i_0 - 2]);

                        for (int i_10 = 4; i_10 < 21;i_10 += 1)
                        {
                            arr_31 [i_10] [i_9] [13] [i_9 + 1] [1] [i_9] [10] = (arr_4 [i_10 + 1] [i_9] [i_0 - 1]);
                            var_25 = ((var_8 ? -2046140922 : 380950554));
                            arr_32 [i_0 - 1] [4] [i_0] [i_0] [i_9] [i_0 - 2] [4] = ((((((arr_17 [i_0 + 1] [i_1 + 1] [i_9 - 2] [i_1] [i_0 + 1]) ? (((var_8 / (arr_13 [i_1] [i_1])))) : ((3509844793 ? 3509844793 : 39051))))) ? ((var_11 ? (arr_11 [i_9] [i_9] [i_1] [i_1] [4]) : (arr_10 [i_0] [i_1] [i_2] [i_9]))) : ((((!(arr_17 [i_1] [i_1] [i_0] [i_9] [i_10 + 1])))))));
                            var_26 = ((-(arr_19 [i_0 + 1] [i_0] [i_0] [i_0 - 3] [9])));
                        }
                    }
                }
            }
        }
    }
    var_27 = ((var_6 ? var_3 : (~var_11)));
    #pragma endscop
}
