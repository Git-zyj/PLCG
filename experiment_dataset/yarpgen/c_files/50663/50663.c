/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((((min((!-860834571), ((var_0 ? -3324037440501499111 : var_3))))) ? (min((min((arr_3 [i_0] [1]), 883294139)), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 2]))) : (arr_5 [i_0] [i_1] [i_0 - 1])));
                    var_11 = (max((max(-4070580275396429031, ((~(arr_4 [i_0] [i_0] [i_0]))))), (arr_0 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 2] [i_1] [16] [i_0] [i_4] [i_2] [i_3] = var_5;
                                var_12 = 9988;
                                var_13 += ((-4352441048959356632 ? (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0]) : ((var_5 + (min((arr_1 [i_1]), -883294154))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (((var_9 ? ((1 ? var_4 : -11467) : ((max(222, -883294121)))))));
    #pragma endscop
}
