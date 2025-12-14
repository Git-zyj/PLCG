/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(max(2032, ((4143441998 ? 0 : -505369411))))));
    var_16 = (min(var_16, var_5));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_17 = (max(var_17, (((-(arr_1 [i_0]))))));
    }
    #pragma endscop
}
