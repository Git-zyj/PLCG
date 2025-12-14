/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        arr_3 [i_0] [i_0] = min((max(var_8, var_5)), ((max(var_11, var_2))));
    }
    var_13 = var_6;
    #pragma endscop
}
