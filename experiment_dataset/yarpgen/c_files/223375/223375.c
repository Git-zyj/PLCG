/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((1452172621 ? var_15 : 0))) ? ((((arr_0 [i_0] [i_0]) != (((!(arr_1 [i_0]))))))) : ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_5 [i_0] = (arr_1 [i_0]);
        arr_6 [4] = ((!((!((((arr_1 [0]) ? var_15 : 2306815144)))))));
    }
    var_17 = (!var_8);
    var_18 = -var_10;
    var_19 = (max(var_14, var_16));
    #pragma endscop
}
