/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_14 = ((((~(arr_1 [i_0 - 3] [i_0 + 3]))) < (arr_1 [i_0 - 2] [i_0 - 2])));
        var_15 = (arr_1 [4] [i_0]);
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_16 = 0;
        var_17 = (max(0, 1));
    }
    var_18 = var_4;
    var_19 = (!var_13);
    var_20 = (max(var_20, ((((((-(var_4 + var_1)))) ? (((~((max(var_2, var_11)))))) : (min(var_3, (((var_7 ? var_11 : var_5))))))))));
    #pragma endscop
}
