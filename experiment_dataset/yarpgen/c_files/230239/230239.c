/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_12 + var_9);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max((7573694238674610387 && var_5), ((((((arr_1 [i_0]) / (arr_1 [i_0])))) + -7573694238674610364))));
        var_18 = (arr_2 [i_0]);
        var_19 = ((56 ? ((var_0 ? (arr_1 [22]) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : 32754)))) : (min(443256774, (var_2 && 32766)))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_20 = ((var_15 ? ((-(arr_4 [i_1 + 1] [i_1 + 2]))) : ((((arr_3 [i_1 + 2]) ^ 62)))));
        var_21 = (min(var_21, (!-76)));
        var_22 = (min(var_22, (arr_2 [12])));
    }
    var_23 |= var_7;
    var_24 = ((var_12 ? (((65 && ((max(56, 21239)))))) : ((1008 + ((60 ? 1683701592 : 62))))));
    var_25 -= -5294;
    #pragma endscop
}
