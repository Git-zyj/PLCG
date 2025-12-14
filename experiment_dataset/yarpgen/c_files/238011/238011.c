/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0 + 1] = 31;
        arr_3 [i_0] &= (((arr_1 [i_0 + 1]) ? (~-var_9) : (((!1811401513) ? (((var_1 && (arr_1 [i_0])))) : (913031789 / var_1)))));
    }
    var_17 = var_16;
    var_18 = (((var_2 ? var_9 : var_2)));
    var_19 = (max(var_19, var_6));
    #pragma endscop
}
