/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 65520;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = ((((!((((arr_0 [i_0]) ? 0 : var_7))))) ? ((((var_14 || 16) || ((min((arr_0 [i_0]), (arr_0 [i_0]))))))) : (!var_1)));
        arr_2 [i_0] = ((~((((max((arr_1 [i_0]), var_16))) ? (((arr_1 [7]) ? var_10 : 16)) : (arr_1 [i_0])))));
    }
    var_19 = ((var_5 ? ((~((var_10 ? var_9 : var_4)))) : (max(61712, ((var_1 ? var_3 : var_0))))));
    #pragma endscop
}
