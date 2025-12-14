/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((min((var_1 && var_2), (var_9 + var_7))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [4] = (arr_1 [i_1]);
                var_11 -= ((((max((max((arr_3 [i_0]), var_1)), ((max(var_8, 16777215)))))) ? (arr_0 [i_0] [i_1]) : (arr_3 [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] = 4185516633;
                                arr_16 [i_1] [13] [i_2] [13] [i_4] [14] [1] = (((((241 - var_2) ? (arr_8 [i_0] [i_3] [i_3] [i_3]) : ((var_3 * (arr_14 [i_0] [i_1] [i_1] [i_0] [i_4])))))) ? -var_1 : 0);
                                arr_17 [i_0] [12] [i_3] [i_2] [6] = (4278190081 ? 0 : (arr_10 [i_0] [14] [i_2] [i_2] [13]));
                                arr_18 [i_0] [i_2] [i_2] [i_3] = ((~(((-9223372036854775807 - 1) ? (arr_11 [i_2]) : var_0))));
                                arr_19 [i_2] = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
