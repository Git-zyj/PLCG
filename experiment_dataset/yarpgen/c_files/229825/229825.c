/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_0 | 6582850274094068606);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        var_19 *= (min(6582850274094068606, (((((max(var_16, -1))) & var_4)))));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (!17592186044415);
        var_20 = 16461;
    }
    #pragma endscop
}
