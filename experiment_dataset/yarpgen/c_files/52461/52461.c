/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_10));
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((var_11 + 9223372036854775807) >> var_10)) << (((((((var_4 >> (var_9 - 1344940484172364177)))) ? (~15) : var_13)) - 18446744073709551600)));
                var_16 = (((((var_6 & var_5) - var_7)) * ((((-var_8 == (var_11 / var_8)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((((!var_3) * (var_13 | var_9))) << (var_3 + 685021269)))));
                            var_18 = ((var_1 >> var_10) > var_0);
                            arr_12 [i_3] [i_2] [i_3] [i_3] = ((((!(var_3 == var_10))) || (var_9 != var_9)));
                        }
                    }
                }
                arr_13 [i_1] [1] = ((var_4 << (-var_3 - 685021210)));
            }
        }
    }
    #pragma endscop
}
