/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = ((62 << (!202)));
                    arr_10 [i_0] [i_0] = (((~192) ? ((var_11 << (((max(var_3, var_1)) - 5904529443822033850)))) : (1313352645536774207 == 976138974)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = ((976138974 ? 54 : 54));
                                var_19 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((127523176 ^ (((1609536009 + 97) ? ((-320494657 ? var_10 : var_7)) : (!var_0)))));

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_18 [i_5] = ((((((17133391428172777409 == (var_6 < 1))))) ^ ((-((44 ? 422765098 : 3393345573))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    arr_25 [i_5] = ((((((!54) ? (!575757530610371787) : (((arr_16 [i_5] [i_6]) ? var_10 : var_14))))) ? ((var_12 & (arr_16 [i_5] [i_6]))) : (!-14696)));
                    arr_26 [i_5] [i_5] [i_5] = ((((max((arr_21 [i_6]), (((~(arr_22 [i_6]))))))) ? (((arr_16 [i_5] [i_6]) | -3)) : -22));
                    var_21 = (((!(((var_7 ? var_8 : 96))))) ? 1531723604 : ((((!(!var_13))))));
                    var_22 = 2360;
                }
            }
        }
    }
    var_23 = (((!var_10) > (max((((2 ? -22 : 28828))), ((1 ? var_4 : 2628539617781003142))))));
    var_24 = ((((26894 | 1) ? var_3 : (((-953995131 ? 208 : 60))))) | 44);
    #pragma endscop
}
