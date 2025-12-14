/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = var_4;
    var_20 = (((-((18 ? var_7 : var_10)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [16] &= (arr_0 [4]);
        var_21 &= (((arr_0 [16]) <= 0));
    }
    #pragma endscop
}
