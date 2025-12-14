/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((1 <= var_10) ? (!var_13) : var_12))) ? (((max(var_6, var_6)))) : (max(var_13, var_12))));
    var_15 = ((-31816 % (min(((var_5 ? 4 : 1)), ((-4 ? var_9 : var_13))))));
    var_16 = ((-((min(var_6, var_2)))));
    var_17 -= (max(var_7, -98));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((var_0 * ((120 ^ (arr_0 [i_0])))));
        arr_4 [i_0] = (!0);
    }
    #pragma endscop
}
