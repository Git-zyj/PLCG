/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 1] [i_1] [i_2] [i_3 + 2] [i_2] = (max((arr_0 [i_3 + 1] [i_4 - 3]), (max((arr_0 [i_3 - 1] [i_4 - 2]), (arr_0 [i_3 + 2] [i_4 - 2])))));
                                var_14 += (((~14951) ? ((((((arr_5 [i_2] [i_2]) ? (arr_8 [i_0] [1]) : var_12))) + (max((arr_5 [i_4 - 3] [i_3]), (arr_0 [i_0] [i_1]))))) : (1 / var_8)));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = ((!((max((0 - 1), (arr_5 [i_0 + 1] [i_1]))))));
                            }
                        }
                    }
                }
                var_15 += (max((15030 >= 1), (((11 ? (arr_3 [15] [i_1] [i_0 + 1]) : var_5)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] [i_5] [i_6] &= ((!(arr_17 [i_0 + 1] [15] [i_5] [15])));
                            var_16 += (((((max((arr_5 [i_5] [i_0]), (arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_5] [i_6])))) ? (((arr_0 [i_0] [i_5]) ? (arr_3 [i_0 - 1] [i_1] [i_1]) : (arr_10 [i_0] [i_1] [i_0] [i_6 + 1]))) : (((arr_10 [i_0] [i_0] [i_0] [i_0]) ^ (arr_16 [i_0] [1] [i_5]))))));
                            var_17 += (((((((max((arr_12 [i_6] [i_5] [i_5] [i_1] [15]), 9223372036854775807))) ? (((0 == (arr_6 [i_0] [i_0] [i_0] [i_0])))) : 74))) ? (arr_10 [i_0] [11] [i_5] [i_6]) : ((((max(1, var_12))) ? 0 : 251658240))));
                            var_18 = ((((((arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0]) ? 93 : ((((arr_5 [i_1] [i_1]) > var_11)))))) ? (max(((1 ? var_3 : 1)), 0)) : 1));
                            arr_20 [i_1] [0] [0] [i_6 + 1] [i_6] |= var_9;
                        }
                    }
                }
                arr_21 [i_1] = var_7;
            }
        }
    }
    var_19 = (~-15025);
    #pragma endscop
}
