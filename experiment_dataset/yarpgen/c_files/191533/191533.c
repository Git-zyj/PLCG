/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = arr_1 [i_0] [i_0 - 1];
        arr_3 [i_0] = ((((((22 ? var_2 : 1)))) >> (((var_4 * var_9) % (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : 1))))));
    }
    var_13 = var_10;
    #pragma endscop
}
