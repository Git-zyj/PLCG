/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (~3)));
                var_18 = (((((arr_5 [i_1] [i_0 + 1]) < var_15)) ? (((((65526 ? 1 : 251))) ? (((17591 ? var_10 : (arr_1 [i_0] [i_1 - 1])))) : (((arr_6 [i_0 - 1] [i_0 - 1]) | (arr_1 [i_1] [3]))))) : (((var_5 != 1) & (max(var_11, 1))))));
                arr_7 [i_0] [i_0] = (max(var_14, ((((arr_4 [i_0]) == 49626)))));
                var_19 = (min(var_19, ((((((3 == ((-(arr_6 [i_0 + 1] [i_0 + 1]))))))) - var_12))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_12 [i_2 + 1] = ((+(((arr_9 [i_2] [i_2 + 1]) ? (arr_9 [i_2 + 1] [i_3]) : (arr_9 [i_2 - 1] [i_2 + 1])))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_20 = ((~((max((((arr_19 [i_6] [i_6] [14] [i_5] [i_6] [i_3]) >= (arr_14 [i_3] [10] [i_6 - 2]))), 0)))));
                                var_21 |= var_10;
                            }
                        }
                    }
                }
                arr_20 [i_2] [i_2 + 1] = -30497;
            }
        }
    }
    var_22 |= (var_12 << (var_7 - 1206136728493656389));
    #pragma endscop
}
