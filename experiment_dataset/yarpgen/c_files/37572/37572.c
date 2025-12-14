/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (max((arr_1 [i_1]), (max((((var_7 >> (var_6 + 100683710)))), ((var_15 ? -113 : var_1))))));
                arr_4 [i_1] = (min(var_15, ((-((0 ? var_11 : var_2))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 ^= 113;
                                var_18 ^= 5996836603033176982;
                                var_19 -= (max(-113, 5));
                                var_20 = (max(var_20, (((~(arr_10 [i_1] [i_1 - 1] [2] [i_1 - 1]))))));
                                var_21 -= var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(33554431, (((!(((var_4 ? -113 : 113))))))));
    #pragma endscop
}
