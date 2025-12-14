/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (!var_10);
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 &= ((!((((arr_2 [i_3 + 1] [i_3 + 1]) ? (arr_2 [i_3 - 1] [i_3 - 1]) : (arr_4 [i_3 - 1]))))));
                            var_16 = ((((arr_5 [i_0] [i_0]) ? (var_6 & 1) : 0)));
                            var_17 = ((1601 / (((arr_6 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 - 1]) / (arr_6 [i_3 + 2] [i_3] [i_3] [i_3 - 1])))));
                        }
                    }
                }
                var_18 = ((!(((min((arr_2 [i_0] [i_0]), var_10))))));
                arr_9 [i_1] = (((arr_2 [i_0] [i_1]) ? (arr_7 [i_1] [i_1] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_1] [i_1] [i_1])));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] [i_5] [i_5] [i_6] [i_6] [i_6] = ((-1602 ? ((76 ? 1 : (arr_4 [i_4]))) : 64631));
                                var_19 = ((2251250057871360 * (!34357641216)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= ((!((((!var_11) ? -1608 : (!var_4))))));
    #pragma endscop
}
