/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = ((546191233 ? 62 : (min(2449884856, 11723))));
        var_16 ^= -67;
        var_17 = (max((arr_2 [i_0] [i_0]), (1 + 5)));
    }
    var_18 = ((((((var_12 ? var_3 : var_2)) - (var_14 % var_7))) | ((((!(0 && var_12)))))));
    var_19 = ((var_12 ? 2793514988 : 11723));
    #pragma endscop
}
