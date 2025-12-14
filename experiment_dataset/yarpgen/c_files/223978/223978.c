/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(16243, (!var_3)));
    var_17 = (min(var_11, var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0 + 2] [i_0 + 1] = var_13;
                var_18 = ((~(~var_15)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (min(((0 ? (min((arr_2 [i_0 + 2] [i_3]), 0)) : (((-977674477 ? var_9 : 203))))), var_0));
                                var_20 = (((!var_5) ? (((min((min(52, 180)), 68)))) : ((77 ? 63 : 1920))));
                                arr_14 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0 - 1] [i_0 - 1] = ((-((var_11 ? (arr_1 [i_2]) : (min(var_1, var_15))))));
                                arr_15 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = ((((((arr_13 [i_4 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1]) << (var_11 - 204)))) && ((min(4, 1920)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
