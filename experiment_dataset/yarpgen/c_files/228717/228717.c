/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (!var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((((min(4864, 5801114951052473740))) ? ((((((arr_4 [i_0]) ? 5801114951052473740 : 60669))) ? 60671 : ((var_0 ? var_5 : 0)))) : ((min((~var_1), (var_5 >= 2527016283))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 8;i_4 += 1)
                            {
                                var_12 -= (((arr_8 [i_1 - 1] [i_1 - 1] [i_4 + 2]) ? (arr_1 [i_4 + 3]) : var_5));
                                var_13 = (((arr_11 [i_0] [i_1 - 1] [i_1] [9] [i_4]) * (arr_3 [i_0] [i_0])));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = -var_1;
                                arr_16 [i_1] [i_3] [9] [9] [i_1] = (arr_6 [i_1] [i_1] [i_1 + 1]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_1] = var_3;
                                var_14 = (max(var_14, (~var_6)));
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                var_15 = var_4;
                                arr_22 [i_1] = ((var_9 ? (arr_10 [i_6] [i_1] [i_1] [i_0]) : (8522057562315717787 | -471993226297353344)));
                                var_16 = (!-var_7);
                            }
                            var_17 = var_5;
                            var_18 = (max(4778435719589142495, 0));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
