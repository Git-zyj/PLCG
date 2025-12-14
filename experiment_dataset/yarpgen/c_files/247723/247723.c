/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_20 *= ((8 ? 77216119 : 105));
        var_21 = ((~(var_7 | var_14)));
        var_22 -= (((((arr_0 [10]) ? var_19 : (max(var_4, var_13))))) ? ((237 ? 2853136408127161327 : (((max(16384, 0)))))) : (arr_0 [0]));
        var_23 = (max(var_23, ((((((((112 ? var_11 : var_16)) >> (((arr_1 [i_0] [12]) + 1798445601835402575))))) ? ((-var_6 - ((var_2 ? 2752116899236294034 : var_7)))) : var_14)))));
    }
    var_24 += var_18;
    #pragma endscop
}
