/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(((min(-1304933502, 31746))), var_6))) ? -1304933506 : (min(((var_10 ? var_7 : var_15)), 58574))));
    var_19 = var_17;
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = 117440512;
        var_22 = (min((!var_7), (((arr_0 [i_0]) != (arr_1 [i_0])))));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    #pragma endscop
}
