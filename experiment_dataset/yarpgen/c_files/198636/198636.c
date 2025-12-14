/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~((var_8 ? 3689107533897610964 : var_16))))) ? (min(var_1, var_8)) : -1862230527));
    var_21 &= var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [11] [i_0] = (((arr_0 [i_0] [i_0]) + (((85 ? 1 : (1023701393 * 0))))));
        var_22 = (min(255, -32743));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_23 = -var_3;
        var_24 = ((1 ? (arr_3 [i_1]) : var_8));
    }
    var_25 = var_14;
    var_26 |= 1;
    #pragma endscop
}
