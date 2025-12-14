/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = var_0;
                var_21 = (min(var_21, (((-((var_3 >> ((((var_11 >> (var_13 - 252826489890510041))) - 350515672459486)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((151 ? 10865 : 5202303611166076386)))));
                                arr_11 [i_0] [i_1] [i_1] = (((var_15 & var_5) <= ((var_13 ? var_16 : var_19))));
                                arr_12 [i_1] [i_3] [i_2] [i_1] = ((((((!var_5) && var_14))) ^ ((-(var_7 & var_1)))));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1 - 1] = ((var_12 ? (var_12 && var_14) : (((((145 ? 5202303611166076386 : -5202303611166076376))) / (var_13 + var_9)))));
            }
        }
    }
    var_23 |= var_11;

    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        var_24 = -var_8;
        var_25 -= ((-(((var_13 ? var_3 : var_16)))));
    }
    #pragma endscop
}
