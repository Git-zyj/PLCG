/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((var_14 ? (19299 == 11621613259561189588) : ((var_2 ? var_10 : 3183987795)))), ((((var_15 + 47) ? (max(124382361, var_12)) : (max(255, 3183987795)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = ((((((((max(244, (arr_0 [i_0])))) == (1 / -1))))) * ((-2128 ? (((((arr_0 [i_0]) != 251)))) : (max((arr_1 [i_0] [i_0]), 4170584935))))));
        arr_2 [i_0] [i_0] = (((-(max(2789511679552896211, (arr_1 [i_0] [i_0]))))));
        var_21 = (arr_0 [i_0]);
        var_22 = (arr_0 [i_0]);
        var_23 *= ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : ((min(2972157074, 53822))))));
    }
    #pragma endscop
}
