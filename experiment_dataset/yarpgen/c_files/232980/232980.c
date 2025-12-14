/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min(var_17, var_16));
    var_21 = var_19;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_22 = -var_4;
        var_23 = (min((var_18 >= var_5), (((29296 + 2804) || (1196856770 / -1889442996)))));
        var_24 = (min(((max((min((arr_0 [i_0] [1]), var_17)), 242))), ((32767 ? ((var_7 ? -25085 : 25538)) : (var_8 && var_16)))));
        var_25 = ((0 ? (arr_0 [i_0 - 1] [i_0 + 2]) : ((min((arr_0 [i_0 + 4] [i_0 + 3]), 236)))));
        var_26 = (max((~var_10), (((((var_15 / (arr_0 [i_0 + 3] [i_0])))) ? (min((arr_1 [i_0]), 1889443009)) : var_6))));
    }
    #pragma endscop
}
