/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = arr_1 [i_0];
        var_19 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (-4194304 > 24);
        var_20 = (1 / 31);
        arr_7 [i_1] = (((arr_3 [i_1]) + (arr_3 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((-1 <= (arr_9 [i_2] [i_2])));
        var_21 = (((arr_10 [i_2]) || (arr_10 [i_2])));
        var_22 = (max(var_22, ((((arr_3 [i_2]) ? (~1) : (!1))))));
    }
    var_23 = (var_1 ? var_17 : (((var_2 << (((max(49, -1872432299899571692)) - 48))))));
    var_24 = var_3;
    #pragma endscop
}
