/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_10 = ((15 ? var_7 : var_6));
        var_11 &= ((~(arr_1 [i_0] [i_0])));
        var_12 = (57428 | 0);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_13 = (max(var_13, ((min(18446744073709551615, 3298878811)))));
        var_14 = (max(var_14, 3239657856));
    }
    var_15 -= var_0;
    var_16 = var_8;
    #pragma endscop
}
