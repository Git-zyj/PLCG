/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_6;
        arr_3 [i_0] = (var_4 / var_0);
        arr_4 [i_0] = var_7;
        var_18 = (max(var_18, var_12));
    }
    var_19 |= var_3;
    #pragma endscop
}
