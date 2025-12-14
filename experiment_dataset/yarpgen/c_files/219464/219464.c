/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((~(min(((28781 ? var_3 : 135)), 116)))))));
    var_21 ^= ((((min(var_14, var_17)) << ((((var_6 ? 67 : var_7)) - 11)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 |= ((((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 89))))) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0])));
        var_23 += (max((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))), ((min((arr_2 [i_0] [i_0]), (arr_1 [i_0]))))));
    }
    var_24 = (-var_1 ? var_17 : 37114);
    #pragma endscop
}
