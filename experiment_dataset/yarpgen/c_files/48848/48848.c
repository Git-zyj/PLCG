/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(-var_2, ((max(var_0, -5))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (max(((-(~142))), 5));
        var_16 = 28741;
        var_17 = (min(var_17, 127));
    }
    var_18 = (var_13 > var_3);
    var_19 = var_6;
    #pragma endscop
}
