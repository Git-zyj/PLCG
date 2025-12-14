/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -64;
    var_11 *= -2817050715697358252;
    var_12 = (((((var_5 ? 126 : -100)))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [3] [i_0 + 2] = 65535;
        var_13 *= (!7379054255823489996);
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_14 *= 0;
        var_15 += 1520436887;
        var_16 = (arr_4 [i_1 - 1]);
    }
    #pragma endscop
}
