/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-127 - 1);
    var_17 = ((var_7 ? var_15 : (max(((18446744073709551600 ? var_1 : var_1)), (38362 << 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = (min((((arr_3 [i_1]) ^ -9896)), -2));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_18 = (((var_6 != 1) > (max(((8811 ? 9892 : var_15)), ((var_0 ? 63265 : 1))))));
                            arr_9 [11] [i_1] [i_2] [i_2] = 27096;
                        }
                    }
                }
            }
        }
    }
    var_19 = (((max(-16131, 0))));
    #pragma endscop
}
