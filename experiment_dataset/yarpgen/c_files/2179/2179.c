/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (3 < 131);
                arr_5 [i_1] [i_0] = ((((((arr_0 [i_0] [i_1]) + ((max(48124, var_2)))))) ? var_8 : ((-(arr_1 [i_0])))));
            }
        }
    }
    var_14 = (min((min(var_6, var_2)), -6097171206347674822));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_15 = ((((((var_3 | var_7) ^ ((767924003 & (arr_7 [i_2] [i_3 + 2])))))) & ((~(((arr_10 [i_2] [i_2] [i_2]) | 13686343114812649491))))));
                            var_16 = ((((arr_14 [i_5 + 1] [i_4] [i_4] [i_2]) & (arr_14 [i_2] [i_3] [i_4] [i_5]))));
                            var_17 &= (((arr_14 [i_2 + 1] [i_3 + 1] [i_3] [i_4]) ? ((((((arr_14 [i_2] [i_4] [i_3] [i_3]) + (arr_17 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2])))) ? (min((arr_9 [i_4 + 2]), 13686343114812649491)) : ((((arr_8 [i_4] [i_3]) / (arr_10 [i_5] [i_4] [i_3])))))) : (((min(var_4, 11858636518607680312)) * (((((arr_9 [i_2]) == (arr_17 [i_2 - 1] [i_2 - 1] [i_3 + 4] [i_4] [i_5] [0])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_18 = (min((((((((arr_23 [i_2] [i_7] [i_2] [i_2]) ? 14811157151751886316 : var_2))) && ((min(var_2, 153990164)))))), (((arr_10 [i_2 - 1] [i_6 - 1] [i_7 - 2]) ? (arr_10 [i_2 + 2] [i_6 - 2] [i_7 - 2]) : (arr_10 [i_2 - 1] [i_6 + 1] [i_7 - 2])))));
                            var_19 = ((!(((~(~var_5))))));
                            arr_25 [i_2] [i_3] &= (((((var_2 / ((var_0 / (arr_7 [i_6 - 2] [i_7])))))) * ((var_5 ? (arr_14 [i_2 + 1] [i_2 - 1] [i_6] [i_2 + 2]) : -1))));
                            var_20 = (((((-(arr_12 [i_7 + 1] [i_2 + 1])))) ? ((((arr_12 [i_2 - 1] [i_6 - 2]) & (arr_12 [i_3 + 1] [i_3 + 1])))) : (~var_7)));
                        }
                    }
                }
                var_21 ^= 4760400958896902124;
            }
        }
    }
    #pragma endscop
}
