/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] = var_12;
                                var_16 = (min(var_16, (((var_10 & var_12) != -2676026271296093648))));
                                var_17 = -2676026271296093646;
                                var_18 = (max(var_18, var_8));
                                var_19 = var_4;
                            }
                        }
                    }
                    var_20 = (min(var_20, (((21547 ? -597196047881882187 : 1)))));
                    arr_13 [i_0 + 2] [i_0 + 2] = 9223372036854775787;
                    arr_14 [i_2] = var_6;
                }
            }
        }
    }
    var_21 -= ((var_13 != -5575303824211257015) - (min(var_1, var_10)));
    var_22 ^= -2676026271296093633;
    #pragma endscop
}
