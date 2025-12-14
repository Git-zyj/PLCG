/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 8285036309035224212;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 23;i_4 += 1)
                            {
                                var_11 ^= (arr_3 [i_0] [i_0 + 1] [i_2]);
                                var_12 = ((-8285036309035224207 > ((-8285036309035224212 / (arr_6 [i_1 - 1] [i_1 - 1] [i_1] [i_1])))));
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                var_13 = ((((35993612646875136 ? var_6 : (arr_9 [i_0] [i_0] [i_0] [16] [16] [i_0])))));
                                arr_14 [i_1] [i_1] [i_2] [i_2] [i_1] [i_1] = (arr_9 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5]);
                                var_14 = (arr_3 [i_0 - 1] [i_3] [i_5]);
                            }
                            arr_15 [i_1] [i_2] [i_1 + 1] [i_1] [i_0] [i_1] = (((((min(var_6, (((arr_0 [i_0]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_3]))))) + 2147483647)) >> ((((36028788429029376 ? 227 : 1)) - 197))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((((((arr_9 [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_7 - 1] [i_7 + 1] [i_7]) ? 10422 : var_7))) ? ((1 ? 1455938879998897644 : (arr_9 [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_7 + 1] [i_7] [i_0 + 1]))) : var_6)))));
                            var_16 = (max((arr_2 [i_1]), -35993612646875133));
                            var_17 = (min(((3222 ^ (arr_19 [i_1] [i_1 - 1] [i_6] [i_6] [11]))), (((-1455938879998897651 || (((-8285036309035224234 ? (arr_9 [i_0] [i_0] [4] [i_6] [4] [i_7]) : (arr_13 [i_0] [i_0 - 1] [i_0] [i_1] [5] [i_7] [i_7])))))))));
                            var_18 = (arr_2 [i_6]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
