/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = ((((((-109 ? var_11 : var_5)) ? var_16 : var_7))));
    var_21 *= ((var_8 & (min(((var_5 ? var_7 : var_15)), ((var_5 ? var_18 : 24642))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [4] |= -7831042449029745753;
        var_22 = ((min((arr_0 [i_0 - 1]), var_15)));
        arr_3 [i_0] = (arr_1 [0] [0]);
    }
    #pragma endscop
}
