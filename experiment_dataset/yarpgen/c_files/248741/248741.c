/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 ^= ((1415769848282322552 ? (arr_2 [i_0]) : var_14));
        arr_3 [i_0] = (-19918 ? (-32767 ^ var_9) : ((((arr_0 [i_0]) ? var_0 : 1))));
        var_20 = (min(var_20, var_17));
    }
    var_21 = max(((var_11 ? (min(var_1, 7)) : (var_0 && var_4))), ((max((max(1, 2710352872)), (!var_6)))));
    var_22 ^= ((18446744073709551603 ? (((((max(154634795, var_17))) ? 100 : var_8))) : (max(var_1, -126))));
    #pragma endscop
}
