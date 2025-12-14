/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = 16850476882930368527;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_4] = (((((var_5 ? var_2 : (var_17 ^ var_6)))) ? ((var_4 ? 4420 : var_3)) : (((-19694 <= (((-2147483647 - 1) ? (arr_4 [i_0]) : var_0)))))));
                                arr_14 [i_4] [i_3] [i_2] [i_4] [i_4] = (((((var_13 ? var_0 : ((450792546 ? var_3 : var_7))))) ? (arr_0 [i_0]) : ((var_12 + (((arr_12 [14] [i_1] [6] [i_3] [10]) - 1))))));
                                var_20 = var_8;
                            }
                        }
                    }
                }
                var_21 = 55;
            }
        }
    }
    var_22 = ((((-var_11 ? (var_8 / var_5) : var_9)) + ((((var_10 > (var_11 & var_1)))))));
    #pragma endscop
}
