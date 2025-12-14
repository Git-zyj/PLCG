/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (min(var_19, (((var_2 ? ((max(var_1, var_10))) : ((max((max(var_18, 2737)), var_10))))))));
        var_20 = (max(var_20, ((((var_7 - var_8) + (max(var_2, var_15)))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [9] = ((1432255385 ? var_0 : var_3));
        arr_7 [i_1] [i_1] = (32594 + 58917);
        var_21 = (min(var_21, (((var_12 ? var_0 : var_18)))));
        var_22 = (min(var_22, (var_5 / var_6)));
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_23 = (var_1 > var_18);
        arr_10 [i_2] = (((((2738 - ((2755 ? 658719257 : 83))))) ? var_17 : -var_16));
        arr_11 [i_2] = ((((((min(var_18, var_6))) || ((min(var_2, var_8))))) || 1));
    }
    var_24 = (min(var_24, ((((((((((2147483647 ? var_8 : var_15))) && var_13)))) + (((-2147483647 - 1) ? ((((-29612 + 2147483647) << (((-2730 + 2735) - 5))))) : (min(var_13, -6246)))))))));
    var_25 *= var_10;
    #pragma endscop
}
