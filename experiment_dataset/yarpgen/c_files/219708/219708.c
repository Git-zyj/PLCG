/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = ((((((((var_1 ? var_10 : (arr_2 [i_0])))) ? -4173591657208657503 : (((var_6 ? var_1 : var_5)))))) ? (!var_8) : 18387));
                    arr_8 [i_0] = 6784095461325743093;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (max((((var_10 ? ((var_5 ? var_2 : var_10)) : (arr_5 [i_4] [i_0] [i_0] [i_1])))), (min(((((arr_9 [i_0] [8] [i_2] [i_0]) ? (arr_5 [i_0] [i_1] [i_0] [i_4]) : var_10))), (((-9223372036854775807 - 1) ? (arr_5 [4] [7] [i_0] [i_3]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_15 [i_0] [i_1] [i_0] = var_1;
                                var_14 += (min(((~(~var_3))), (min(((~(arr_6 [i_1] [8] [8] [i_3]))), (arr_10 [i_0] [4] [i_2] [i_4])))));
                                var_15 -= (max((min((arr_3 [i_0] [10] [i_0]), (min((arr_12 [i_4] [i_4] [i_4] [7] [i_4] [i_4] [0]), var_6)))), (((arr_6 [i_1] [i_1] [6] [i_3 + 1]) ? (arr_6 [i_1] [i_1] [i_2] [i_3 + 1]) : 9223372036854775807))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] &= arr_6 [i_1] [i_1] [i_1 + 4] [i_0];
                    arr_17 [i_0] [i_1 + 1] [i_0] = (max((arr_6 [i_0] [i_0] [i_1] [i_1 + 3]), (arr_6 [i_0] [i_1] [i_2] [i_1 + 3])));
                }
            }
        }
    }
    #pragma endscop
}
