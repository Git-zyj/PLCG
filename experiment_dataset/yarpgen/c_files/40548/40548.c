/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((min((arr_1 [i_0]), 4294967294)) >= ((((!246) ? -11980 : 1)))));
        var_10 = (min(var_10, (!6995)));
    }
    var_11 = (((~-11980) || ((min(var_0, (var_3 <= 11980))))));
    #pragma endscop
}
