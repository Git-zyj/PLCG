/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_11 = (max(((((((5425984744839595687 ? 9223372036854775793 : 1))) && var_9))), (min(var_6, var_4))));

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (min(var_9, ((max(-var_7, var_4)))));
                        arr_9 [1] [18] [i_2] [i_2] = (!((min(var_7, var_1))));
                        var_13 = (max((~var_2), (((((var_8 ? var_2 : var_0))) ? (min(var_4, var_4)) : (((min(var_5, var_3))))))));
                        arr_10 [i_2] = (((((~(var_1 % var_4)))) ? var_8 : (((((var_5 ? var_9 : var_7))) ? ((max(var_2, var_7))) : var_1))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = var_2;
                        var_14 = (max(var_14, ((min(var_6, var_0)))));
                    }
                    for (int i_5 = 4; i_5 < 18;i_5 += 1)
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_2] = (max(((min((max(var_7, var_1)), var_2))), (((var_2 + var_4) - (((var_5 ? var_3 : var_2)))))));
                        var_15 -= var_3;
                        var_16 = min((var_5 && var_7), var_9);
                        arr_17 [i_0] [i_1] [i_0] [i_2] = (var_9 + var_6);
                        arr_18 [i_2] [i_2] [0] [0] = (((((!var_9) && var_9)) && ((max((min(var_6, var_8)), var_3)))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_17 = (max(((min(var_7, var_7))), (var_9 - var_9)));
                                var_18 -= (min(15, var_1));
                                var_19 = (min(-18446744073709551615, (var_9 > var_0)));
                                arr_23 [i_2] [7] = (max((((18268574850669820825 ? var_8 : 0))), (~var_6)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
