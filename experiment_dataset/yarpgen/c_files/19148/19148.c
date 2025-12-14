/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_13 <= ((min(var_9, var_6))))) ? (var_12 / var_0) : (((((var_10 ? -61 : var_19))) ? (~var_13) : ((max(var_1, var_0)))))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_21 = (-32 > 89);
        var_22 ^= (max(var_18, (max((arr_0 [8]), var_11))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_23 = ((((var_19 / (arr_2 [i_1 + 4] [1]))) * ((var_10 & (arr_2 [i_1 + 1] [i_1])))));
        var_24 = var_0;
        var_25 |= (min(((min((arr_1 [2] [2]), var_11))), ((~(arr_0 [14])))));
    }
    var_26 = (((var_19 != var_1) ? var_2 : (var_17 * 79)));
    var_27 = var_12;
    #pragma endscop
}
