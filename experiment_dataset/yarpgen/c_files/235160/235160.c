/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_11 = var_2;
                            var_12 = var_0;
                            arr_8 [i_0] [i_0] [i_2] [i_0 + 1] = 2328042697;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_13 += (((((0 ? ((min(2144416154, 0))) : ((var_5 ? 2328042697 : 0))))) ? ((min((arr_0 [i_0 - 2] [i_5 + 1]), 94))) : (2328042687 / var_1)));
                            var_14 = -7903811500074659171;
                            var_15 = (((((((max(-7136144090536429083, 2870428448858017944))) ? ((((arr_4 [i_0] [i_0] [i_0]) && -77))) : 24041))) ? 0 : (((((4472466334169878182 | (arr_1 [i_0] [i_0])))) ? 10447820537060462552 : (max(var_6, var_3))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, var_3));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 7;i_8 += 1)
            {
                {
                    var_17 = (arr_16 [i_8] [i_6]);
                    var_18 = (max(var_18, ((max((min(((max((arr_14 [i_7] [0] [i_8 + 1] [i_8 - 1]), 1014464619))), var_5)), (-2870428448858017945 / var_6))))));
                    arr_24 [i_6] [i_6] [i_8] [i_6] = (var_4 > 5);
                }
            }
        }
    }
    #pragma endscop
}
