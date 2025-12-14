/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((arr_1 [i_0]) ? var_8 : (((~(2677135008 && 1))))));
                arr_6 [i_0] [i_0] = (((((255 ? (((254 / (arr_2 [i_0] [i_1])))) : (min(var_13, var_4))))) ? (((var_11 && var_5) ? 65535 : ((1 ? var_7 : (arr_0 [i_0]))))) : var_16));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_19 = (((((var_11 ? var_17 : 1))) ? (!var_8) : 5));
                                arr_15 [i_1] &= (((((1 << (var_0 - 57802)))) / ((((min(1, var_14)) ? (arr_4 [i_0] [i_0]) : ((((arr_3 [i_0 + 1] [i_0 + 1]) >= (arr_12 [i_0] [i_4] [i_2] [i_3] [i_2] [i_1])))))))));
                                var_20 = max(var_6, 1);
                                arr_16 [i_4] [i_1] [i_3] [i_2] [i_1] [i_0] &= max(((var_9 ? var_18 : (arr_1 [i_0 + 1]))), var_0);
                            }
                            var_21 = (max(var_21, (~262080)));
                        }
                    }
                }
                var_22 = (max(var_22, ((((min((arr_9 [i_0] [i_0 - 1] [i_1] [i_0 + 1]), -var_11)) ^ (((arr_2 [i_0 + 1] [i_0 - 1]) ? (arr_2 [i_0 + 1] [i_0 + 3]) : 1)))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_22 [i_5] [i_1] [i_1] [i_1] [i_6] [i_1] = 75;
                            var_23 = (max(var_23, var_7));
                        }
                    }
                }
            }
        }
    }
    var_24 = ((!(((-((var_11 ? var_3 : var_1)))))));
    var_25 -= (min(((-10037 ? (((244 ? 1 : var_14))) : var_9)), ((((~var_2) ? ((var_11 ? var_3 : var_4)) : ((65533 ? var_18 : var_0)))))));
    #pragma endscop
}
