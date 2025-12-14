/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((((1 ? var_4 : var_5))) ? var_6 : var_8)));
    var_11 = ((-10793 ? var_1 : (min(1, var_8))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [11]) | -10785));
        arr_3 [i_0] [i_0] = ((((0 ? var_0 : 64)) << 6));
        var_12 = var_0;
    }
    var_13 = (min(((var_5 % ((var_3 ? var_2 : var_6)))), var_1));
    #pragma endscop
}
