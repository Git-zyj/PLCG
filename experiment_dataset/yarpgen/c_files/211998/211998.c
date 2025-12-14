/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 ? var_8 : var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = var_9;
        var_14 = (var_11 || var_6);
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] [i_1] |= (arr_1 [0]);

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_15 = (min(var_15, var_4));
            var_16 = var_5;
            arr_8 [i_1 + 1] [i_2] [i_1] = (~4064);
        }
        var_17 *= ((((var_8 ? (arr_2 [i_1]) : var_9)) < (arr_4 [i_1 - 2])));
        arr_9 [1] = (arr_1 [8]);
        var_18 = (((min((arr_0 [i_1 - 2] [i_1 - 2]), var_11)) < var_5));
    }
    var_19 = (((var_4 ? 4074 : 4064)));
    var_20 = var_6;
    var_21 = (((((var_8 ? var_9 : var_5))) ? (min(var_10, var_5)) : (((max(5226884641136746568, 4072))))));
    #pragma endscop
}
