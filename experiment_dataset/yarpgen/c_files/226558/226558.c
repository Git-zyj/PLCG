/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_19 = (-1941621204104699566 ? (max(var_12, (max((arr_0 [4]), var_18)))) : (arr_0 [i_0]));
        var_20 = ((-1941621204104699566 ? (((arr_0 [i_0 - 2]) / 7304498155591846823)) : (arr_1 [i_0 - 1] [i_0])));
    }
    var_21 = ((var_9 >= var_6) ? var_3 : var_5);
    #pragma endscop
}
