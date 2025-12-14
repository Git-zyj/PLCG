/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 -= var_13;
        var_16 |= 233;
        var_17 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_18 = var_3;
        var_19 -= 3;
        var_20 = var_9;
        arr_6 [i_1] = (arr_4 [i_1]);
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2 + 1] = var_10;
        var_21 = 1379227889;
    }
    var_22 = -8625141349038023033;
    #pragma endscop
}
