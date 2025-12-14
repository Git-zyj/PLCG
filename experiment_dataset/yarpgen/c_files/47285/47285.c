/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = (max((arr_4 [i_3]), var_17));
                            arr_9 [i_0] = -73;
                            var_19 = ((52844 ? 6951100078451809900 : -80));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = 52844;
                            arr_11 [6] [i_3] [i_2] [i_3] [i_3] [i_0] |= (!73);
                        }
                    }
                }
                var_20 = -7288923150477991632;
            }
        }
    }
    var_21 = (!var_6);
    var_22 = ((!(((((max(-5, var_0))) ? var_17 : var_6)))));
    var_23 *= (((8912940058124925337 >> (var_6 + 1926387451))));
    #pragma endscop
}
