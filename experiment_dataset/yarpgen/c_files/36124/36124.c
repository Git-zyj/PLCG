/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = var_15;
                var_20 = (min(var_20, (min(((38813 ? var_9 : -1)), ((var_18 ? var_16 : 34359214080))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 = ((((max(var_15, var_8))) ? (((((1894017327 ? 0 : 1))) ? ((var_8 ? var_7 : 12489726321123299657)) : (((4294907816841428560 ? 1 : var_17))))) : (((-34359214080 | ((min(var_1, var_15))))))));
                            arr_12 [i_1] [i_1] = var_3;
                            var_22 = (max(var_22, (((((((0 ? var_14 : var_18)))) * ((117 ? var_0 : -80352808)))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (((-96 ? 34359214080 : var_15)));
    var_24 = (((var_4 ? (max(var_12, 34359214080)) : var_16)));
    var_25 = ((((min(((var_1 ? var_2 : 1)), -21135))) ? ((var_8 ? ((1266040299648171980 ? 1 : var_11)) : var_6)) : (((((65 ? 1 : var_15)) << ((((min(45627, 256))) - 253)))))));
    #pragma endscop
}
