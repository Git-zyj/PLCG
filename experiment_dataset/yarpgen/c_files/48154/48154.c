/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (arr_0 [i_0] [i_0]);
                var_20 |= -1;
            }
        }
    }
    var_21 = (min((((((var_10 ? var_12 : 26800))) - var_4)), var_11));
    var_22 = (min(var_22, (((-((~(~-8273))))))));
    var_23 = (min(var_23, var_4));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_24 = (((((!((min((arr_11 [i_2] [i_3] [i_4] [i_5]), 2343279888092576014)))))) >> (((((((var_5 ? var_12 : var_8))) ? ((var_12 ? var_13 : var_3)) : ((((arr_9 [i_2] [i_3]) >= var_2))))) + 203589046))));
                            var_25 = ((~(max(16103464185616975603, var_6))));
                            var_26 = var_15;
                            var_27 = 17336916409645642417;
                            arr_16 [i_5] [i_3] [i_4 + 1] = var_18;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_28 |= (((!var_15) ? ((((arr_19 [i_6] [i_6 + 3] [i_6] [i_6 - 2] [i_6]) ? var_14 : (arr_19 [i_6] [i_6 + 3] [i_6] [i_6] [i_6])))) : (-4778659252539098885 & var_15)));
                            var_29 -= (arr_11 [i_7] [i_7] [i_7 + 1] [i_7 - 1]);
                        }
                    }
                }
                var_30 = (!-27609);
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_31 = 16103464185616975602;
                            var_32 = (max(var_32, ((1109827664063909219 >> (var_0 - 566496552)))));
                            var_33 = (min(((-21574 ? var_16 : (arr_18 [i_8] [i_3]))), var_16));
                            arr_27 [i_2] [i_2] [i_8] [i_2] [i_2] = ((-910366448 ? 17336916409645642405 : 17321917093050290090));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
