/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max(((1767577843 ? ((-14168 ? var_9 : -14168)) : (~14166))), var_9)))));
    var_16 ^= (184 % 457720750);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_2] = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 |= ((arr_2 [i_1] [i_2]) | (!-47625727));
                                var_18 = (max(751784528, -42));
                                var_19 = ((var_10 ? (((max((arr_0 [i_0] [i_1 - 1]), (arr_0 [i_0] [i_1 - 1]))))) : ((1073739776 ? var_9 : (arr_0 [i_0] [i_1 - 1])))));
                            }
                        }
                    }
                    var_20 = (min(var_20, (min((!-1370233630), (~169)))));
                    var_21 = (max(var_21, (((~(((!var_2) ? 14194 : ((max(255, 32))))))))));
                }
            }
        }
        var_22 = ((((max((((arr_6 [i_0] [i_0] [i_0]) ? var_8 : (arr_0 [i_0] [i_0]))), 11634))) ? ((var_3 * (((arr_9 [i_0]) & var_12)))) : ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (max(-457720750, -33)) : (!var_11))))));
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        var_23 = (max(var_23, ((max((((((max((arr_3 [i_5] [i_5]), var_4))) ? ((~(arr_17 [i_5] [i_5]))) : (((arr_5 [i_5 - 1] [10] [5]) ? 457720750 : var_5))))), (arr_2 [i_5 + 2] [i_5 + 2]))))));

        for (int i_6 = 4; i_6 < 12;i_6 += 1)
        {
            arr_20 [i_5] = (((arr_15 [i_5 - 1] [i_5] [18] [i_6] [i_6] [i_6]) ? ((-var_7 ? ((-812500124 ? -457720750 : 1)) : ((max(var_3, -54))))) : 1073739776));
            arr_21 [i_5] = 1;
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_24 = (min(var_24, (((((max((arr_5 [i_5] [i_5 + 1] [i_7 - 1]), (arr_5 [i_5] [i_5 + 1] [i_7 - 1])))) ? (~var_4) : ((max(var_9, var_11))))))));
            var_25 = (min(var_25, (arr_10 [i_7 - 1] [18] [i_7] [i_5])));
        }
    }
    #pragma endscop
}
