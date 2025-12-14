/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((var_5 ? var_10 : 0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = (((((255 ? 82 : 253))) ? (((-(arr_5 [i_2 - 1] [i_0 - 1])))) : 0));
                                arr_12 [i_4] [i_3] [i_1] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] = -118;
                            }
                        }
                    }
                }
                var_19 = ((max(var_13, (arr_11 [i_0 - 2]))));
            }
        }
    }
    #pragma endscop
}
