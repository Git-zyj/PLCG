/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = ((var_6 * ((((13065303087288954297 > var_1) * (!var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((var_1 ? (((-6935092901290640145 ? 6935092901290640145 : 6935092901290640128))) : var_14));
        var_20 = ((6935092901290640145 ? var_12 : 6935092901290640133));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (!((min(var_15, -6935092901290640134))));
        arr_6 [6] |= (6935092901290640155 - var_16);
        arr_7 [i_1] = (max((6935092901290640128 < var_9), (min(6935092901290640113, var_2))));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (((var_6 & 6935092901290640145) | (~6935092901290640129)));
        arr_11 [15] [i_2] = ((((var_0 ? 6935092901290640145 : var_13)) <= (((6935092901290640128 << (6935092901290640146 - 6935092901290640146))))));
        var_22 = (((max(-6935092901290640145, 6935092901290640144)) % (((var_6 & -6935092901290640126) | (max(var_8, 6935092901290640143))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_23 *= (((-6935092901290640142 + 6935092901290640146) - 6935092901290640145));
                arr_16 [i_3] = ((((var_15 >> (-6935092901290640130 + 6935092901290640149))) << var_5));
            }
        }
    }
    #pragma endscop
}
