/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((((132 ? (arr_0 [i_0]) : 0))) ? (((max(118, 152)))) : (((arr_0 [i_0]) ? var_5 : (arr_0 [9])))));
        var_19 = ((((~((max(var_16, var_11))))) ^ (((((0 ? 694795865 : (arr_1 [i_0])))) ? 255 : var_11))));
    }
    var_20 = var_1;
    var_21 = ((+(((~var_4) ? var_5 : (max(var_15, var_4))))));

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 |= (max((arr_2 [16]), ((((max(var_10, 254))) ^ (arr_0 [i_1])))));
        var_23 *= (max(((30 ? var_1 : var_5)), (arr_0 [i_1])));
        var_24 = (((!var_10) && 16903679083351291914));
    }
    #pragma endscop
}
