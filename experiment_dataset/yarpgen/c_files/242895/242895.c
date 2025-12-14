/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((0 << (var_14 - 45))))));
    var_16 += ((min(var_10, (!86))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 ^= ((((10540434365108766547 ? 1291478325426328108 : 64)) > (5972712483976201122 % 8756772366368413920)));
        var_18 &= ((-((var_7 >> (((arr_0 [i_0]) - 9377))))));
        var_19 = (max(var_19, ((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))));
        var_20 = (max(var_20, 10));
    }
    #pragma endscop
}
