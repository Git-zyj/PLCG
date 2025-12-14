/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 -= ((1 ? 160 : 0));
        arr_2 [i_0] = (-(min((~1048544), (arr_1 [i_0]))));
    }
    #pragma endscop
}
