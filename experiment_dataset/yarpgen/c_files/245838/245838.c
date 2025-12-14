/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~1) ? ((min(var_0, var_1))) : (var_4 + var_1)))) ? var_6 : (!3482116263));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_11 = ((((((var_4 * (arr_0 [i_0 - 1] [i_0]))))) | ((var_2 - ((var_4 ? 9177 : var_0))))));
        arr_3 [i_0] = -var_9;
        arr_4 [i_0] [i_0] = var_6;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1 + 1] = ((17677321777435548101 + 9177) ? (((2564406707 ? 1730560589 : 0))) : (2251799813685247 + 1730560589));
        arr_9 [i_1 + 1] [i_1] = var_7;
    }
    #pragma endscop
}
