/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 = (!var_0);
                                var_15 = (min(var_15, (((-((((153 ? (arr_1 [i_3] [i_4]) : var_5)) | (arr_12 [11] [i_1 - 2] [i_1 - 4] [11] [i_1 - 1] [i_4]))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_4] [i_3] [22] [i_2] = var_5;
                                arr_16 [i_2] [10] [i_2] = (!31276);
                            }
                        }
                    }
                }
                arr_17 [22] [i_1] |= ((18 > ((26 + (!var_10)))));
                var_16 = ((var_10 >> ((((((((var_10 > (arr_9 [i_0]))))) | (arr_8 [i_0] [i_0] [i_1]))) + 1821255423502719818))));
            }
        }
    }
    var_17 = ((-(max(var_9, ((var_10 ? 2078637370 : var_5))))));
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 -= arr_4 [19];
                    var_19 = (arr_23 [i_6]);
                    var_20 += ((((((arr_8 [i_5 + 1] [i_5 - 1] [i_6 - 2]) ? var_12 : var_12))) ? var_7 : (min(-2425048124132079939, 8721406978406523611))));
                }
            }
        }
    }
    #pragma endscop
}
