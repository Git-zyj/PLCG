/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max((var_6 + var_0), (6028854319666290304 - var_0))) + var_2));
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = ((-((max(4026531840, 3430467567)))));
        var_17 = (min(((min((min(var_1, var_13)), var_6))), (!var_3)));
        arr_2 [i_0] = (!5);
    }
    #pragma endscop
}
