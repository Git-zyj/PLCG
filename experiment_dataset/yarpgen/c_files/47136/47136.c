/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_14, var_4));
    var_21 = var_17;
    var_22 += (min(((((max(var_16, var_11)) == var_3))), var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 = ((max(0, (var_9 == var_9))));
        var_24 = (min(var_24, ((((!var_11) + (((((var_16 && (arr_0 [i_0] [0])))) % (arr_0 [6] [6]))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_25 ^= (!-124163515);
        var_26 = var_8;
    }
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        var_27 = (((arr_3 [i_2]) ? (((!(((var_8 ? -42 : (arr_0 [6] [6]))))))) : (!var_0)));
        arr_8 [i_2] [i_2] = (min((((((var_11 ? -2 : var_12)) <= var_8))), 41));
    }
    #pragma endscop
}
