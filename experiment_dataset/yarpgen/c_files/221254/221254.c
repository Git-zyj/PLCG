/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = ((min((1 - var_12), (var_14 == var_6))) / (((var_0 - ((var_1 ? var_8 : var_5))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (max((arr_1 [i_0]), var_6)) : var_16)) : (min((((arr_1 [i_0]) / 196)), (((var_7 == (arr_0 [6])))))));
        var_20 *= (((244 ? 4144815223 : 127)) - 0);
        var_21 |= ((~(((arr_1 [i_0]) ? 4294967283 : (arr_1 [i_0])))));
        var_22 = (144115188075855871 ? ((min(-99, 65535))) : 67);
    }
    #pragma endscop
}
