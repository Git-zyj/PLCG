/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_2 [16])));
        var_12 = (((((arr_0 [i_0]) + 2147483647)) << (((var_0 * 127) - 1547622))));
        arr_3 [i_0] = (((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])));
        var_13 &= ((((-(arr_0 [17]))) == (arr_2 [i_0])));
    }
    #pragma endscop
}
