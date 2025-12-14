/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 *= ((min(((max(-37, (arr_0 [i_0])))), 37402)));
        var_15 = (arr_0 [i_0]);
    }
    var_16 = var_4;
    #pragma endscop
}
