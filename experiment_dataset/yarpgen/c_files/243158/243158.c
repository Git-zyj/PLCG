/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(1, ((min(var_8, var_17)))))) ? (min(var_6, (var_10 == 976676238))) : ((min(-var_10, (max(-46, 976676221)))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_19 = (min(var_19, ((((((~(min(var_17, var_12))))) ? ((var_14 ? var_4 : var_2)) : ((((arr_2 [16]) ? (arr_1 [0]) : var_11))))))));
        var_20 = ((+(((~-976676238) ? ((var_7 ? var_17 : var_17)) : var_8))));
        arr_3 [i_0] = ((((min(122, 976676237))) ? (arr_1 [i_0]) : (((17 * (arr_1 [i_0]))))));
    }
    #pragma endscop
}
