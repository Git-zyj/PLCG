/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min(8465016550793307845, ((min(1139543626, 188231436))))))));
                var_15 = (max(var_15, ((min(1, var_10)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 = 16;

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_17 = ((-1 > ((1 ? 1139543626 : ((3 ? 0 : 255))))));
                                var_18 = (min(var_0, 1));
                            }
                            var_19 = (((1139543610 >> (((min(-1139543610, 255) + 1139543621))))));
                            arr_12 [i_0 - 3] [i_1] [i_2] [i_3] = (min(((max(1, (min(575454971, 1023))))), ((var_12 << ((((2047 ? var_3 : var_9)) + 4076060795003962177))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
