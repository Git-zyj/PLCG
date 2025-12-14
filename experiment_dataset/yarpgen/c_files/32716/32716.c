/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1 ? ((-(~var_2))) : (max(var_2, var_14))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_21 = min((((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) < (18446744073709551615 << 1)))), (max(var_9, (arr_0 [i_0 - 2]))));
        var_22 = (((((-22690 ? 0 : -8929950573288404366))) > (((arr_1 [i_0 - 3]) ? (arr_1 [i_0 + 2]) : var_3))));
    }
    var_23 += (min((min(((var_2 ? var_9 : var_13)), (((103 ? 1 : 31))))), var_18));
    #pragma endscop
}
