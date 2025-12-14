/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_6 ? (1044480 * 0) : var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] = var_7;
                    arr_8 [i_0] [i_2] = (min(var_8, (arr_2 [i_0 + 1] [i_0] [i_0])));
                    var_20 = (max(var_20, (((var_7 ? (((arr_5 [i_0 + 2]) & (arr_6 [i_0 + 2] [i_1] [i_2]))) : (((((((((arr_5 [i_1]) || 3043366077)))) != (850287323 + 13418709656477608029))))))))));
                    arr_9 [i_2] [i_0] [i_0] = ((-(arr_0 [i_0] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [2] [i_0] [i_1] [i_2] [5] [5] [i_4] = (arr_6 [8] [i_1] [8]);
                                var_21 = (((((((8321499136 / 1) && ((min(1, -126))))))) ^ (((arr_15 [i_1] [i_1] [i_2] [i_1] [i_1] [i_4] [i_0 + 2]) * (arr_12 [i_0] [i_0] [2] [i_4] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, (~var_16)));
    #pragma endscop
}
