/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_11 = (arr_2 [i_0 - 3] [i_0 + 1]);
        var_12 = (arr_0 [i_0]);
    }
    var_13 = -1357692891;

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] &= (min((arr_3 [i_1]), 36));
        var_14 = ((~((((max(-41, 14))) ? var_3 : 69))));
        var_15 ^= arr_0 [i_1];
    }
    #pragma endscop
}
