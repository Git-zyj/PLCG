/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 -= (min((max(0, (-1283 || -1271))), 1283));
        var_17 = (arr_1 [i_0]);
    }
    var_18 ^= (((((((65507 ? var_1 : var_9))) ? var_13 : ((var_1 ? var_11 : var_3)))) ^ (((((((max(8, var_8)))) <= (min(1584698684, -3631344179849682824))))))));
    #pragma endscop
}
