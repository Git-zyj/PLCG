/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_3 [i_4] [i_2] [i_1]) < (arr_7 [i_1])));
                                var_14 = var_0;
                                var_15 = (min(var_15, (arr_5 [i_0] [i_1])));
                            }
                        }
                    }
                }
                var_16 += (max((arr_1 [i_0] [i_1 + 1]), (arr_1 [i_0] [i_0])));
                var_17 = var_8;
                arr_11 [i_1] [i_1] = ((((((~(arr_10 [i_1] [i_1] [i_1] [i_0]))))) ? ((1162302623 ? 1162302604 : 0)) : (~var_0)));
            }
        }
    }
    #pragma endscop
}
