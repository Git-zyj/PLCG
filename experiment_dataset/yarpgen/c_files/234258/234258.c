/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min(var_18, 47865));
                var_19 |= (((((((17670 << (65535 - 65523)))))) + var_16));
                arr_6 [i_0 - 3] [15] [i_1] = var_4;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (-65530 ? ((((max(68, 47865))) ? var_15 : 17672)) : (((((min(var_6, 31835)) != 2061584302080)))));
                                var_21 = (min(var_21, (((((53078 ? 511717709 : ((var_7 ? -13906 : var_1)))) * (((((arr_3 [i_0]) <= -25311)))))))));
                                arr_16 [i_0 - 1] [i_0 - 2] [i_1] [19] [i_3] [i_4] [i_4 + 1] = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
