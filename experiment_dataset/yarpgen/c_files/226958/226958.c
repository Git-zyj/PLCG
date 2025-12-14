/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_17 *= (arr_1 [11] [11]);
        arr_2 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_18 *= ((-var_8 ? ((44282 ? (((arr_4 [14] [i_1]) ? 17934 : (arr_3 [i_1]))) : var_2)) : (arr_0 [i_1])));
        arr_5 [i_1] = (--63231);
    }
    var_19 = (var_8 || var_7);
    var_20 *= (max(((-var_14 ? var_2 : (var_2 % 1))), 963722512));
    var_21 = var_15;
    #pragma endscop
}
