/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = 1327397559;
                var_18 = ((((((-12513 > 96) ? var_17 : 1319))) || var_6));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0] = (var_12 || 4294967295);
                            var_19 = ((var_16 ? ((var_10 & (arr_3 [i_0 + 1] [i_0]))) : (267688573 & var_14)));
                        }
                    }
                }
                var_20 = ((max(-101, -120)));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] = ((87 ? var_10 : var_16));
                                arr_25 [i_0] [i_0] [i_0] [i_0] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((((var_7 ? var_11 : var_0)))) - -267688573));
    #pragma endscop
}
