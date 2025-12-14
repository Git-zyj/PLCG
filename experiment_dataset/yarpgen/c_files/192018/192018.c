/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((!-39) | var_5)))));
    var_19 |= ((((38 ^ (~0))) / ((((var_2 / 61) ^ (192 >= var_0))))));
    var_20 = (min(var_20, (var_7 ^ var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (((((((-1374496566801999391 + 9223372036854775807) >> (((arr_1 [i_1]) - 41137))))) ? 18446744073709551615 : (arr_2 [i_1]))) - (arr_1 [i_0]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = (-121 / 1374496566801999391);
                                var_23 = -12241437049450937489;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
