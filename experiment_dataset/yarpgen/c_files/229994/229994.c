/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_11 ? (max(var_9, 9178688217244615773)) : (var_3 == var_5)))) ? ((min((min(var_14, 63821749)), var_4))) : (min(112, 16165362836669186525))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = var_16;
        arr_5 [i_0] = ((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : var_8);
    }
    #pragma endscop
}
