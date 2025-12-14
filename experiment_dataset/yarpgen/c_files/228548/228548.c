/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_16 = (max(var_16, ((min((min((arr_1 [i_0 - 1] [i_0]), (min(15239, (arr_1 [i_0] [i_0]))))), ((((var_12 ? 18053159181688301062 : var_12)) + 3000380009)))))));
        arr_2 [0] [11] &= 496;
        var_17 = max((((!((((arr_0 [i_0]) ? 50296 : var_2)))))), (min(var_15, (((var_15 ? var_11 : 32085))))));
        arr_3 [i_0] = ((((((arr_0 [i_0 - 3]) ? 15239 : (arr_1 [i_0 + 1] [i_0])))) ? (min(((var_9 ? (arr_0 [10]) : var_15)), ((min(var_9, 0))))) : var_0));
    }
    var_18 -= (((min((max(var_13, 1294587281)), var_3))) ? ((min(var_11, (min(var_4, 44843))))) : (max(-var_2, var_4)));
    #pragma endscop
}
