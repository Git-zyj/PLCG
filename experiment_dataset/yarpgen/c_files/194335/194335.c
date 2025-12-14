/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 18446744073709551615;
    var_12 = (min(var_12, 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 ^= ((0 ? ((((arr_1 [i_0]) ? 43334 : 119))) : ((62401 ? 7276852253912699683 : 0))));
        arr_3 [12] [12] = (((arr_0 [i_0]) ? ((255 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (((arr_2 [i_0] [i_0]) << (((arr_1 [i_0]) + 31))))));
        var_14 = (max(var_14, ((((arr_2 [i_0] [20]) ? (arr_2 [i_0] [i_0]) : -49)))));
        var_15 ^= ((~(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))));
        var_16 = ((698063376 ? -4642938231208905100 : 10056357983296094777));
    }
    #pragma endscop
}
