/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((((var_13 ? -7067550414616808498 : var_11)) < (var_5 || var_11))))));
    var_18 = (max(((max(1172127358, var_12))), var_5));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = ((51 - (max((~-48), ((0 << (var_11 + 6880)))))));
        var_20 = 15;
    }
    #pragma endscop
}
