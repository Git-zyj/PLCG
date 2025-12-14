/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (((~-var_9) ? ((max(-32761, 100))) : (~-32761)));
        var_12 = ((~(arr_0 [i_0] [i_0])));
        var_13 = -32742;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_14 = (min(var_14, (((min(0, (max(var_8, var_9))))))));
        var_15 = -1433580556;
        arr_4 [i_1] [8] = (max((!-1433580539), ((((arr_2 [6]) ? var_1 : -2)))));
        var_16 = (max(var_16, ((min((arr_2 [i_1]), (((min(193, var_9)))))))));
    }
    var_17 = ((68 ? var_4 : var_6));
    #pragma endscop
}
