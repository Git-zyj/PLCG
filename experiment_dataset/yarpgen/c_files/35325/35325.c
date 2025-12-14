/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_14 = (((arr_0 [i_0]) % (arr_1 [i_0])));
        var_15 = ((((-63 ? var_13 : (arr_0 [i_0]))) ^ 208));
    }
    var_16 = (~-72);
    var_17 = ((((3078324245064455576 ? (var_12 >= var_6) : (((var_11 + 2147483647) >> (2591893805775671931 - 2591893805775671927))))) - ((-72 & (((-27597 + 2147483647) >> (var_2 - 18013)))))));
    #pragma endscop
}
