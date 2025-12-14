/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (~1)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = var_4;
        arr_3 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, -106));
        var_19 = (min(var_19, ((min(1, ((((((arr_4 [i_1] [i_1]) + 2147483647)) >> (34286 - 34282)))))))));
        arr_6 [i_1] [i_1] |= (1 && 22);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_20 = 1;
        var_21 = 48;
    }
    var_22 ^= (max((max((max(var_10, var_14)), (((var_9 ? -47 : -6759))))), -16));
    var_23 = (var_8 / (min((((1023 ? 23 : var_6))), (max(var_4, 32767)))));
    #pragma endscop
}
