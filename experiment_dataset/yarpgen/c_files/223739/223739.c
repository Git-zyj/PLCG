/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_1] = (((arr_6 [i_1] [i_3] [i_3]) ? (arr_6 [i_1] [i_0 + 1] [i_0 + 2]) : (arr_1 [i_0 + 1])));
                        arr_11 [i_1] [i_1] = var_0;
                        arr_12 [i_1] [i_1] [i_1] [i_1] = (arr_2 [i_2 + 1] [i_2 + 1]);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_0] = ((((((arr_5 [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2]) ? 1 : ((var_11 ? var_18 : 22775))))) ? ((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((arr_6 [i_1] [6] [i_1]) ? 42760 : 23743)) : 255))) : 32369895));
                        var_19 = (((arr_2 [i_0] [i_0 + 2]) ? 10275856828074596563 : ((max((min((arr_1 [i_0]), 13145)), 48)))));
                        var_20 += 0;
                        var_21 = (min(var_21, (((((((arr_14 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] [i_2]) ? (arr_5 [i_2] [i_2 + 3] [i_2 - 1] [i_2]) : (arr_14 [i_2 - 1] [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_2] [i_2])))) ? ((min(16383, (arr_14 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2 - 1])))) : ((min(80, (arr_5 [i_2] [i_2 + 2] [i_2 + 1] [1])))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_22 = (((!(arr_14 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2]))));
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((((max((arr_16 [i_0] [i_0] [i_0] [i_0 + 1]), (arr_16 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 1])))) ? (((arr_17 [i_5] [i_5] [i_5] [i_1]) ? (arr_17 [i_0 - 1] [i_0 - 2] [i_0] [i_1]) : (arr_16 [i_2 + 3] [i_2 + 2] [i_2 + 3] [i_2]))) : (max((arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0]), (arr_16 [i_5] [i_5] [i_5] [i_5])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = 26552;
    #pragma endscop
}
