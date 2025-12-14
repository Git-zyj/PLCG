/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = max(((~(arr_0 [i_0]))), ((min((arr_0 [i_0]), 24700))));
        var_12 *= ((!(((var_7 ? (var_10 * var_10) : 26002)))));
    }
    var_13 = (min(var_0, var_2));
    var_14 = ((((((((var_9 ? var_0 : -26002))) ? (var_2 == -26003) : (var_2 || var_6)))) + (min((128 ^ var_3), var_3))));
    var_15 |= var_4;
    var_16 = ((min((max(12060, var_7)), -32326)));
    #pragma endscop
}
