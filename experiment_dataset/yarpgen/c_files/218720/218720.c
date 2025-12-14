/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_10 *= ((0 ? (-32767 - 1) : 0));
        arr_2 [i_0] [i_0] = (((((arr_0 [0]) ? var_2 : var_0))) >= ((var_4 ? 8827279196812206951 : var_3)));
        var_11 += ((9223372036854775807 ? (arr_0 [i_0]) : (~var_0)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((((9619464876897344665 != var_7) ? var_0 : ((var_7 ? (arr_0 [i_1]) : 127)))))));
        var_13 = (((-1331718645 ? 2147483647 : (arr_3 [i_1]))));
    }
    var_14 = ((var_7 * ((var_9 ? (~12425987840199649613) : var_1))));
    var_15 = var_9;
    var_16 = (min(var_16, var_2));
    #pragma endscop
}
