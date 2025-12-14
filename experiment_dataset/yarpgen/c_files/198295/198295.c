/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, 435293849));
        var_20 -= 435293849;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (arr_3 [i_1] [i_1]);
        var_21 = arr_6 [i_1];
    }
    var_22 = var_15;
    var_23 = -19;
    #pragma endscop
}
