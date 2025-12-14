/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_3 * var_11) >> (var_12 - 41725)))) ? var_4 : (((((65535 ? 0 : var_6)) >= var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (((((var_3 ? (((arr_5 [i_0] [i_1] [4]) & 4)) : var_3))) ? ((32370 ? 1 : 32363)) : (var_5 != 32370)));
                    arr_6 [i_0] [i_0 + 3] |= (((var_11 && var_4) & ((var_5 ? ((7 | (arr_5 [i_0] [i_1] [3]))) : (((arr_1 [13] [i_1 + 1]) ? var_10 : var_4))))));
                    var_16 = (((((arr_5 [i_0 + 1] [i_1 + 1] [i_1 - 3]) ? 57161 : (arr_5 [i_0 + 1] [i_1 + 1] [i_1 - 1]))) ^ (((13226 || (arr_4 [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = ((((((18178 ? 13226 : 65533)) * (arr_4 [i_0 - 1]))) > (((arr_7 [i_1 - 1] [i_3] [i_1 + 3] [i_1 + 3]) ? (arr_7 [i_1 - 2] [i_3] [i_1 + 3] [i_1 + 1]) : var_4))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [15] = ((1023 ? 24445 : 9430));
                            }
                        }
                    }
                    arr_14 [i_0 - 1] [i_0] [i_0] [i_0] = (((((28602 ? (arr_11 [i_0] [i_1] [0] [i_2 + 1] [i_2]) : var_8))) || (((14935 ? 256 : 1252)))));
                }
            }
        }
    }
    #pragma endscop
}
