/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((min(2192314458, 7593365559521893141)))) ? (arr_1 [i_0 - 1] [i_0]) : (((7593365559521893148 & var_4) + ((var_10 ? 0 : 1))))));
        var_17 = ((((((var_15 ? -1 : (arr_1 [i_0 - 1] [i_0 - 1]))))) || (((0 - (1 - 3504679861))))));
        var_18 = 0;
        var_19 = (((((((var_4 ? var_6 : (-127 - 1)))) ? var_13 : (arr_0 [i_0]))) << ((min((1 <= var_3), (((arr_0 [2]) < 0)))))));
    }
    var_20 = ((var_13 / ((((min(var_5, -367725066023369295))) ? var_11 : (-96 / 4024462912)))));
    var_21 = (((((var_2 >> (var_16 - 6231497474953069455))) & (var_5 & -388824471))) << ((((((min(-154135617, var_0))) ? var_4 : var_10)) - 2823294577)));
    #pragma endscop
}
