/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 66));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_20 |= 536870911;
                            arr_10 [i_1 + 4] [i_1 + 4] &= 3043081735;

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] = 4124299338;
                                arr_14 [i_0] = -28701;
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_21 &= 6841;
                                arr_17 [i_2] [i_1 - 1] [1] [i_3] [i_5] [i_5] = var_17;
                                var_22 += 170667961;
                                var_23 = ((10453068739364351904 ? var_15 : ((2189553043 ? var_5 : 4124299338))));
                            }
                            var_24 = 18446744073709551614;
                            arr_18 [i_3] [i_1] [i_2] [i_2] [i_1] [i_0] |= 18446744073709551596;
                        }
                    }
                }
                var_25 -= ((3272397829 ? ((2161657395 ? 1 : 536870911)) : (((0 ? ((2953626550171989070 ? 34554 : 65535)) : 26156)))));
                var_26 = var_1;
            }
        }
    }
    #pragma endscop
}
