/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(((((~var_11) >= (((var_3 ? var_6 : var_8)))))), (((!var_5) ? var_7 : ((max(-2305843009213693952, var_0))))));
    var_13 = (min(var_7, (((var_6 ? (!var_2) : (max(29, var_5)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_14 = (((arr_2 [i_0]) / ((6 ? var_5 : 0))));
        var_15 = ((-(arr_2 [i_0 - 1])));
        var_16 = (((((arr_1 [12]) && -1932037175)) ? ((((var_9 + 2147483647) >> (((arr_1 [i_0]) - 2085631853))))) : ((var_9 ? var_1 : var_7))));
    }
    var_17 &= (((((((((var_10 ? 0 : -24))) < var_6)))) != (max((min(var_9, var_8)), var_2))));
    #pragma endscop
}
