/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_4;
    var_18 = var_2;
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [15] [i_0] = (~var_6);
                    var_20 = var_1;
                    var_21 = (!4980);
                }
            }
        }
        arr_7 [6] [6] &= var_16;
        var_22 *= (((~(var_0 & var_4))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        arr_10 [i_3] = ((1 << (40494 - 40492)));
        arr_11 [i_3 + 3] &= -var_8;
        var_23 = (((var_13 + 2147483647) >> var_10));
        var_24 = var_16;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_25 = (~var_16);
        var_26 = (max(var_26, (var_6 - -var_8)));
        var_27 = ((var_16 == (var_8 + var_12)));
    }
    #pragma endscop
}
