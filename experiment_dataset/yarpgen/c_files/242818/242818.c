/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(434668805, ((((5 ? 434668774 : var_14)) & var_5)));
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_9 == -15637354) == var_1)) ? (((arr_1 [i_0] [i_0]) / (arr_0 [i_0]))) : (var_3 | var_2));
        arr_3 [i_0] = (max(-434668804, (max(((56 ? 6 : 54)), (arr_0 [i_0])))));
    }
    var_19 = var_11;
    #pragma endscop
}
