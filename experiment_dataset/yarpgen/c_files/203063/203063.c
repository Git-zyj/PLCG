/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [1] = 1066992574829641581;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 *= 599303565;
                                var_15 += 5004819292394292378;
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_1] = var_10;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_20 [i_5 + 1] [i_5] [i_2] [i_5] [i_0] = ((((((((17548 ? (arr_2 [i_2]) : -5004819292394292379))) ? ((5004819292394292378 ? 255 : 5004819292394292378)) : var_6))) ? ((((arr_11 [i_1] [i_1] [i_5] [i_6]) * (arr_16 [i_0] [i_0] [i_1] [i_0] [2] [i_6 - 2])))) : ((max((((arr_17 [i_6 + 3] [i_5] [i_5] [i_0] [i_0]) - (arr_18 [i_0] [i_0] [3] [10]))), ((max(1, (arr_4 [i_0] [i_6])))))))));
                                arr_21 [i_0] [i_0] [i_5] = ((((((arr_16 [i_1] [i_1] [1] [i_2] [i_1] [i_0]) / (arr_1 [i_0] [i_1])))) - -5004819292394292379));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((var_1 * (((max(3695663730, var_1))))));
    var_17 = var_4;
    #pragma endscop
}
