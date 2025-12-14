/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = (min(18446744073709551615, 1));
                                var_19 = (((18446744073709551602 <= 127) != (min(18446744073709551615, (arr_9 [i_3] [i_3] [16] [i_3 + 1])))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_0] [i_2] [i_2] = (max(-127, (min((18446744073709551615 / 1), (((4294967295 ? (-127 - 1) : (-127 - 1))))))));
                    var_20 = (min((min((-3556020783123000847 == -118), (max(-127, var_14)))), (((!((max(var_12, 125))))))));
                }
                var_21 = ((~(arr_5 [i_0] [i_1 + 1] [i_0] [i_0])));
            }
        }
    }
    var_22 = ((!(((((min(1, var_14))) ? (-127 - 1) : var_11)))));
    #pragma endscop
}
