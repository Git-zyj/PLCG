/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(((((var_5 ? var_4 : var_3))) ? var_3 : (var_0 || var_13)))));
    var_16 = (((max(((var_2 ? var_0 : var_0)), ((var_6 ? var_11 : var_3)))) & (var_0 + var_14)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(var_17, 1104487216));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] = (max(((var_9 ? (arr_8 [i_3 - 2] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_4 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3]))), (!1962762563)));
                                var_18 = (arr_5 [i_0 - 2] [i_0 - 2] [i_2 + 1]);
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (((~(((~var_9) ? (arr_1 [i_0]) : var_3)))))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((((arr_4 [i_0] [i_0 + 2] [i_0 + 2] [i_5 + 1]) * (arr_4 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_5 + 1])))) ? (arr_4 [i_0 - 3] [i_0 + 2] [i_0 - 1] [i_5 + 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_5 - 1]))))));
                                var_21 = (max((((arr_18 [i_7] [i_6] [i_0 + 2] [i_0 + 2] [i_0 + 2]) & (((var_11 ? var_6 : (arr_4 [i_0] [i_5] [i_1] [i_0])))))), (!19129)));
                                arr_20 [i_0 - 2] [i_0 - 2] [i_7] [i_0 - 2] = var_4;
                                var_22 = ((~(((arr_18 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]) % (arr_19 [i_7 + 4] [i_6] [i_0] [i_1] [i_0])))));
                                var_23 ^= (~(((((arr_13 [i_1 + 3] [i_5 - 1] [i_1 + 3]) != var_14)) ? (arr_2 [i_0]) : var_3)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (~-var_5)));
    #pragma endscop
}
