/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 15543752306181672717;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = ((-((-((-(arr_0 [i_0])))))));
        var_18 = (max(var_18, ((((-(((!(-9223372036854775807 - 1))))))))));
        arr_3 [1] [1] = ((~((-(arr_0 [i_0])))));
    }
    var_19 = ((~((~(!var_0)))));
    #pragma endscop
}
