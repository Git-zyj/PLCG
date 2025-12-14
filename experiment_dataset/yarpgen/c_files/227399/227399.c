/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(~817993654)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1] [i_2 + 1] [i_2] [i_2 + 1] = ((~(~-1)));
                            var_14 -= ((-((~((~(-32767 - 1)))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_15 = ((~(~23662)));
                    var_16 = ((!(((~((~(arr_5 [i_0] [i_1] [7]))))))));
                }
            }
        }
    }
    var_17 = ((~(!1)));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            {
                var_18 = ((!(((~(!var_8))))));
                var_19 = (min(var_19, (((-((-(arr_17 [12]))))))));
            }
        }
    }
    #pragma endscop
}
