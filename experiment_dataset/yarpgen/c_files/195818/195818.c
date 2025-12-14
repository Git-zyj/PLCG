/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = ((((max((arr_1 [i_0]), ((124 ? (arr_2 [i_0]) : (arr_2 [i_0])))))) ? (arr_1 [i_0]) : ((((1950229908 ? 1333730306 : 18446744073709551615))))));
        arr_3 [i_0] &= ((~((~(arr_2 [i_0])))));
        var_15 |= (min(-20458, ((+(((arr_0 [1]) ? (arr_1 [i_0]) : 1))))));
        var_16 *= (arr_0 [i_0]);
    }
    var_17 = (((76 ? var_10 : (min(var_11, 19)))));
    var_18 = var_4;
    #pragma endscop
}
