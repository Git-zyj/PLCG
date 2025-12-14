/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((-869521615 * ((1964 * (var_1 & var_0))))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 = (arr_1 [i_0]);
        var_18 = ((arr_0 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : (((arr_0 [i_0 - 1]) * (-3734468740020771197 / 18446744073709551609))));
    }
    #pragma endscop
}
