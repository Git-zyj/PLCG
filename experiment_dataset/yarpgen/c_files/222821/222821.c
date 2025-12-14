/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (min((((-(arr_3 [i_0] [i_0])))), (min(250, 528482304))));
        var_11 = (~-2147483643);
    }
    var_12 = ((((min(var_1, var_3)))));
    #pragma endscop
}
