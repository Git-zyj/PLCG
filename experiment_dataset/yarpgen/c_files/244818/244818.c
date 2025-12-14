/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_1 [i_0]) && ((((arr_2 [3]) ? (arr_1 [i_0]) : var_9)))))) | (((((arr_1 [i_0]) - (arr_2 [i_0]))) - ((max(1, 1)))))));
        arr_4 [i_0] [i_0] = (min(1, (3 || 1429661099)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = (((((+(((arr_7 [i_1]) ? (arr_6 [i_1]) : var_14))))) ? ((((((20 << (18529 - 18516)))) || (((var_13 ? 1 : 112)))))) : ((max(var_3, 1)))));
        var_17 = (max((max(1, ((2957087969758916395 ? 2147483616 : var_4)))), var_2));
        var_18 = (max(var_18, ((max((!75), var_8)))));
    }
    var_19 = (min(var_3, (((1 / var_0) ? var_10 : ((var_13 ? 1 : 203))))));
    #pragma endscop
}
