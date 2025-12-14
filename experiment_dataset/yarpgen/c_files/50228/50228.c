/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((9223372036854775807 / 9223372036854775807) + ((var_12 ? 5749644548365038615 : var_18))))) ? ((((min(-5749644548365038615, 406250302222424388))) ? (min(var_8, var_19)) : var_4)) : var_11);

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_21 = ((!(min((var_4 && var_16), (!9223372036854775807)))));
        arr_2 [i_0] [i_0] = min(var_7, 4712758879061610651);
        arr_3 [i_0] [i_0] = (((min((arr_1 [i_0]), (1447159573150916956 >= -6426141907489087641)))) ? (((((arr_1 [i_0 + 3]) ? var_18 : (arr_0 [i_0]))) | (9223372036854775789 && -9223372036854775790))) : ((+(max((arr_0 [i_0]), 9223372036854775786)))));
    }
    var_22 = var_3;
    var_23 = max(9223372036854775807, 7939011947749444340);
    #pragma endscop
}
