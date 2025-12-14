/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-5413 ^ 5412) * ((-((min(var_10, var_3)))))));
    var_19 |= -5426;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 -= (arr_0 [i_0] [i_0]);
        arr_2 [5] [i_0] = (arr_0 [3] [i_0]);
        arr_3 [i_0] [i_0] = ((((((-5395 & var_15) ? ((2469253504066617856 ? -5387 : -5413)) : (arr_1 [i_0] [i_0])))) && ((max(var_12, var_1)))));
        var_21 = var_10;

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_22 = (~var_14);
            arr_6 [i_0] = (arr_5 [i_1 + 1]);
            arr_7 [i_0] [4] [4] &= arr_4 [i_1] [i_1 - 2] [i_1];
            arr_8 [i_0] &= ((((!(arr_1 [i_1 - 1] [i_0]))) ? ((((((arr_5 [i_1]) - (arr_1 [i_0] [0])))) ? ((min(var_12, (arr_4 [7] [i_1 - 1] [i_0])))) : var_8)) : (((((var_9 ? var_3 : 5412))) ? (max(-5412, 497767556)) : ((5 ? -23 : var_16))))));
        }
    }
    var_23 = (min((max(var_5, var_5)), var_11));
    #pragma endscop
}
