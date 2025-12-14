/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 &= (((var_6 ? 1637115727 : var_8)));
                                var_12 = var_9;
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = (((((135 || 417586688) ? 12 : (((5748493983232346806 ? var_6 : 1))))) ^ (var_3 != 45265)));
                                var_13 = ((-(62356 <= 1)));
                                var_14 = min(1450156921, var_8);
                            }
                        }
                    }
                    var_15 = (min(var_15, ((((-5748493983232346807 | var_3) < 2709914938)))));
                }
            }
        }
    }
    var_16 = (max((((var_9 % 36) ? var_10 : (~4644))), (!-0)));
    var_17 -= ((-9480 ? (~1) : var_6));
    #pragma endscop
}
