/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_7, (min((var_7 / var_8), var_12))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (((var_13 > var_0) >= (((((var_1 ? var_4 : var_2)) > var_8)))));
        var_17 = (((var_1 <= var_14) & ((((var_14 + var_5) > (max(var_5, var_14)))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = (((var_10 * var_2) >= (((max(var_14, var_1)) + (var_4 && var_10)))));
        var_19 = (max((((((var_8 ? var_4 : var_1))) < (~var_10))), (var_5 == var_5)));
        var_20 *= (min(((max(var_4, var_2))), -var_4));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_21 = ((~((-(!var_3)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_22 = ((((((max(var_6, var_7)) >> ((((var_12 ? var_7 : var_0)) - 16311882514084558364))))) || ((((var_12 & var_1) << (((var_1 + var_11) - 19284)))))));
                        var_23 = var_2;
                        var_24 = ((((((((var_3 ? var_4 : var_13)) != var_3)))) * (((var_5 | var_6) ? (var_8 % var_14) : var_9))));
                        var_25 = var_7;
                    }
                }
            }
        }
    }
    var_26 = var_4;
    var_27 &= var_14;
    var_28 = (max(((((!var_9) < var_3))), ((var_1 | ((var_9 ? var_9 : var_14))))));
    #pragma endscop
}
