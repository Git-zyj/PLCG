/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = var_13;
        arr_2 [i_0] = (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_3] [i_1] |= (arr_9 [i_1] [i_1] [i_1]);
                        arr_14 [i_3] [i_3] = -946521262;
                        arr_15 [i_3] [i_3] [20] [i_4] = -2147483643;
                        var_21 |= (arr_6 [i_1]);
                    }
                }
            }
        }
        arr_16 [i_1] = 1761000494;
        var_22 *= (min((arr_5 [i_1]), (((arr_11 [i_1] [i_1] [i_1] [i_1]) / (arr_11 [i_1] [i_1] [i_1] [i_1])))));
        arr_17 [i_1] = (1761000489 ? ((14 ? 242 : ((233 ? 255 : (arr_4 [i_1] [i_1]))))) : (-50 != -2020797049));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = 173;

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_24 [i_5] [i_6] [i_5] = (-(arr_5 [i_6]));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_30 [i_5] [i_5] = (((arr_12 [7] [i_8 + 4] [i_8 - 3] [i_8 - 4] [i_8 - 4]) * (arr_12 [4] [i_8 + 2] [i_8 - 2] [i_8 + 2] [i_8 + 2])));
                        arr_31 [9] [22] [i_7] [i_6] [i_5] = arr_22 [i_5] [i_5] [21];
                    }
                }
            }
        }
        for (int i_9 = 4; i_9 < 24;i_9 += 1)
        {
            var_23 = (arr_19 [i_5]);
            arr_36 [i_5] [i_9] = ((250 * (arr_22 [i_9 - 3] [i_9 - 4] [i_9 - 3])));
            var_24 ^= ((146 || (arr_23 [i_5] [i_5] [i_5])));
        }
    }
    var_25 = var_1;
    #pragma endscop
}
