/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(9223231299366420480, 9015036311730626279)) & (245 ^ var_13)))) ? (min(((var_12 ? 64 : var_5)), var_16)) : var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (((arr_2 [i_0] [i_0]) ? (((!(arr_1 [13] [i_0])))) : 72));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [15] [i_1 + 1] [5] [i_0] [i_3] = (((2067081761803000654 ? 9223231299366420480 : 53)) & ((var_6 ? (arr_1 [i_0] [i_0]) : (arr_2 [3] [i_1 + 1]))));
                        var_19 -= (((arr_4 [i_2] [i_2]) ? var_10 : ((var_8 >> (var_13 - 1747657747446237711)))));

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            arr_14 [i_0] [6] [i_0] [1] = ((114 <= (((arr_8 [i_0] [i_1 - 1] [i_2] [i_2]) - (arr_9 [i_4 + 1] [i_2] [i_2] [i_1])))));
                            var_20 = (max(var_20, ((((arr_12 [i_3] [i_3 + 1] [i_4] [4] [i_4 + 1] [i_4 - 1]) <= (arr_8 [i_1 + 1] [i_4 - 1] [i_2] [i_2]))))));
                        }
                        arr_15 [i_0] [i_0] [i_0] = arr_7 [i_0] [i_2] [i_3];
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((arr_12 [i_1] [i_1] [i_1 - 1] [0] [i_1] [8]) / (arr_12 [i_1] [i_1] [i_1 - 1] [2] [2] [i_1]))))));
                                var_22 = 217;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_23 = (((((arr_19 [i_7 + 2] [i_2] [i_1] [i_1] [i_1 + 1]) + 9223372036854775807)) << (((((arr_19 [i_7 - 1] [i_7 - 2] [i_7 + 2] [i_7 - 2] [i_1 + 1]) + 3554853649509277794)) - 47))));
                                var_24 = ((((((arr_1 [i_2] [i_2]) && (arr_5 [i_0])))) & (((!(arr_1 [i_0] [10]))))));
                            }
                        }
                    }
                    arr_27 [i_0] [i_0] = (!0);
                }
            }
        }
        var_25 = arr_20 [i_0] [i_0] [i_0];
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_26 = (arr_24 [12] [i_9] [i_9]);
        arr_30 [0] = ((((8 ? 6 : (min(var_2, var_5)))) >= ((((max(-1, var_9))) ? 9223231299366420480 : var_5))));
    }
    #pragma endscop
}
