/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        var_12 = (arr_2 [i_0]);
    }
    var_13 = (min(var_13, (!-14320)));
    var_14 = var_3;
    var_15 = ((var_9 ? var_1 : var_11));
    var_16 = (max((~var_11), (max(var_6, (max(0, var_1))))));
    #pragma endscop
}
