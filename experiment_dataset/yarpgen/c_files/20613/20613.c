/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = (min(var_15, ((((max(var_3, (var_11 / var_10))) & (var_7 > var_8))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        var_16 = (max(var_16, ((((((var_12 ? ((65535 ? var_12 : var_5)) : (max((arr_1 [i_0] [i_0]), var_13))))) ? (((max((var_0 >= var_8), var_5)))) : (max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))))));
        var_17 = (min(var_17, ((max((~var_7), var_8)))));
    }
    var_18 = var_8;
    #pragma endscop
}
