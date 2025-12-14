/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 -= var_12;
        arr_4 [i_0] = (min(var_14, (((~((var_11 ? var_11 : (arr_3 [7] [i_0]))))))));
        arr_5 [i_0] [i_0] = (((~5) * ((var_2 ? var_8 : 3218491538524772318))));
        var_16 = var_9;
        var_17 = ((min((min(-3218491538524772318, -28054)), var_6)));
    }
    var_18 += (((var_4 <= var_10) ? (min((!var_5), (min(3218491538524772306, -3218491538524772312)))) : var_9));
    #pragma endscop
}
