/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_7 ? (((max(-16, 6)))) : ((0 ? var_3 : var_11)))), var_9));
    var_16 = ((var_13 ? (((max(1, 0)))) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_17 = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = ((~(!var_14)));
                                arr_16 [i_0] [i_1] [i_1] [i_2 + 1] [i_3] [i_1] = ((1 ? 24873 : 1));
                                var_19 = (arr_8 [i_1]);
                                var_20 = (min(var_20, ((((-19421 == 48490) * (arr_2 [i_0] [i_1] [i_3]))))));
                                var_21 = 19399;
                            }
                        }
                    }
                    var_22 = var_12;
                }
            }
        }
    }
    var_23 -= var_7;
    var_24 *= 131071;
    #pragma endscop
}
