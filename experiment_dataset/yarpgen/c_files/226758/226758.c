/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(387942210662522445, 387942210662522445));
    var_21 = ((((max(-5656084393251017068, var_2))) && var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, 18058801863047029170));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((13 ? (arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]) : (arr_13 [i_4] [i_4] [i_3] [i_2] [i_1 - 2] [i_0]))) + 5656084393251017067));
                                arr_16 [i_4] [i_0] [i_3] [i_2] [i_1 - 1] [i_0] = (5656084393251017078 ? (arr_9 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4]) : ((((!(arr_10 [i_0]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((((((6617472733703257003 << (((var_11 + 5542950319963152789) - 54))))) ? 387942210662522445 : (~12631568902685618285)))))));
                            arr_22 [i_6] [i_1] [i_1] [i_6] = (arr_6 [i_6] [i_0]);
                            arr_23 [i_1] [i_5] [i_6] &= arr_10 [i_5];
                        }
                    }
                }
            }
        }
    }
    var_24 = 11225750313323544380;
    #pragma endscop
}
