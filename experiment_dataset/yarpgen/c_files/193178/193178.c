/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (min(var_13, ((max(var_1, ((+(min((arr_2 [i_0] [i_0]), var_0)))))))));
        var_14 -= ((((min(((var_8 ? (arr_0 [i_0] [i_0]) : var_1)), 2149364423))) ? (((((~1962236087) != (~-84))))) : ((1 ? ((var_0 ? var_2 : var_7)) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 18361687064608813822))))));
    }
    #pragma endscop
}
