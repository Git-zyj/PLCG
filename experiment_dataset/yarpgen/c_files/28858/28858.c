/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = -1233497330945335813;
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = (247 ? 13 : ((((9 ? 1820 : 28513)))));
                                var_13 = (((((25687 ? 1 : 1))) ? 277096812 : ((16 ? 61698 : 576460752303423486))));
                            }
                        }
                    }
                }
                var_14 = (max(var_14, ((((431872644 ? 9 : ((9036516452067349539 ? 15 : 4294967295))))))));
                var_15 = (max(var_15, (((15291119032338085209 ? 2147483647 : ((28 ? 669484839148314966 : 2147483647)))))));
            }
        }
    }
    var_16 = (var_5 ? (((((18446744073709551615 ? 30342 : 94))) ? var_10 : var_7)) : 3837);
    #pragma endscop
}
