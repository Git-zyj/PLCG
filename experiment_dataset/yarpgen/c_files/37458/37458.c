/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (min(((var_11 + (0 - 8639991773890754931))), ((min(-var_13, 475273895)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 = ((-(arr_1 [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 ^= (var_4 < 475273896);
                        arr_10 [i_0 - 2] [i_1] [i_2] [i_3] = -3092249433;
                        var_20 = (-828310014742969840 ? 9223372036854775807 : 3092249432);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_13 [1] &= (~3319797506227309411);
        arr_14 [i_4] [i_4] = ((((((arr_11 [2] [2]) ? 628214339 : var_5))) ? (475273895 & 20410) : var_2));
        var_21 = (arr_11 [i_4] [i_4]);

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_17 [14] [14] [i_5] = ((((4152796670 ? -475273892 : 1))) ? 65535 : var_13);
            var_22 = (!0);
            var_23 ^= (((arr_15 [i_4] [i_5] [i_5]) / ((0 ? -1 : var_8))));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_24 = 20405;
            arr_20 [i_4] [6] = (((((arr_11 [10] [i_6]) ? var_7 : 65535)) / 31242632));
        }
    }
    var_25 = (max(var_16, 32767));
    #pragma endscop
}
