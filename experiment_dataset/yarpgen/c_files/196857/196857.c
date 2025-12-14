/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (1 != 0)));
    var_19 = var_5;
    var_20 = (min(var_20, var_12));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_21 = ((~((((var_13 ? var_5 : var_8))))));
        var_22 = (((var_0 * 1) != (12063991478762621532 <= var_3)));
        var_23 = (min(var_23, (((((min(var_16, (arr_1 [i_0])))) <= var_12)))));
        arr_3 [18] &= (~var_11);
    }
    #pragma endscop
}
