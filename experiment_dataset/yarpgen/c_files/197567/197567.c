/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 -= (3217472323 >= 0);
        var_18 ^= 1;
        arr_2 [i_0] [i_0] &= (255 ^ -20);
    }
    var_19 -= ((var_14 * (((((0 ? var_4 : var_8))) ? 1 : (!121)))));
    #pragma endscop
}
