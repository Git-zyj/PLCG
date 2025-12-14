/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(((120 * ((248 ? var_10 : var_0)))), 31744);
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_4] [i_4] = ((((-((-(arr_2 [i_0] [i_2] [i_0]))))) + (((((arr_1 [i_0] [i_2]) - 31744)) - -31745))));
                                var_15 = (min(var_15, (max(((((var_10 ? 0 : (arr_3 [i_2] [i_1]))) - var_12)), 31730))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_16 = -31734;
                            var_17 = (min(var_17, ((((((arr_3 [i_6] [i_6 - 1]) ? (arr_9 [i_6 - 1]) : (arr_5 [i_6 - 2] [i_6 + 2]))) < (arr_16 [i_0] [i_1] [i_1] [i_6]))))));
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_0] = (arr_18 [i_0] [i_0] [i_0] [i_0]);
                arr_22 [i_0] = (min((arr_4 [i_0]), var_6));
            }
        }
    }
    #pragma endscop
}
