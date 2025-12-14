/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_11 & var_8) >> (var_12 - 221)))) ? ((var_5 ? ((var_6 ? var_8 : var_9)) : (-2147483647 - 1))) : ((max(-var_10, var_5)))));
    var_16 = var_14;
    var_17 = var_9;
    var_18 = (~(~var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? (~1283987352) : (((arr_1 [i_0] [22]) ? var_13 : (arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = ((!(((var_10 ? 12036 : 31408)))));
            var_19 *= ((!(arr_4 [i_0] [i_0] [i_0])));
            arr_8 [i_1] [i_0] [i_1] = (((arr_6 [i_0] [i_0]) ? 32758 : ((var_13 ? var_5 : var_13))));
        }
    }
    #pragma endscop
}
