/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 = (max(((max((max(var_1, var_2)), (var_0 && var_3)))), (((~var_6) + (arr_0 [i_0 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 *= var_6;
                                arr_13 [i_0] [i_2] [i_2] [7] [i_4] = (max(29186, ((var_4 * (((-9949 ? var_2 : -29193)))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [1] [i_2] = ((var_7 ? (arr_3 [4] [i_0 - 2] [i_2 + 3]) : (arr_6 [10] [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    var_14 = var_0;
    var_15 += (((((var_3 ? var_1 : (max(var_7, var_9))))) ? (~var_3) : ((((max(-29186, var_6))) * var_3))));
    #pragma endscop
}
