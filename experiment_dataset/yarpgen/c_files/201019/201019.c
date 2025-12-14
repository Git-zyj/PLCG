/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_10 = (min(var_10, (((var_1 ? ((var_1 ? var_0 : 3424865245)) : var_8)))));
        arr_2 [i_0] = ((226 >> ((((58516 ? 226 : 7019)) - 223))));
        arr_3 [i_0] &= ((((((58516 % 65535) & 4294967295))) || ((max(var_0, 3709773620463392177)))));
        var_11 -= ((!(arr_0 [i_0] [i_0 - 1])));
    }
    var_12 = var_2;
    #pragma endscop
}
