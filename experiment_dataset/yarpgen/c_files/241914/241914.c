/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_1;
    var_18 = (min(var_15, ((var_11 ? ((var_3 ? var_14 : var_6)) : var_14))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((~(max(var_1, var_0))));
        arr_3 [i_0] = ((!(((-1591888540 ? 993391417 : 123)))));
        arr_4 [i_0 + 1] = var_10;
        arr_5 [i_0] = (((((arr_0 [i_0] [i_0]) == (((max(13729, (arr_1 [i_0]))))))) || ((((var_8 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) <= var_10))));
        var_19 = 248;
    }
    #pragma endscop
}
