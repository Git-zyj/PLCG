/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = ((var_9 >> (var_4 + 166472042)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((8879 % (arr_0 [i_1 + 1] [i_0])));
                var_14 = var_6;
                var_15 -= 207;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = ((((27 ? 239 : var_10)) > 5914));
                                arr_13 [i_1] [i_3] [i_1] = -815434772;
                            }
                        }
                    }
                    var_17 = (arr_12 [i_2] [i_2] [i_2] [i_2] [i_1 - 1] [i_1] [i_1]);
                    arr_14 [i_1] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
