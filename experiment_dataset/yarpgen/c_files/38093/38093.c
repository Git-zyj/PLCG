/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (!var_2);
    var_15 = (min(var_15, ((((((min(var_6, var_3)))) << (((var_10 && 4294967268) ? var_12 : ((max(var_8, var_10))))))))));
    var_16 = ((var_9 ? (((max((max(var_3, 1)), 1)))) : var_7));
    var_17 |= var_8;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_18 = ((min(((max(var_6, (arr_1 [i_0]))), ((var_0 ? -1 : var_10))))));
        var_19 = (min((arr_0 [i_0]), ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_2))) ? var_9 : (arr_2 [i_0 + 1] [i_0 + 1])))));
    }
    #pragma endscop
}
