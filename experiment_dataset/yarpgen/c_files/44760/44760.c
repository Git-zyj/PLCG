/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((((var_8 ? var_1 : var_2))) ? -var_6 : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((min((arr_1 [i_0]), (arr_1 [i_0]))) ? (max((((~(arr_3 [i_1 - 4] [i_0] [i_0])))), (max(var_1, (arr_0 [i_0]))))) : (((((!(arr_1 [i_1]))) ? var_5 : (!var_9)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] = ((((((!var_12) ? (~-1) : var_4))) ? (arr_6 [9] [14]) : (~1240769611)));
                            arr_11 [i_0] [i_1] [i_0] [i_0] [4] [i_3] = ((~((((var_11 && (arr_4 [i_0] [i_0] [i_0]))) ? ((4 ? 8388607 : 1624017944901224690)) : ((var_3 ? -8388607 : (arr_1 [i_1])))))));
                            var_15 = ((!((((arr_8 [i_1 - 1] [i_1 - 4] [i_1 - 4] [i_1 - 4]) ? (arr_8 [i_1 - 3] [i_1 - 3] [i_1 - 4] [i_1 - 2]) : var_3)))));
                        }
                    }
                }
                var_16 = -var_0;
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_5] [i_4] [i_1] [i_0] = ((-(max((max(var_1, (arr_6 [i_0] [i_0]))), (((~(arr_21 [i_0] [i_1] [17] [14] [i_6]))))))));
                                var_17 = (max(65535, -1788915635109425668));
                            }
                        }
                    }
                }
                var_18 = 8388605;
            }
        }
    }
    #pragma endscop
}
