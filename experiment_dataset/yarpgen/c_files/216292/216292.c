/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [17] [i_0] [i_1] [i_0] [i_0] [17] [i_0] = ((((max((((9303624175865438817 ? 1664501670 : -1627227308))), ((-931488513673959374 ? 35184372088800 : (arr_0 [i_0] [i_1])))))) ? ((-var_11 - ((var_13 ? (arr_8 [i_0]) : var_13)))) : (((arr_0 [i_2 + 1] [i_0 + 1]) ? var_7 : (arr_0 [i_2 + 3] [i_0 - 1])))));
                                arr_13 [i_0] [i_1] [i_2 - 2] [i_3] [i_4] = ((+((-(((arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_2]) ? var_19 : -3029799656159643934))))));
                                var_20 = max((max((((!(arr_10 [i_0] [i_0] [8] [i_3] [i_4])))), (arr_4 [i_0 + 1] [i_2 + 3]))), var_4);
                            }
                        }
                    }
                }
                arr_14 [i_0 + 1] [i_0] [i_0 + 1] = 35184372088825;
                var_21 = (((((var_3 && var_11) ? (arr_4 [i_0 + 2] [i_1]) : ((var_9 ? var_10 : var_3)))) & ((~(((arr_6 [i_0] [i_0]) & (arr_2 [i_0 + 3])))))));
                arr_15 [i_1] [i_0] = (+(min(((var_14 ? (arr_7 [i_0] [i_0] [i_0 + 2] [i_1]) : var_17)), -var_13)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_22 = var_3;
                            arr_24 [i_5 + 2] [i_6] [i_7] [i_5] [i_5] = var_14;
                        }
                    }
                }
                var_23 = min((((!var_18) ? ((max(var_1, var_12))) : ((var_13 ? (arr_16 [i_5]) : var_8)))), (min(var_4, var_15)));
                arr_25 [i_5] [i_5] = (min(var_7, (((~(arr_18 [i_6]))))));
            }
        }
    }
    var_24 = (~((-((-488307587 ? 18119030716058382470 : 15442736521922079854)))));
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                arr_32 [i_9] [i_9] = (min((~var_6), (arr_30 [i_9 + 1] [i_9])));
                arr_33 [i_9] = (((((arr_30 [i_9] [i_9]) ? (arr_30 [i_9 - 1] [i_9]) : (arr_30 [i_9] [i_9]))) != var_8));
            }
        }
    }
    #pragma endscop
}
