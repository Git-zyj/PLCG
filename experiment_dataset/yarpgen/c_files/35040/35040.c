/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(112, (max(((max(var_1, var_9))), (max(-1, var_6))))));
    var_12 = ((((var_4 && (((-1241718817 ? 9223372036854775806 : var_7))))) && (~var_8)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 &= ((-25521 ? -4124119869832991577 : 137438953471));
        var_14 = ((((((-(arr_1 [i_0]))) + -1051501855)) - var_6));
    }
    #pragma endscop
}
