/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_4] [i_4] |= (((((-(max(1656243849, 3307342501))))) ? ((((((185 ? var_3 : 1))) ? 0 : (var_0 && 49)))) : ((max(-4077568212085023630, 4194303)))));
                                var_15 = (+(((arr_11 [i_2] [i_2] [i_2 - 1] [13] [i_1]) ? (arr_11 [i_2] [i_2] [i_2 + 1] [i_2] [i_1]) : (arr_11 [12] [12] [i_2 + 1] [i_4] [i_1]))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [12] [i_1] = (min(((min(var_8, var_0))), ((((((var_7 | (arr_6 [i_1] [i_2])))) ? (((~(arr_5 [i_1])))) : 4194288)))));
                    var_16 = (arr_9 [i_0] [i_1] [i_0] [i_1] [0]);
                }
            }
        }
    }
    var_17 = var_14;
    #pragma endscop
}
