/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((((((70368744177663 < (arr_6 [i_2] [i_2] [i_2]))))) | 70368744177654)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_3] [i_4] &= (((((-90 ? (64938 == var_7) : var_3))) ? var_4 : ((((arr_2 [i_1 - 2] [i_1]) | (arr_2 [i_1 - 1] [i_2]))))));
                                var_15 = ((~(max(2087375663, 18446673704965373952))));
                            }
                        }
                    }
                    var_16 ^= -126;
                }
            }
        }
    }
    var_17 = ((((var_10 ? ((var_2 ? var_3 : 24876391)) : (((var_1 ? -43 : 13584)))))) ? (var_2 / var_5) : var_1);
    var_18 = ((var_12 ? (((13601 >> ((((max(var_8, var_13))) - 11625))))) : ((~(~var_12)))));
    #pragma endscop
}
