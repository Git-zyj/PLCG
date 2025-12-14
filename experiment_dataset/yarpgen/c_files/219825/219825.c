/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_11 ^ var_9);
    var_15 |= (((~(var_10 % var_5))));
    var_16 = (min(72, var_11));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 += 1;
        arr_3 [5] [i_0] = ((var_7 < (max(((var_13 ? (arr_1 [i_0] [1]) : (arr_1 [i_0] [6]))), var_1))));
        var_18 = (((arr_1 [i_0] [i_0]) ? var_0 : (((72 && (arr_0 [i_0]))))));
    }
    var_19 = (-9223372036854775807 - 1);
    #pragma endscop
}
