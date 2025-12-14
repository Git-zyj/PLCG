/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (max(var_20, (max((min(var_11, ((((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [i_0])))))), var_9))));
        var_21 ^= ((~(((!((((arr_2 [0]) ? var_0 : var_13))))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1 + 1] [i_1 - 1] = max(((((arr_4 [i_1 - 1] [i_1 + 1]) <= ((min(var_11, (arr_5 [i_1 + 1]))))))), (max((var_0 <= var_18), -19478)));
        var_22 = (((arr_1 [i_1 + 1] [i_1 - 1]) >= var_19));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_23 &= ((25784 ? -24522 : -17690));
        var_24 = (min(var_24, var_4));
    }
    var_25 = (min(var_25, var_7));
    var_26 = max(17687, var_18);
    var_27 = var_3;
    #pragma endscop
}
