/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 &= (((max(((var_1 ? 5055 : var_0)), (arr_7 [i_1] [i_2 - 2]))) ^ ((max((arr_2 [i_2 - 2]), (arr_2 [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = ((((-32765 ? (arr_9 [i_2 + 1] [12] [i_2] [i_3]) : 1)) << ((((144115188075855872 ? (arr_9 [i_2 + 1] [1] [7] [i_2]) : -439945925)) - 2580846606))));
                                arr_14 [i_4] [i_3] [i_2] [i_1] [1] = ((((((arr_6 [15] [15] [i_2] [i_3]) - (arr_13 [i_0] [i_3] [16] [i_3] [i_2 - 3] [21] [i_0])))) * (max((arr_9 [i_1] [i_4] [i_2] [5]), (arr_8 [1] [i_1] [i_1] [i_2] [i_2 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 *= ((var_6 ? ((~(var_4 - 144115188075855872))) : var_11));
    var_20 = ((var_3 & (((((144115188075855887 ? var_5 : 2132547687))) | (max(144115188075855869, 58946))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    arr_23 [i_5] = ((-(((arr_5 [i_5] [i_6] [i_7 - 1]) ? (arr_21 [i_7]) : (arr_5 [i_5] [i_6] [7])))));
                    var_21 = 26202;
                }
            }
        }
    }
    #pragma endscop
}
