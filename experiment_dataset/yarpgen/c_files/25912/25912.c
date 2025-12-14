/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 ^= (max((var_7 | var_7), var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (~6702347505480121251);
                arr_6 [i_0] [i_1] = (max(-295171520, -1279235208));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 *= (min((min(var_5, (var_5 | var_4))), 18446744073709551615));
                                var_14 |= (min(1, (arr_4 [i_4] [i_1 - 3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
