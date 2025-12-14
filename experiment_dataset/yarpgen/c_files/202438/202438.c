/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 ? (~var_19) : (~var_14)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = -499635031;
        var_21 = (536870912 == 1);
        var_22 = (~(arr_1 [i_0]));
    }
    #pragma endscop
}
