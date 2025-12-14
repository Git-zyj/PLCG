/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(((74366442 ? 29 : var_11)), (((var_8 << (var_11 - 3756284674))))))) ? (((max(var_17, 114)))) : ((~(var_10 & var_11)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = ((-18 > (arr_2 [i_0] [i_0])));
        var_19 = ((-(arr_3 [i_0])));
    }
    #pragma endscop
}
