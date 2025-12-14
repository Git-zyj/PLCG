/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = min((((arr_2 [i_0]) / (arr_0 [i_0]))), (arr_2 [i_0]));
        var_20 -= 148;
    }
    var_21 = (max(var_21, ((min((min((max(var_2, var_0)), var_7)), (((var_17 ? 1 : (max(var_10, var_8))))))))));
    var_22 = 65535;
    var_23 = (var_0 % var_16);
    #pragma endscop
}
