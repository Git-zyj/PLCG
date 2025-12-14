/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        var_19 = (((~var_10) < var_14));
        arr_4 [i_0] [i_0] = var_2;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = ((0 ? 3114604404 : 18446744073709551615));
        var_20 = (min(-5379625180223458820, 3561970200));
    }
    #pragma endscop
}
