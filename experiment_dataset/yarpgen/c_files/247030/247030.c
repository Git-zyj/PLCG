/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] = (arr_1 [2]);
    }
    var_18 = var_6;
    var_19 = (max(var_19, (!3322127424)));
    var_20 = ((!((max(var_13, 2145540163)))));
    #pragma endscop
}
