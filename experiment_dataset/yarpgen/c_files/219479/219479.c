/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_11;
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min((((~(var_10 & 3261888541)))), 1011254696));
        var_20 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] |= ((((arr_1 [i_0]) & (arr_0 [8] [i_0]))) / 188);
        var_21 = (arr_0 [14] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((var_0 ? ((((var_10 > 3213961754) / (((-7273 <= (arr_3 [i_1]))))))) : (((arr_3 [i_1]) ? (arr_3 [i_1]) : 3433993681))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = ((var_13 ? (min((arr_4 [i_1]), ((min((arr_7 [i_1] [i_2]), var_3))))) : (~3177168076)));
            var_22 = var_8;
        }
        arr_10 [i_1] = var_16;
    }
    var_23 |= var_4;
    #pragma endscop
}
