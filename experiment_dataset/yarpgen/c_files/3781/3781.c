/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (((((+((var_8 ? (arr_0 [i_0] [i_0]) : 0))))) ^ ((((min(var_14, var_10))) ? var_9 : -7870626424343418242))));
        var_18 = (((~(~var_0))));
    }
    var_19 = (max(var_19, var_10));
    var_20 = var_6;
    #pragma endscop
}
