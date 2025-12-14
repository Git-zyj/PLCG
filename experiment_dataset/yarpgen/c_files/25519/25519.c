/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (((((96 ? (arr_3 [i_1] [i_0] [i_2 - 1]) : (arr_3 [i_1 + 1] [i_0] [i_2 + 1])))) ? -1 : (arr_3 [i_0] [i_0] [i_2 + 1])));
                                var_13 = (((max((((!(arr_9 [0]))), 82)))));
                            }
                        }
                    }
                }
                arr_13 [8] [i_0] [i_1] = 1;
            }
        }
    }
    #pragma endscop
}
