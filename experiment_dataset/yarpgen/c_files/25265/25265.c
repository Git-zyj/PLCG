/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [19] = ((((((arr_1 [i_0]) / -var_18))) && ((!(arr_0 [i_0])))));
        var_20 = (max(((((max(1, var_14))) ? (!-14107) : 1876892205)), (!var_4)));
    }
    #pragma endscop
}
