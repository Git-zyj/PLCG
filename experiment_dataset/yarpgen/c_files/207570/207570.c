/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 = (((((((arr_1 [i_0]) ? var_8 : (arr_1 [i_0]))))) | ((var_9 ? (arr_1 [i_0]) : var_3))));
        arr_2 [i_0] [i_0] = (min((((1 & 1) ? (max(17, var_7)) : (((~(arr_1 [i_0])))))), ((max((arr_1 [i_0]), 1)))));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_1 - 3] = max((((arr_5 [i_0] [i_1]) ? (var_1 << var_9) : (arr_5 [i_1 - 2] [i_1 - 2]))), var_9);
            var_11 = (~((max((arr_5 [i_1 + 1] [i_1 - 3]), 1))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_12 = ((((!(((var_4 ? 151 : var_2))))) ? (max(((((arr_1 [i_0]) && var_7))), (arr_0 [i_1]))) : (1 || 116)));
                var_13 = (((((1 / -1934245061) ? (max(-3239017694094835357, var_9)) : (arr_5 [i_0] [i_2]))) << ((((~(arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 3]))) - 2169197132982741925))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_14 = ((((((var_7 | var_8) ? ((max(-5349, (arr_10 [i_0] [i_1 - 1] [i_0] [i_0])))) : ((10512975160365249587 ? var_3 : var_6))))) * (arr_4 [i_1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((((((var_4 ? (arr_8 [i_1 - 3] [i_1 + 1]) : (arr_8 [i_1 + 1] [i_1])))) ? (arr_9 [i_0] [i_1] [i_1]) : (~var_9))))));
                            var_16 = (((((!(var_3 >= var_7)))) <= (((var_9 ? (arr_7 [6] [i_1] [i_3]) : -30649)))));
                        }
                    }
                }
                var_17 = min((((arr_12 [i_1 - 1] [i_3] [i_1] [i_1 - 2] [i_1 - 3]) ? (((max(var_2, var_2)))) : ((-3239017694094835328 ? var_3 : (arr_0 [i_1]))))), ((min(((5350 ? 1 : (arr_8 [1] [i_1 - 2]))), (((arr_3 [i_3] [15] [i_0]) ? (arr_10 [i_3] [i_3] [i_3] [i_3]) : 72))))));
            }
            var_18 -= (max((((var_1 ? var_2 : (arr_5 [10] [i_0])))), var_6));
        }
    }
    var_19 &= var_6;
    var_20 = ((((max((var_3 <= var_9), var_4))) ? (((((var_0 ? var_1 : var_8))) ? (max(var_4, var_1)) : var_0)) : var_8));
    #pragma endscop
}
