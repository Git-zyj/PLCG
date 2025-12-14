/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 = ((((((arr_0 [i_0]) * var_2))) ? ((var_13 ? (arr_1 [i_0]) : var_13)) : 17656055642022872672));
        arr_2 [i_0] = ((var_9 ? 21085 : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((!(((var_1 ? var_11 : (arr_4 [i_1])))))));
        var_16 = 41184;
        var_17 += (((arr_3 [i_1]) ? (!var_7) : (arr_1 [i_1])));
    }
    var_18 = (min(var_18, ((((((-(24352 ^ 44463)))) ? (((!((max(9223372036854775807, 44463)))))) : (((!(var_5 | var_5)))))))));
    #pragma endscop
}
