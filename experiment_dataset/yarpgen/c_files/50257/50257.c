/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((((min((arr_1 [i_0]), (arr_1 [i_0])))) << (arr_0 [i_0])));
        var_16 *= (((arr_1 [i_0]) ? (((arr_1 [3]) ? ((8778913153024 ? 9107182983232764784 : (-9223372036854775807 - 1))) : (!var_11))) : var_1));
        arr_2 [i_0] = ((8778913153024 | 9223372036854775805) ^ 9107182983232764784);
        arr_3 [i_0] [1] = ((+(min((arr_1 [i_0]), var_0))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_17 = ((-(((-8778913153025 + -3444950528363007208) * (-8 != 1)))));
                        var_18 = (min(-28492, var_9));
                        var_19 = ((((((arr_7 [3] [i_2] [i_1] [i_0]) ? 1610612736 : 65535))) ? var_6 : (~var_14)));
                        var_20 = (1 - 0);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            {
                arr_15 [i_5] [i_4] [i_4 - 1] = -var_10;
                arr_16 [i_4] [i_4] [i_4] = 28495;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_21 = (min(-32756, 18446744073709551615));
                            var_22 = ((-30007 ? (((-30028 ? 81 : 1))) : ((4391384047418905671 | (arr_12 [i_4])))));
                            var_23 = (-6559 / -3444950528363007216);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
