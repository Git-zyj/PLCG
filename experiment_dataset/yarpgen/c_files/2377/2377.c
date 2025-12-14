/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 ? (((((var_11 & var_0) && (var_13 % 14))))) : (min(var_8, ((var_2 ? 4227858432 : var_10))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((var_12 && var_7) - (var_4 - 11259441780181548264)));
        var_18 = ((var_8 >> ((62809 >> (39 - 11)))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_19 = (40518 | 1);
            arr_5 [18] [i_0] [i_0] = (((var_3 & var_7) ? (3179618677 + 127) : 60269));
            var_20 = ((var_7 ? var_2 : 1));
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_0] = (1 <= var_12);
            var_21 = ((((4434839160167958925 ? var_2 : var_10)) ^ (var_14 >= var_1)));
            var_22 = (min(var_22, (((((var_8 ? var_2 : var_6)) ^ var_0)))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_23 = (150 ^ var_10);
            var_24 = (((((var_1 ? var_13 : var_6))) ? var_7 : (var_11 == var_8)));
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_25 = (min(var_25, var_5));
        arr_14 [i_4] = (((var_6 ^ var_2) > -1063793039));
        var_26 = (max(((var_3 ? (129 | var_5) : 190)), 340688992539817814));
    }
    #pragma endscop
}
