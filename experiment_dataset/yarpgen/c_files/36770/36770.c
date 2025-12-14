/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_9 == (min(var_2, (max(var_4, var_7))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 *= ((!(((0 - ((1766907637 ? (arr_2 [i_0] [i_0]) : 15)))))));
        var_19 = ((+((min((1 >= var_9), (arr_2 [i_0] [i_0]))))));
    }
    #pragma endscop
}
