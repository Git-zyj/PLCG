/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 ^= (~((14111 ? -84 : 14864)));
        var_11 = ((328 ? (((!(((1069239176 ? -31846 : 14111)))))) : ((1 ? ((min(-24320, -15261))) : -1069239176))));
        var_12 = (((-1 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))));
        var_13 = (max(var_13, (((!((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : var_8))))))));
    }
    var_14 = (min(var_14, (((-(((((18446744073709551615 ? 328 : 57725224))) ? -6256002067411678853 : -0)))))));
    var_15 = var_9;
    #pragma endscop
}
