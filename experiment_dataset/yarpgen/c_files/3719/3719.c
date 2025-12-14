/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_9));
    var_13 = ((!(((-(~var_11))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [21] [i_0] = (min((0 && 1), (var_2 || var_9)));
        var_14 = (min(var_14, (-1 <= 138)));
        var_15 = (((max(var_8, var_5))));
    }
    var_16 = ((((((~var_5) >= (min(var_4, var_10))))) <= (!-var_8)));
    var_17 = (min(var_17, var_2));
    #pragma endscop
}
