/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = (max(((((!var_12) ? var_8 : -56))), var_16));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = ((var_4 | ((var_4 ? var_3 : var_10))));
        var_20 = (arr_2 [i_0]);
        arr_3 [8] [8] = (((arr_2 [i_0]) ? ((1 << (var_0 - 45787))) : var_9));
        arr_4 [i_0] = (((arr_2 [i_0]) ? (((var_7 >= (arr_1 [i_0])))) : (114 * var_2)));
        var_21 = 1;
    }
    var_22 = (max(var_22, var_13));
    #pragma endscop
}
