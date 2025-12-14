/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_12 ? (-32767 - 1) : (min(-96, (min(245, -5261229479072569520))))));
    var_18 = ((((6514278764278358989 == (var_5 / 1))) ? (var_5 & 122101597214277564) : -var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((var_5 ? 93 : var_4));
        var_20 = (((arr_0 [i_0] [i_0]) ? 0 : var_11));
        arr_4 [i_0] [i_0] = ((-21975 ? -1462293860 : ((~(arr_1 [4] [i_0])))));
    }
    #pragma endscop
}
