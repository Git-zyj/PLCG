/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 4095;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = max((max((arr_6 [i_0 + 1]), 65535)), 480);
                    var_16 = 11474;
                }
            }
        }
    }
    var_17 = min(((min(var_7, var_4))), (min(var_3, 55329)));
    #pragma endscop
}
