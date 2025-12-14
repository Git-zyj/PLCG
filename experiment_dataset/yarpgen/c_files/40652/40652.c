/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = (min(12945480689044321712, ((~(((arr_0 [i_0]) ? (arr_3 [i_0]) : 31))))));
        var_21 = ((1 ? (((~104) ? (arr_3 [i_0 + 1]) : (arr_0 [i_0]))) : ((-(arr_3 [i_0])))));
    }
    var_22 *= (((max(var_16, 1))));
    #pragma endscop
}
