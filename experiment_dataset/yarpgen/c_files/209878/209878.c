/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (min(-3, var_1))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (((((((309411377 ? (arr_3 [4] [i_0]) : var_2))) ? -17 : -4)) * -28578));
        var_14 = (min((min(var_7, (arr_3 [i_0] [i_0]))), (18184 && var_7)));
        var_15 = (((max(((((arr_0 [i_0]) ^ var_11))), (var_7 / var_9))) | (((max((arr_2 [i_0] [i_0]), (arr_0 [i_0])))))));
        var_16 = (min(-27958, (135 - 28011)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 = (min(var_17, var_7));
        var_18 = (min((max((min(4, var_9)), (arr_4 [i_1]))), var_9));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_19 = (max(var_19, (--9223372036854775800)));
        var_20 = (min(var_20, (((max(-var_5, -2767666094796724202))))));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_21 = ((((var_1 ? 1022 : (((var_5 ? (arr_10 [i_3] [i_3]) : 36961))))) | (((((((max(var_0, var_0))) + 2147483647)) >> (var_0 + 54))))));
        var_22 = (max((max((arr_10 [i_3 - 1] [i_3 + 1]), -72)), (((((-(arr_9 [i_3]))) * ((min(36961, 11175))))))));
        var_23 = (((-8 >= 0) || ((((!-8) * (min((arr_4 [i_3]), var_8)))))));
        var_24 ^= (min(36944, ((18446744073709551585 ? 0 : 36932))));
    }
    var_25 = (max(((((-var_9 + 2147483647) >> (47352 >= 3932160)))), (max((var_1 | var_9), (1113135709 == var_1)))));
    var_26 &= ((((max((var_7 || var_7), ((1 + (-9223372036854775807 - 1)))))) ? ((((var_11 ? var_7 : 3)) << (((max(1113135718, -95)) - 4294967201)))) : (var_3 | var_1)));
    #pragma endscop
}
