/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 *= (((((2061469317 ? 64475 : var_1))) ? (arr_11 [i_2 - 2] [i_2 - 1] [5] [i_3] [i_3] [i_3]) : 179));
                        arr_12 [1] [i_0] [i_1] [i_0] [i_0] = (38 < 64459);
                        var_16 ^= -1089330441;
                        var_17 ^= (((arr_7 [i_1] [i_2 - 3]) ? ((~(arr_11 [i_3] [i_2] [i_1] [i_0] [i_0] [i_0]))) : 21791));
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            var_18 = (-var_0 ? (arr_13 [i_4 + 3] [i_4 - 2] [i_4 - 2]) : ((((arr_14 [i_0] [i_0]) == 43))));
            var_19 ^= ((-(arr_9 [i_4] [i_4] [10] [i_4 - 2] [i_4 + 2])));
        }
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            var_20 = (arr_1 [14]);
            arr_18 [i_0] [15] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
            var_21 = var_0;
        }
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        var_22 = (min(1403483125, (max(-1171218907, var_7))));
        var_23 |= ((-625979546 <= (arr_20 [i_6 + 1])));
    }
    #pragma endscop
}
