/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(var_3, (((570622491 > var_5) >> (var_7 + 6993434796362231590))));
    var_13 = -1438001519;
    var_14 |= (!var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (((min((arr_2 [0] [i_1 - 1]), (arr_4 [i_2] [i_1] [i_0 + 1]))) - (!-570622492)));
                    var_16 = (!(((((var_11 ? -570622509 : 570622508)) >> (min(var_11, 570622471))))));
                    arr_7 [i_1] [i_1] [i_0] = ((((!((max(570622509, var_8))))) ? ((var_9 ? (((0 ? -123178740 : var_0))) : ((var_3 ? var_8 : -570622510)))) : (((var_10 ? (!var_8) : -570622468)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (!var_7);
                                var_18 = (max(var_18, ((max((~1504593197), (((arr_0 [i_4]) ? (arr_9 [i_0] [i_1 + 1] [i_2] [i_3] [i_4]) : 9223372036854775807)))))));
                                var_19 = (((!var_4) + (arr_10 [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
