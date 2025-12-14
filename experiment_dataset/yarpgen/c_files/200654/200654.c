/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((max(120, -120))) ? -var_13 : (4064 % var_4)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (!var_1);
        var_17 = (~5);
        arr_2 [i_0] = (max((!var_11), (arr_1 [i_0])));
    }
    #pragma endscop
}
