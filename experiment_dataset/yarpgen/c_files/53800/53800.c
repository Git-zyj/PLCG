/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((~var_1) ? var_7 : var_13));
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1] [i_2] [i_1] [i_3] [i_1] = var_4;
                            arr_14 [i_2] [i_1] [i_2] [i_3] = var_8;
                            var_20 = ((((min(50262, 15262))) > 16324));
                            arr_15 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] = var_7;
                            arr_16 [i_0] [i_1] [i_2] [i_1] = ((~-var_2) - (min(15243, 3748142537295683460)));
                        }
                    }
                }
                var_21 = 194268636761690000;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_22 = (5901 & (((~var_5) / var_10)));
                            arr_22 [i_1] = -358287602153665546;
                            arr_23 [i_0] [i_1] [i_5] [i_5] = max((((arr_8 [i_1] [i_1 + 1] [i_4] [i_5]) | var_6)), (max((((var_0 % (arr_7 [i_1] [i_1] [i_1 - 1])))), var_3)));
                            arr_24 [i_1] [i_1 - 1] [i_4] [i_5] = ((!((max((min(8190, 470580954002051172)), (((49013 >> (var_10 - 13323)))))))));
                            arr_25 [i_0] [i_0] [i_1] [i_4] [i_5] [i_1] = var_14;
                        }
                    }
                }
                arr_26 [i_0] [i_1] = var_14;
            }
        }
    }
    #pragma endscop
}
