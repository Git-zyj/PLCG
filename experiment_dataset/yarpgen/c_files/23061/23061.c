/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (min(((((arr_1 [i_0]) ? (((max(var_4, var_7)))) : (arr_0 [i_1])))), ((-((var_18 ? (arr_3 [i_1] [i_1]) : var_9))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = (min((((arr_13 [i_1] [i_3 + 1]) ? (arr_3 [i_1] [i_0]) : var_16)), ((((~var_7) * (((!(arr_4 [i_1] [2] [2] [11])))))))));
                                var_23 = ((-(var_1 < 61286)));
                                var_24 = ((((-(arr_3 [i_3] [i_3]))) + (((min(-26974, (arr_7 [i_3] [i_3] [i_3] [i_3 - 1] [10])))))));
                                var_25 = var_2;
                                var_26 = ((((!(arr_5 [i_1]))) || (((arr_5 [i_1]) || var_1))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
