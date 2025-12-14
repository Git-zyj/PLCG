/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 -= ((((~(arr_1 [i_0]))) / (arr_2 [i_0])));
        var_19 |= (min(1231445359, 182556770));
    }
    var_20 = var_14;
    #pragma endscop
}
