/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1 - 1]))) ^ (max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1 - 1])))));
                arr_6 [i_0] [i_0] [i_0] = (min((max(var_14, (arr_1 [i_1 + 2] [i_1 + 1]))), (arr_3 [i_0] [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1] = 3645770646;
                                arr_15 [5] [i_1] [i_3] = (((max((arr_4 [i_1 + 1] [i_3 - 1]), var_14)) & (max((var_17 | 254), (arr_3 [i_1 + 2] [i_3 - 1] [i_3 + 1])))));
                            }
                        }
                    }
                }
                var_21 = 254;
                var_22 = (max(var_3, (min((arr_11 [i_1 + 2] [i_1] [i_0] [i_1 - 1]), (arr_11 [i_1 - 1] [i_1 - 1] [i_0] [i_1 + 2])))));
            }
        }
    }
    var_23 = ((((max(var_9, ((max(var_12, var_7)))))) ? var_11 : ((max(1, 10580)))));
    var_24 *= (max((max(-9104780205065381387, (((var_15 ? 54932 : var_5))))), var_18));
    var_25 = var_11;
    #pragma endscop
}
