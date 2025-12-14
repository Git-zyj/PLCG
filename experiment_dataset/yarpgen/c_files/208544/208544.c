/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_4 ? (((min(var_6, var_5)))) : -1882698821))) && 22918));
    var_13 = (max(((var_6 ? 3 : 2581212636)), (((var_7 << ((((var_3 ? 9725206763068118617 : 3202144005)) - 9725206763068118610)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_0;
        var_14 = (min(((var_0 ? ((var_6 >> (var_2 - 23818))) : var_6)), 1));
        var_15 = (!var_4);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_16 -= ((var_10 | (~895353688)));
        var_17 += 254;
        arr_7 [i_1] = var_0;
        var_18 = ((var_2 ? ((454525534348505280 ? -2218 : 1)) : var_1));
        var_19 = (max(var_19, var_5));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_20 = (1 != 30038);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_21 = 28;
                                arr_19 [i_4] [i_2] = ((-26343 ? 2591758887 : -6));
                                var_22 = var_6;
                            }
                        }
                    }
                    var_23 = ((min(1703208405, var_8)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_23 [i_7] = -var_8;
        var_24 = (min(var_24, -30048));
        var_25 = ((((-2147483639 ? 3202144014 : var_10)) > var_4));
    }
    #pragma endscop
}
