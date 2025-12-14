/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_0, (((0 ? 112 : -6)))));
    var_20 = ((-(max(((-106 ? -1241558860 : var_13)), var_18))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 *= ((var_16 - (arr_0 [i_0])));
        var_22 = ((!(arr_0 [i_0])));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_23 = (min(var_23, (((var_10 >> (((arr_1 [i_1 + 2]) - 84)))))));
            var_24 |= ((arr_0 [i_0]) ? 105 : -106);
        }
    }
    var_25 = (min(var_25, (!var_17)));
    var_26 -= (var_12 < var_9);
    #pragma endscop
}
