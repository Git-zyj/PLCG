/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((var_11 ? (var_3 % 65535) : (((var_5 ? var_14 : var_4)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        var_16 = var_13;
    }
    var_17 = var_0;
    var_18 = var_11;
    #pragma endscop
}
