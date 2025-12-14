/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 ? (max(4107039448, 47532)) : ((((((var_15 ? var_5 : -1))) ? var_1 : var_11)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 ^= 1;
        var_18 = ((1 ? (arr_1 [i_0]) : var_4));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 = (min(var_19, ((min((((704 > (arr_2 [i_1])))), (min((arr_2 [i_1]), (arr_2 [i_1]))))))));
        arr_4 [i_1] = (~var_6);
        var_20 = var_12;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_21 -= (((((7434829937981253648 >> (var_12 - 3120270183)))) ? var_15 : var_5));
        var_22 = (min(var_22, (((!((((max(822450162, 1))) || (!var_4))))))));
        var_23 = (max(var_23, ((min((max(var_1, -801190396)), ((max(1, 11))))))));
        var_24 = 4294967295;
    }
    #pragma endscop
}
