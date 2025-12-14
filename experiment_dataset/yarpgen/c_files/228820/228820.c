/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min((var_4 % var_18), var_18)), ((((max(var_19, var_13))) ? (var_9 > var_15) : 2))));
    var_21 -= ((var_9 ? var_12 : (((((var_3 ? var_6 : var_15))) ? ((((var_6 + 9223372036854775807) << 2))) : var_17))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_22 = (((((arr_0 [i_0 + 1]) + 2147483647)) << (((var_6 + 9215906765313547803) - 27))));
        var_23 = (!2);
        var_24 = (max(var_24, (((!(((arr_1 [i_0]) && 104)))))));
    }
    #pragma endscop
}
