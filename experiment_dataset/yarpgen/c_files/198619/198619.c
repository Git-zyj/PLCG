/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = (((var_8 ? 1 : -316637199)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_22 = (~-316637192);
        arr_3 [i_0] = ((1518114967 ? 1883777575223615332 : 14472067747335192702));
        var_23 = var_15;
        arr_4 [1] [i_0] = var_13;
    }
    var_24 = ((-((-((1 ? 12640277247553267766 : var_5))))));
    #pragma endscop
}
