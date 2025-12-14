/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((5 ? 250 : 16)))));
                var_17 = (max(((-1 ? 41 : 16)), ((-((((arr_1 [10] [10]) > 6941622665485817684)))))));
                arr_6 [i_0] [i_0] [i_0] = (max(((((arr_4 [i_1 - 1] [i_1 - 4] [i_1 + 3]) ? (arr_4 [i_1 - 4] [i_1] [i_1 + 3]) : 0))), (arr_5 [i_0])));
                var_18 = 7663986703899515475;
                arr_7 [i_0] [i_0] [i_0] = (!-25);
            }
        }
    }
    var_19 ^= ((!((max(20, 0)))));

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_3] [i_5 - 1] [4] [i_6] = 42447;
                                arr_23 [17] [5] [i_4] [i_4] [i_4] = ((-(arr_20 [i_5 + 1] [i_4])));
                            }
                        }
                    }
                    var_20 += -25;
                    var_21 = ((1 ? (~124) : 0));
                }
            }
        }
        var_22 = (12130 ? (min(var_3, var_13)) : var_9);
        arr_24 [3] = ((var_0 & ((((arr_10 [i_2] [i_2]) & (arr_11 [i_2]))))));
    }
    #pragma endscop
}
