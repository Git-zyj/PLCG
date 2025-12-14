/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (max(var_5, ((((max(-236633149, (arr_2 [i_0] [i_1]))) >= (((((arr_5 [i_0]) && 249)))))))));
                    var_15 = var_2;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_16 = (((4294967290 ? var_7 : var_2)));
                        var_17 = (min(var_17, (!2761646022)));
                        var_18 *= ((!(arr_3 [i_1] [i_2] [i_3 - 2])));
                        var_19 = 65535;
                    }
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = (((max(var_5, (max(var_4, 241))))) ? (((max(44636, var_1)))) : var_3);
    #pragma endscop
}
