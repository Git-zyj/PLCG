/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 *= 64;
                                var_12 += (~2819089633);
                            }
                        }
                    }
                    var_13 *= ((~(((arr_11 [i_2 - 1] [i_2 + 2] [i_2 - 2] [6] [i_2] [i_2] [i_2 - 1]) ? (arr_6 [i_2 - 1] [i_2] [i_2 - 2]) : (arr_11 [i_2 - 1] [2] [i_2 - 2] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2 - 1])))));
                }
            }
        }
    }
    var_14 = (348552747 / -10);
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_16 = (((80 ? 5 : (-2147483647 - 1))));
                    var_17 *= ((min(64321, ((192 ? 1 : 1)))));
                }
            }
        }
    }
    #pragma endscop
}
