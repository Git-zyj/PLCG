/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_2] [i_0] [i_1] = 1;
                            var_13 *= (((~-1) ? ((1 ? -9223372036854775790 : (arr_0 [i_0 + 1]))) : (((((arr_4 [i_2] [i_0 + 1]) != 96))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_14 = (min(var_14, (arr_2 [i_0] [i_4])));
                    var_15 = (max((arr_5 [i_0 + 1] [i_1] [i_1]), (((48 | 32756) ? (~6369) : var_6))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            {
                var_16 = ((~(arr_12 [i_5])));
                var_17 = (((((-1 ? -32752 : ((1 ^ (-2147483647 - 1)))))) ? (~1) : var_2));
                var_18 = max(122, -26007);
            }
        }
    }
    #pragma endscop
}
