/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = var_3;
        arr_2 [i_0] = (-1 != 4294967295);
        var_20 -= (max(((((min((arr_0 [18]), var_11))) ? ((22838 ? -1 : 53010931)) : (~0))), ((~((min(var_13, 1)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                var_21 = (-127 - 1);
                var_22 = -6368;
                var_23 = (min(var_23, (arr_5 [12])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    var_24 = ((+(((arr_7 [i_3] [i_4 - 1] [i_5]) ? (arr_10 [i_3] [i_4 + 1] [i_5 + 1]) : ((max(-126, -2)))))));
                    arr_15 [i_5] [i_4 + 2] [i_4 + 2] [i_3] |= (-2147483647 - 1);
                    arr_16 [i_3] [i_4 + 3] [i_5] [i_3] = 53010931;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            {
                arr_24 [0] [i_7] = var_8;
                var_25 = (arr_4 [i_7] [i_7]);
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_26 = (arr_32 [i_10] [11] [i_9] [i_8] [i_8] [i_7] [19]);
                                var_27 ^= (arr_29 [i_6] [7] [i_6] [i_6]);
                                var_28 = 1350300360;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
