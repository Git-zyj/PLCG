/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_3));
    var_21 ^= var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = var_0;
                    var_23 = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_24 = var_4;
                                arr_13 [i_4] [i_3] [i_4] [i_4] [i_4] [i_0] [i_0] = -69;
                                var_25 = (3561059353087910029 * 7);
                                var_26 = (((var_4 + var_12) + (var_14 / var_3)));
                            }
                        }
                    }
                    var_27 = 0;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_28 = -15;
                    arr_22 [i_5] [i_6] [i_7] = 102;
                    var_29 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
