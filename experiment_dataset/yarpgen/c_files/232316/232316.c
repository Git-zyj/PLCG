/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2] [0] [i_0] = -28266;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_4 + 2] &= (min(55592, 32767));
                                var_14 = (var_7 + var_9);
                                arr_15 [i_3] = (max(((var_2 ? var_0 : 8133)), (max(11020, ((min(-8133, (arr_3 [i_1] [19]))))))));
                                var_15 -= var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    var_16 = var_10;
                    var_17 = (((!4037509645300439877) ? 6844 : ((~((var_3 ? -16537 : var_6))))));
                    arr_23 [i_6] [20] [i_7] = ((((max(var_5, -13693))) ? 6829 : (((arr_21 [i_5]) - (arr_21 [i_6 + 3])))));
                }
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
