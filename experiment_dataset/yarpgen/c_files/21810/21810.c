/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 12936;
    var_21 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = -14965;
        arr_4 [i_0] = var_17;
        arr_5 [i_0] = 11808;
    }
    var_22 = (max(var_22, 6856674588043182756));
    var_23 |= var_10;
    #pragma endscop
}
