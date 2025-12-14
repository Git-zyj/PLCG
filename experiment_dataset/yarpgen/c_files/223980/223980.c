/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (arr_2 [3] [i_0]);
        var_21 = ((1226678657 == ((((!(var_18 && var_17)))))));
    }
    var_22 = ((var_11 ? 0 : 4294967290));
    var_23 = var_12;
    var_24 = var_13;
    #pragma endscop
}
