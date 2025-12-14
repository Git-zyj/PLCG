/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((((max(var_16, 82))) & var_14))) ? ((82 ? 71510958 : 4965579137555448634)) : var_10));
    var_21 = ((!(!var_19)));
    var_22 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((16 / (arr_2 [i_0])));
        arr_4 [16] &= (-var_15 % (arr_1 [16]));
        var_23 = (-13481164936154102982 || var_0);
    }
    #pragma endscop
}
