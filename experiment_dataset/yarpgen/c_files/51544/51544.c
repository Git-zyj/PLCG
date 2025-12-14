/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (~-740548031);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = 134217728;
                                arr_15 [i_1] [4] [i_3] [i_4] = -1;
                                arr_16 [i_0] [i_0] [i_0] [i_2] [5] [i_3] [i_4] = 17;
                                arr_17 [i_0] [i_1 - 1] [i_0] [2] [i_4] = ((min(2, 804211017)));
                            }
                        }
                    }
                    var_17 = (!56);
                }
            }
        }
    }
    var_18 = (!562949945032704);
    var_19 |= -30822;
    #pragma endscop
}
