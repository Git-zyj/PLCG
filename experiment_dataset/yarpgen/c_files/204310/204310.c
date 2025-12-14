/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 -= (min(((((min(var_6, var_4))) ? 0 : (var_8 * var_2))), -var_4));
    var_12 -= var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(((((!0) == var_6))), (arr_2 [i_0])));
        arr_4 [i_0] = var_3;
        arr_5 [i_0] [i_0] = arr_1 [i_0];
    }
    #pragma endscop
}
