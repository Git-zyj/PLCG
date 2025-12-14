/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = ((((-55 ? (arr_1 [i_0 + 1] [i_0]) : (arr_0 [i_0 + 1] [i_0 + 1])))) ? (~var_3) : ((var_9 + ((var_3 ? (arr_1 [1] [1]) : (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = (((((var_7 ? var_8 : (arr_2 [i_0 + 1])))) ? (((124 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])))) : (arr_0 [i_0 + 1] [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_14 = ((9258491921204621814 && (((+(((arr_7 [i_1] [i_1]) ^ (-9223372036854775807 - 1))))))));
        arr_8 [i_1] = (--1);
        var_15 *= (max(((var_6 << (var_2 - 29654))), (((var_2 || (arr_7 [i_1 - 1] [i_1 - 1]))))));
    }
    var_16 = var_5;
    var_17 = ((((137 << (((~var_10) - 23)))) | (((var_4 & var_10) ? ((2274113006766608920 ? 1 : 1)) : ((var_2 << (((-32767 - 1) + 32771))))))));
    var_18 = (max(-var_5, (max(var_6, var_5))));
    var_19 = (!(((var_1 ? ((var_0 >> (var_10 + 35))) : ((max(var_9, var_12)))))));
    #pragma endscop
}
