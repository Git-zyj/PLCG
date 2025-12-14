/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) ? 18446744073709551615 : 10329323417248670351));
        var_21 = (max(var_21, (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = (!var_11);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 = var_10;
        var_23 = (var_12 - (arr_1 [i_1] [i_1]));
    }
    var_24 = ((!(((var_7 ? var_0 : ((var_1 ? 1 : var_12)))))));
    #pragma endscop
}
