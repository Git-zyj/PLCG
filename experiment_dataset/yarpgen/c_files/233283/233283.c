/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-var_15 - ((((((-26745 ? var_6 : var_9)) <= 2993673748))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((((var_5 ^ -14146) >= (((max(101, 1))))))) <= -126));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = ((((var_9 ? 63 : 112))));
                            var_21 = (min(var_21, 14370716241124724982));
                        }
                    }
                }
            }
        }
    }
    var_22 *= var_3;
    var_23 = (max(((62 ? (var_13 * var_15) : (((-126 ? 3165847154 : 37734))))), (((-((min(var_16, 9))))))));
    var_24 = (min(var_16, (((var_14 >= (max(var_6, 37747)))))));
    #pragma endscop
}
