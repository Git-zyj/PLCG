/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_20 = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 |= ((arr_4 [i_0 + 1] [i_0 - 2]) ? (min(15685, (min(var_9, 103741682)))) : (~var_17));
                    var_22 |= 7080949251492205040;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_18 [1] [i_4] [2] [i_6] = -25;
                            var_23 = ((24 ? (max(var_12, 7080949251492205046)) : 7080949251492205040));
                        }
                    }
                }
                var_24 *= -7080949251492205036;
                var_25 = ((+(max((!638628632), var_13))));
            }
        }
    }

    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        var_26 |= var_15;
        var_27 = (var_16 % var_15);
    }
    #pragma endscop
}
