/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (max((((arr_1 [i_0]) + (~var_1))), ((var_2 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_10 = (min(var_10, var_4));
    }
    var_11 = var_2;
    var_12 = (min(var_5, ((((min(var_6, var_1))) ^ var_2))));
    #pragma endscop
}
