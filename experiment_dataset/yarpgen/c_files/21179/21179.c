/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (max(var_11, ((((44845 ? 17 : ((1 ? 1 : 1))))))));
        var_12 &= -var_10;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_4 [i_1] = (arr_0 [i_1]);
        var_13 = (min(var_13, (!14267643443611647804)));
        var_14 = ((!((max((((var_10 & (arr_0 [i_1])))), 70368743653376)))));
    }
    var_15 = (min(var_15, (((var_5 || (((!2147483630) || var_1)))))));
    var_16 ^= (!-1491663404);
    var_17 = (max(var_9, (((((max(var_8, 7871096002210508718))) || var_3)))));
    #pragma endscop
}
