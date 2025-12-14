/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -894079531;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = min(((max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2])))), -894079513);
        var_18 = (max(var_18, ((max(var_8, (~var_14))))));
        arr_4 [3] [i_0 - 1] = (min(((max(-894079508, var_13))), (((!(-894079492 && 131071))))));
    }
    var_19 = (max(var_19, var_2));
    var_20 = var_7;
    #pragma endscop
}
