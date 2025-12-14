/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((!((((6862249023134685888 | -32745) ? ((5897566382822991087 ? (arr_0 [i_0] [i_0]) : 32736)) : (arr_2 [i_0] [i_0]))))));
        var_17 -= ((~(((arr_2 [i_0] [i_0]) & (arr_0 [20] [20])))));
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = 36368;
        var_18 = 2147483647;
        arr_8 [11] = (arr_4 [i_1]);
    }
    #pragma endscop
}
