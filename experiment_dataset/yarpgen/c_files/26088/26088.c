/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((-(arr_1 [i_0]))));
        arr_3 [7] [i_0] = -19;
    }
    var_12 = ((19 ? var_4 : ((((-28 > 18446744073709551597) % -2516551015200893573)))));
    var_13 = var_9;
    var_14 = (((max(5348525263359204061, 49085)) >> ((((min(var_1, var_1))) - 89))));
    #pragma endscop
}
