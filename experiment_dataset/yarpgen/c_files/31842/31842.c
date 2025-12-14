/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_6;
        var_20 = (((var_4 && 1) + var_18));
        var_21 = (4095 <= -4095);
        var_22 = var_1;
        var_23 |= ((((-4122 ^ ((var_18 >> (var_7 - 11073171051604767439))))) ^ ((((!var_11) || (var_18 || var_17))))));
    }
    var_24 = (4095 * 4095);

    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_25 = ((var_4 || (4095 <= var_18)));
            var_26 = (var_6 || 4095);
        }
        arr_9 [14] [i_1] |= var_11;
        var_27 += (!var_15);
        arr_10 [i_1] = (var_15 % -4079);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_28 = 4092;
        var_29 = (max(var_29, var_16));
    }
    var_30 += var_13;
    #pragma endscop
}
