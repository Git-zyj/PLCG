/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_12 - 1023) + 37143)));
    var_19 = var_9;
    var_20 = (-((var_12 * (-1 > var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_21 *= (((((var_4 ? -90 : var_0))) ? ((((!(arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))) : 274877382656));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_22 = (max(var_22, (arr_5 [i_1 - 1] [i_3])));
                            var_23 = 18446743798832168959;
                            arr_8 [i_0] [i_1] [12] [15] [5] [i_1] = var_11;
                            arr_9 [i_1] = ((18446743798832168945 ? (((arr_4 [i_1 - 1] [i_1] [i_1 + 1] [i_2 + 1]) ? 4294966273 : 18446743798832168960)) : 4049292157));
                        }
                    }
                }
            }
        }
    }
    var_24 = 1023;
    #pragma endscop
}
