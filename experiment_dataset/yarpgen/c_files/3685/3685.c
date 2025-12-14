/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 ^= 9223372036854775780;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 = (((arr_7 [i_3] [i_2] [i_1] [20]) > (~41247)));
                            var_23 = ((((((arr_7 [i_0] [i_0] [i_0] [i_0 + 1]) < (arr_10 [8] [i_0] [i_0] [i_0 + 1])))) ^ ((var_6 ? (arr_10 [i_0] [i_0] [20] [i_0 + 1]) : var_12))));
                            var_24 = (max(-765658353, 6416681189191753703));
                            arr_13 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0] |= (((~(arr_0 [i_0 + 2] [i_0 + 1]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_25 = var_8;
                            arr_19 [i_0] [i_5] [i_5] = ((~(arr_10 [i_0 + 1] [23] [i_5 - 2] [i_4 + 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_26 [4] [4] [i_6] [i_1] [i_0] |= ((((max((arr_21 [i_7 - 1]), (arr_11 [i_0] [17] [i_0 + 1] [i_0 - 1])))) ? 116 : (((arr_11 [i_7] [i_6] [i_1] [18]) ? (arr_11 [15] [i_6] [19] [i_0 + 1]) : var_10))));
                            var_26 = ((((max(var_17, (arr_12 [i_7 + 2] [i_0 - 1])))) ? (arr_0 [i_1] [i_0]) : (arr_14 [i_7] [i_1] [i_0])));
                            var_27 = (max(var_27, (((~((var_6 >> (((~var_13) + 4)))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
