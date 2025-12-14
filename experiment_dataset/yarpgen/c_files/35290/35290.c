/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (!0);
        arr_4 [i_0] [i_0] = ((!((min(((0 % (arr_1 [i_0] [i_0]))), var_13)))));
    }
    #pragma endscop
}
