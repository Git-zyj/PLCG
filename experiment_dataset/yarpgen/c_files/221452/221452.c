/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = 294357689;
                arr_8 [i_0] [i_1] [i_1] = (max((min((((17179869183 ? 33777 : 1))), 4000609607)), ((max(var_13, (arr_6 [i_1] [i_1]))))));
                arr_9 [i_1] [i_1] [i_0] = var_14;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_17 = var_12;
                                arr_18 [i_1] [7] [i_1] [6] [i_2] [i_3] [i_4] = 1442262653;
                                var_18 = (-127 - 1);
                                var_19 = (((4000609610 <= 144114638320041984) ? ((((!(arr_10 [i_0 + 2] [i_1]))))) : ((-var_4 ? (((-118 ? (-127 - 1) : (-127 - 1)))) : 294357687))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                var_20 = (max(var_20, (((~(~0))))));
                                var_21 += (~4000609607);
                                var_22 = ((4000609609 ? (-127 - 1) : 294357688));
                            }
                            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                arr_27 [i_0] [i_0] [i_1] [i_0] [i_6] [i_1] [i_2] = (-127 - 1);
                                var_23 = (+(((var_11 | var_0) ? var_2 : (var_13 <= 5545345684332243393))));
                                var_24 = (max(var_24, 294357687));
                                var_25 = (arr_20 [i_0] [i_1] [i_2] [i_0] [i_6]);
                                var_26 = (max(var_26, ((((var_0 <= 45) ^ ((-31430 ? 18446744073709551590 : (((max(1, 32767)))))))))));
                            }
                            var_27 = 63;
                            arr_28 [i_1] [i_2] [i_1] = (((11131 ? ((31429 ? -5095449579242913725 : 4000609593) : 4294967295))));
                        }
                    }
                }
            }
        }
    }
    var_28 = (((((294357665 ? ((7896606859733941883 ? 1 : var_4)) : ((4092 ? var_4 : 1))))) && -1505348228));
    #pragma endscop
}
