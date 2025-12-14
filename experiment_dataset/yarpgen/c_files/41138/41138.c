/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-359608095 + var_4);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_19 = (min(var_19, (((~((max(30519, 117))))))));
        arr_3 [i_0] = var_15;
        var_20 = ((~(arr_2 [i_0 + 1])));
    }
    #pragma endscop
}
