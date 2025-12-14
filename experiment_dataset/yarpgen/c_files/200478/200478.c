/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 65535));
    var_20 = ((((((var_14 != var_6) % (var_10 | var_2)))) ? 17147918236346436986 : ((max((var_8 + var_1), var_5)))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_21 *= ((((arr_1 [i_0]) <= 65528)));
        var_22 = -1;
        var_23 = (max(var_23, ((max(65535, 16383)))));
    }
    #pragma endscop
}
