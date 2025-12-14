/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min(0, (1479448424 % var_5))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = (max(var_19, ((min(5798971624069644028, (((((min(5798971624069644028, (arr_0 [i_0] [i_0])))) && (var_9 << var_16)))))))));
        var_20 *= (((arr_0 [i_0] [i_0 + 1]) << (((arr_0 [i_0] [8]) - 2178323219))));
    }
    var_21 = (max(var_21, var_14));
    var_22 = ((var_1 << ((((~(var_10 / var_6))) - 2039969928))));
    #pragma endscop
}
