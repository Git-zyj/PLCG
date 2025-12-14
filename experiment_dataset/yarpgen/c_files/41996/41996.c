/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = ((+(((arr_1 [i_0 + 1] [i_0 - 2]) + var_1))));
        var_17 = var_9;
        var_18 = var_1;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((-(4611686018293170176 & 4205398558)));
        arr_7 [i_1] = (+-8030);
        var_19 -= -var_14;
    }
    var_20 = var_13;
    #pragma endscop
}
