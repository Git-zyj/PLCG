/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (5776526969799865700 != 0);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 ^= (~(((arr_7 [i_2 - 1] [i_1] [i_0]) + -1102680378)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_0] [i_0] [1] = ((((max((arr_9 [i_3] [i_3 - 1] [i_3]), (arr_9 [i_4] [i_3 + 3] [i_2 - 2])))) <= 174));
                                var_12 = (min((arr_9 [1] [i_3] [i_0 + 2]), (min(1, -5941212360584732784))));
                            }
                        }
                    }
                    var_13 ^= (min(((min((arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 2]), (arr_5 [i_0 - 2] [i_0 - 2] [i_0 + 1])))), (((arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 2]) + (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
