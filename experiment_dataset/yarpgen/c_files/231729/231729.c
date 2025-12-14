/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (((((arr_0 [i_0]) - var_13)) != ((1401661983 | (((arr_1 [i_0]) ? var_12 : 1401661990))))));
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = ((((((arr_3 [i_1 + 1]) ? (arr_3 [i_1 - 1]) : var_2))) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 + 1])));
        var_18 = (!((max(((-56 ? var_15 : var_4)), var_13))));
    }
    var_19 = ((1401661983 < (min(2537555902, (((-1401661999 ? 1401661983 : var_5)))))));
    var_20 = ((var_6 == (((((var_14 >> (var_10 - 123))) == ((2598095182 ? 6 : 56629)))))));
    var_21 = ((var_2 && (8906 && var_14)));
    var_22 = var_15;
    #pragma endscop
}
