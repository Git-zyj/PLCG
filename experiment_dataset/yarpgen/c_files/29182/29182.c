/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (min(((((2147483647 ? 65530 : var_7)) % var_2)), var_1));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((var_12 ? 34 : (var_6 % 255)));
        var_14 -= (65535 || -4655232757620379713);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                var_15 = (-255 ^ -var_4);
                var_16 = (min(var_16, (((((min(var_11, var_3))) ? (var_1 || var_9) : (((~var_6) - var_0)))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1 + 1] [i_1] [i_1] [19] [i_1 - 1] [i_1] = (-4857980309461925940 ^ 5092186934049112171);
                                var_17 = (max(var_17, (((((-(!18349688458323433765)))) ^ ((var_12 ^ (var_8 ^ var_12)))))));
                                var_18 ^= ((var_10 & (~var_7)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 *= ((min((min(var_12, 2147483647), -var_3))));
    #pragma endscop
}
