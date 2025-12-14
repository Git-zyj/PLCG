/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((-(max((max(var_7, var_9)), (max(var_9, 228))))));
    var_20 = var_7;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_21 = (-(max(((var_9 ? (arr_2 [i_0]) : var_6)), (arr_0 [i_0 + 1] [i_0 + 1]))));
        var_22 = (!26446);
        var_23 ^= ((4294967282 << (32768 - 32739)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_24 = arr_4 [i_1] [i_1];
        var_25 = ((~(arr_3 [i_1])));
        var_26 += (arr_3 [i_1]);
    }
    #pragma endscop
}
