/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 ? ((min(183, ((var_9 ? var_6 : var_3))))) : var_4));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (max(181, (max((((arr_0 [5] [i_0]) ? 179 : var_5)), var_7))));
        arr_2 [i_0] [i_0] = ((((((var_8 ? (arr_0 [i_0] [i_0]) : 175))) || ((((arr_0 [i_0] [i_0]) & (arr_1 [1])))))));
        arr_3 [i_0] = (!var_1);
    }
    #pragma endscop
}
