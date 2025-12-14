/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((((((min(var_16, var_1))) && var_14)) ? ((~(max(9223372036854775804, 9223372036854775801)))) : ((var_11 ? (max(9223372036854775804, var_15)) : (((var_7 ? var_13 : 127)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_5 >> (((((min(184429411927094742, var_8)))) - 206))));
                            var_21 = 65535;
                            var_22 = (min(var_22, 220));
                        }
                    }
                }
                var_23 = 28959;
            }
        }
    }
    #pragma endscop
}
