/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 &= var_8;
    var_13 = (max(var_13, -2683492028));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = ((1611475267 ? 2683492032 : 88));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max(((~(arr_11 [i_1 + 1] [i_1 + 1] [i_3 + 1] [0] [i_1 + 1] [2]))), ((~(arr_11 [i_1 + 1] [i_2] [i_3 + 1] [i_3] [i_2] [0]))))))));
                                arr_14 [2] [i_3] [i_3] [i_0 - 1] [i_1] [i_0 - 1] [2] &= (min(((~(arr_4 [i_0] [i_0 - 2] [i_4 + 1]))), (arr_4 [i_0] [i_0 - 1] [i_4 - 1])));
                                arr_15 [i_1] [i_1] = var_4;
                                var_16 = (88 | 3833366698);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
