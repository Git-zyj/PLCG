/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_20 = (((((((var_18 ? (arr_3 [10]) : -9223372036854775793)) % var_15))) ? (min(var_3, (arr_1 [i_0]))) : var_15));
        arr_4 [i_0] = var_14;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            {
                var_21 = (max(var_21, ((((min(-948010481, (-9223372036854775807 - 1)))) ? (min((arr_10 [i_1 + 1]), var_9)) : var_7))));
                var_22 *= (min(var_8, (!-9223372036854775793)));
            }
        }
    }
    #pragma endscop
}
