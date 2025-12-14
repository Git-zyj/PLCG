/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((((~(arr_1 [i_1 - 1] [i_1 - 1])))) ? 18446744073709551593 : 116119173310461765)))));
                var_14 = (arr_2 [i_1 + 1] [i_1 + 1] [i_1]);
                var_15 = 18446744073709551593;
            }
        }
    }
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [6] [i_2] [i_5] [i_5] |= min((arr_14 [i_4] [i_4 - 1] [i_4] [i_4 - 2]), (min((arr_13 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 2]), (arr_14 [i_4] [i_4] [i_4] [i_4 + 1]))));
                                arr_19 [i_2] = 2199181897209816007;
                                var_17 = (min(var_17, (arr_12 [i_6] [i_3] [i_3])));
                            }
                        }
                    }
                    var_18 = (min((arr_9 [i_2]), 16247562176499735597));
                    var_19 = (arr_8 [i_2] [i_2]);
                }
            }
        }
    }
    var_20 = var_11;
    var_21 = 9223372036854775807;
    #pragma endscop
}
