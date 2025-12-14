/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2265287205;
    var_21 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 = (((((!var_7) ? 29522 : (!var_17))) < var_10));
                                var_23 = (max(var_23, ((((arr_10 [i_0] [i_1] [i_1] [i_2] [1] [i_4 - 1] [i_4]) ? (0 / 36019) : (((arr_9 [i_0 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_0 - 1]) ? ((var_7 ? 18446744073709551614 : var_1)) : ((((arr_6 [i_2]) ? var_17 : (arr_11 [i_4] [i_3] [i_4])))))))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] = ((!((!(((arr_2 [i_1]) >= var_2))))));
                    arr_14 [i_0] [i_1] [i_0] = (arr_11 [i_1] [i_1] [i_1]);
                    arr_15 [i_0 - 2] [i_0] [i_1] = ((!(arr_7 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
