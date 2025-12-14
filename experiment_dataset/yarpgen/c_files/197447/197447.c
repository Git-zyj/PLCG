/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = -24841;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 ^= (16 / -3947198144386005258);
                                var_21 = (arr_2 [i_0]);
                                var_22 = (min((((arr_12 [i_0] [i_1] [7] [i_3] [i_4] [i_1]) ? (var_1 / 268435452) : ((~(arr_6 [i_0] [i_0] [i_0] [i_0]))))), ((~(max((arr_3 [i_0] [i_0]), var_5))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_1] = (min((((var_7 ? (((arr_5 [i_1] [i_1] [i_1] [i_1]) << (var_7 - 1386731468))) : 2147483647))), (min(var_9, (arr_11 [i_2] [i_1] [i_1] [i_0])))));
                    arr_16 [i_0] [i_0] [13] = ((((min((arr_1 [5]), ((var_17 ? var_18 : (arr_13 [6] [6] [i_1] [6] [6] [i_0])))))) ? (max(((127 >> (((arr_3 [i_1] [i_1]) - 163)))), ((((arr_13 [i_0] [4] [i_0] [i_0] [i_0] [1]) > 1386855972))))) : -14821));
                }
            }
        }
    }
    var_23 = ((min((min(2085, var_10)), (((-2147483634 ? var_19 : -1386855972))))));
    #pragma endscop
}
