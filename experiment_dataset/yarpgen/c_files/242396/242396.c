/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 ^= ((((9223370937343148032 ? (arr_3 [i_0] [16] [19]) : ((9223370937343148039 * (arr_2 [15] [i_2 - 1] [i_3]))))) / 1235196223));
                                var_15 = var_12;
                                var_16 = (arr_9 [0] [i_1] [i_2 - 1] [i_2] [i_4]);
                            }
                        }
                    }
                    var_17 = ((!((min(-32760, (arr_5 [i_0] [i_1] [i_1] [i_2]))))));
                    var_18 *= (((((arr_2 [i_0] [i_1] [i_2]) ? (arr_2 [i_0] [2] [i_2 + 1]) : (arr_3 [i_2] [i_0] [i_0]))) < (arr_3 [i_0] [i_1] [i_2 + 1])));
                }
            }
        }
    }
    var_19 &= var_3;
    var_20 = var_11;
    #pragma endscop
}
