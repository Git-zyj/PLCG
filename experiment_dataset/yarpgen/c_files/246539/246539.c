/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!(!180))));
    var_15 = (min(var_15, ((((((1 ? 6938128322879680502 : var_11))) ? (6938128322879680504 || -1) : 11508615750829871113)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((max((max(-4840, 1083659285)), -1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = ((var_4 < (max(1, (~6938128322879680509)))));
                                arr_12 [16] [20] [i_4] [i_4] [i_4] [i_2] = -18446744073709551615;
                            }
                        }
                    }
                    arr_13 [i_2] = (arr_7 [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_1 - 2]);
                }
            }
        }
    }
    var_18 = (max(-700903604, var_3));
    #pragma endscop
}
