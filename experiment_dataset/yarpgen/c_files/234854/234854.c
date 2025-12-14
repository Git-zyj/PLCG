/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] |= var_8;
        var_19 = (arr_0 [i_0 + 1]);
        var_20 = (!-19967);
        var_21 = 19979;
    }
    var_22 = 19980;
    #pragma endscop
}
