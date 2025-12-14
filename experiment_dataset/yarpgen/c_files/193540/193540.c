/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(1, ((((min(7576818792841587065, var_4))) ? 1 : -var_10))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 -= ((-16 ? ((((arr_0 [14]) <= var_6))) : (((var_8 || (arr_0 [0]))))));
        var_13 &= arr_1 [0];
        var_14 = (min(var_14, 16172));
        var_15 = (((!(arr_0 [i_0]))));
        var_16 = ((var_7 ? (arr_0 [i_0]) : (~var_8)));
    }
    #pragma endscop
}
