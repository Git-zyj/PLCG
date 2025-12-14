/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [4] [12] |= (min((max(var_1, (arr_5 [i_2 + 2] [i_2 + 1] [i_2 - 1]))), (~63)));
                            var_11 += (((!1) ? (((((min(var_0, var_2))) ? ((236 ? (arr_7 [i_0] [i_1]) : (arr_4 [i_0]))) : (var_2 > 236)))) : ((~((var_7 ? var_9 : (arr_10 [i_1])))))));
                        }
                    }
                }
                var_12 = (max(var_12, ((max(4095, 120)))));
            }
        }
    }
    #pragma endscop
}
