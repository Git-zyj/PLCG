/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(var_1, ((max(var_5, var_2))))))));
    var_12 = (max(var_12, ((min(480, (min(29117, var_3)))))));
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (max(var_10, (((((var_10 ? 1614217762 : (arr_2 [i_0] [i_0])))) ? 65408 : (((arr_0 [i_0]) ? var_5 : var_2))))));
        var_15 = (min(var_15, (((1152424779035376041 ? 7196887268192018383 : var_1)))));
    }
    #pragma endscop
}
