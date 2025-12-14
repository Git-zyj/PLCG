/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((((~var_18) ? 154 : (arr_0 [i_0] [i_0]))) + 102));
        var_19 = 17862653083193886326;
    }
    var_20 = (max(((-((max(7168, 102))))), var_2));
    #pragma endscop
}
