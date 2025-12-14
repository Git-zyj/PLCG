/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_12;
    var_18 = 3695562698019248324;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, var_2));
                    arr_12 [i_1] [i_1] [i_0] = 99;
                    var_20 = 11277032406664622651;
                    var_21 = ((-(((arr_1 [i_2 - 2]) / -524113178))));
                }
            }
        }
    }
    var_22 = 1069226610;
    var_23 = var_4;
    #pragma endscop
}
