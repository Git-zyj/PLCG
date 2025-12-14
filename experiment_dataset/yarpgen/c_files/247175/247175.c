/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_20 = ((-64 ? ((((var_14 ? var_1 : var_6)))) : -0));
        var_21 = (min((arr_2 [i_0 + 1] [i_0 - 1]), (0 / 9)));
        var_22 = ((1570905423071308383 ? 6 : (max((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 1])))));
    }
    var_23 = var_4;
    var_24 = var_7;
    var_25 |= ((var_9 ? -1 : var_13));
    #pragma endscop
}
