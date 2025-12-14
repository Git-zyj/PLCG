/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_10 = -5380960294898043454;
                            arr_11 [i_1] [i_1] = (arr_2 [1] [i_0 - 2] [i_1 - 1]);
                        }
                    }
                }
                var_11 ^= (var_4 && var_1);
            }
        }
    }

    for (int i_4 = 4; i_4 < 8;i_4 += 1)
    {
        arr_14 [4] = 5380960294898043442;
        var_12 *= -var_7;
    }
    #pragma endscop
}
