/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = -11441939010945112361;
        var_20 = ((!(arr_1 [i_0])));
    }
    var_21 = (min(var_21, ((((-14 ? (((-32767 ? 333939696 : var_4))) : var_12))))));
    #pragma endscop
}
