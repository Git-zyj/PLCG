/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = var_9;
        var_19 *= (min(((min((arr_1 [i_0]), (173 <= var_17)))), (min((arr_1 [i_0]), var_12))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_20 *= (arr_1 [i_1]);
        var_21 ^= -194;
    }
    var_22 = (max(var_22, (18446744073709551615 <= var_3)));
    var_23 += ((var_7 ? 16665 : var_8));
    #pragma endscop
}
