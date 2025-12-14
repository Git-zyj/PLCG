/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (var_2 == var_6);
    var_12 = ((~(var_6 > var_1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((~var_9) == (-2147483647 - 1))))));
                                var_14 += ((((arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_4 - 1]) ^ (arr_8 [i_1] [i_1] [1] [1]))) | (((-2147483647 - 1) ? (((arr_4 [i_0]) / var_3)) : (arr_10 [8] [8] [i_3] [i_4 - 1]))));
                                var_15 ^= ((0 ? 1 : 1879048192));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((((max(2147483648, (5767947296610756841 * 32299)))) || (((((arr_8 [i_0 + 3] [4] [i_0 + 3] [4]) ? var_0 : var_8))))));
                arr_15 [i_1] = arr_9 [7] [i_0];
                arr_16 [i_0 + 3] [i_0 + 3] = (((((((((arr_1 [11]) ? 9223372036854775807 : var_0))) ? var_1 : (arr_2 [3] [i_0 - 1])))) ? (max((arr_0 [1] [i_1]), var_8)) : (~1)));
            }
        }
    }
    #pragma endscop
}
