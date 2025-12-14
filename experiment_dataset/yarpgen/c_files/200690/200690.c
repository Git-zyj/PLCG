/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~217);
    var_21 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = var_14;
        var_23 = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) % 3396230399779591929));
        var_24 *= var_6;
    }
    var_25 = (max(var_25, (~0)));
    var_26 = var_11;
    #pragma endscop
}
