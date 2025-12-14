/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [11] [11] [i_3] [i_3] = (((((94 || 94) || (arr_7 [i_0 - 2] [i_3 - 2] [i_2 + 1] [i_2 + 2]))) && (((((min((arr_9 [i_0] [i_0] [i_0] [i_3]), 162))) >> (((max(-1, 1973637581)) - 1973637561)))))));
                            var_13 = (max(var_13, (arr_4 [i_0] [i_2 + 1] [i_3 - 1])));
                        }
                    }
                }
                var_14 = (max(var_14, ((((1973637558 && 1) - var_11)))));
                arr_12 [i_0] = (min(-1973637575, 1));
                arr_13 [i_1] [7] = (((20 / -13591303697705668116) || ((((var_2 ^ var_9) ? (((arr_5 [i_0 - 2]) ? var_1 : 79)) : (((var_1 ? var_4 : 1))))))));
                var_15 = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
