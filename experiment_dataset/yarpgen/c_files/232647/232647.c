/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-var_2 ? (var_13 != var_11) : ((var_9 ? var_13 : var_0))))) && ((((((-8289679159989005597 ? -82 : 10))) ? ((var_4 ? 1 : var_9)) : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((-((~(arr_4 [10] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (arr_7 [i_0] [i_1] [i_2] [i_3]);
                                var_19 = (((((((arr_4 [i_0] [i_0]) * (arr_10 [10] [i_2] [i_0] [i_3] [10]))))) ? ((-(arr_5 [i_3 - 1] [i_3 - 1]))) : ((-(arr_9 [i_3 - 1] [i_3 - 2] [i_3] [i_3] [i_4] [i_4] [i_4])))));
                            }
                        }
                    }
                }
                var_20 = (arr_0 [i_0]);
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
