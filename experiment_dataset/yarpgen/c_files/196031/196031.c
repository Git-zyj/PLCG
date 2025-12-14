/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (min((max(((var_0 ? var_9 : var_2)), ((603760827 ? 1 : var_4)))), var_4));
    var_12 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_13 = (4038308388 ? (arr_2 [i_0]) : (((arr_0 [i_0]) ? var_6 : var_2)));
        var_14 = (max(var_14, (4032 || 4194303)));
        var_15 = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_16 = (min((arr_6 [i_1] [i_1]), (arr_5 [i_1])));
        var_17 = var_1;
    }
    #pragma endscop
}
