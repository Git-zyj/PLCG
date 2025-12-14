/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(((min(((max(252, var_8))), var_16))), (max(16126, 43807)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 |= (arr_1 [11]);
        arr_2 [1] &= 49398;
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_1 [i_1 - 3]) != (arr_0 [i_1])));
        var_21 = (((((var_17 ? ((max((arr_0 [i_1]), var_13))) : var_3))) ? ((min((((arr_1 [i_1]) != var_18)), ((128 < (arr_0 [i_1 + 2])))))) : -147));
        arr_7 [i_1] = ((-(arr_0 [i_1 + 1])));
    }
    #pragma endscop
}
