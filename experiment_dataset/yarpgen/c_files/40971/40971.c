/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = ((max((arr_2 [i_1 - 1]), (arr_1 [i_0 + 2] [i_0 + 2]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 = (((((((arr_1 [i_0] [i_1]) + (arr_3 [i_0] [i_0]))))) ? (((arr_4 [9] [i_1] [i_1 + 1] [i_3]) ? (arr_0 [i_0 - 1] [i_0]) : -2009583963856782094)) : (min(((2097151 ? -2097152 : var_1)), (max((arr_7 [i_0 + 2] [9]), (arr_3 [13] [13])))))));
                            var_17 = (arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 1]);

                            for (int i_4 = 1; i_4 < 12;i_4 += 1)
                            {
                                var_18 = ((min(-1692857398354061897, (max((arr_3 [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))))));
                                var_19 = (((((+((-102 ? (arr_5 [i_0] [i_0] [i_0 - 1]) : (arr_2 [i_4 - 1])))))) > (((max(-8942223112419709301, var_1)) + (arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0])))));
                                arr_10 [13] [i_1 - 3] [i_2] = ((((123 ^ (max((arr_1 [i_0] [i_2]), (arr_6 [i_0] [i_1] [i_1] [i_3]))))) << (((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4 + 3] [i_4]) - 33098))));
                            }

                            for (int i_5 = 3; i_5 < 12;i_5 += 1)
                            {
                                var_20 -= ((((((arr_9 [i_5 - 3] [6] [5] [i_5 - 3] [i_5] [5]) << (((arr_13 [i_5] [i_3] [i_2] [i_1] [i_0 + 1]) + 1665508013))))) ? (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) : ((1 ? (((arr_6 [i_0] [i_0] [i_3] [i_3]) ? (arr_14 [i_0] [3] [i_3] [3] [11] [i_1]) : (arr_13 [10] [i_0] [i_2] [i_0] [i_0]))) : (arr_11 [i_0 - 1] [i_3] [i_2] [i_3] [i_0 - 1])))));
                                var_21 = var_8;
                                arr_15 [i_3] [i_3] [i_2] [i_0] [i_0] = var_13;
                            }
                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_22 -= -8942223112419709315;
                                arr_19 [i_0 + 2] [i_2] = 11744192026035338512;
                                var_23 = (max((arr_2 [i_0]), (((-(arr_9 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 - 1]))))));
                                var_24 = (max(-var_10, (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
                                arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((arr_9 [2] [4] [i_1] [2] [i_1 - 1] [i_1 + 1]) ? (arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 - 3]) : var_6)) & (arr_13 [i_1] [1] [i_1] [i_1 + 1] [i_3]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, ((((max(var_13, 19)))))));
    #pragma endscop
}
