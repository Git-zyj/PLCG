/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (min(var_18, (((arr_2 [i_0] [i_0]) ? var_10 : (arr_2 [i_0] [i_0])))));
        var_19 = (min(var_19, var_3));
    }
    var_20 = 32767;
    var_21 = ((~((min(var_17, var_3)))));
    var_22 = (1 % 127);
    #pragma endscop
}
