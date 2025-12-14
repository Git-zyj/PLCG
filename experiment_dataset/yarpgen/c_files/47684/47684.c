/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_13 ^= (~18172384875682052896);
        var_14 ^= (((arr_1 [i_0 + 1]) <= (arr_2 [i_0 - 3])));
    }
    var_15 = (max(var_15, (((18172384875682052881 && (!var_8))))));
    #pragma endscop
}
