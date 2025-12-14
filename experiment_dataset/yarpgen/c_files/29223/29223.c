/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 7051838844340466338;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_13 = -67;
                            var_14 = -1;
                            arr_12 [i_0] [i_1] [i_1] [i_1] = (max((max((arr_11 [i_0] [i_2] [i_3 + 1] [i_3 + 3] [i_3 + 1]), 6295838743160713264)), 72));
                        }
                    }
                }
                var_15 = 6295838743160713296;
            }
        }
    }
    var_16 = var_12;
    var_17 = ((2523191050948218954 ? ((max(var_1, var_8))) : ((-((2545182878 ? -6718379445209419914 : 75))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_18 = (max(var_18, ((max(((((~75) <= ((var_0 ? (arr_15 [i_4]) : (arr_14 [i_4] [i_5])))))), 1757899193537929813)))));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_19 = -var_0;
                                var_20 ^= 1628052179;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_21 = (max(var_21, -54));
                                var_22 = (((((arr_26 [i_4] [i_5] [i_4] [i_11 - 2]) ^ (~1018329504479355030))) >> (((~var_2) ? (arr_20 [i_10] [i_4]) : ((~(arr_17 [i_4] [i_4] [i_4] [i_4])))))));
                                var_23 = (arr_16 [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            {
                var_24 = ((3429372792 ? -1523200318 : 2545182864));
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            arr_41 [i_12] = (!-657691857);
                            arr_42 [i_12] [i_12] [i_13] [i_14 - 1] [i_15] = max(((~(var_1 * -73))), var_12);
                            arr_43 [i_12] [i_13] [i_14 + 3] [i_15] = (((!-1) ? 72 : (~var_9)));
                            var_25 = (min((arr_29 [i_12] [i_13] [i_14 + 3] [i_15] [i_12] [i_14 + 1]), 2866289324));
                            var_26 = (arr_33 [i_14 + 1]);
                        }
                    }
                }
                var_27 = (~11319427501956821872);
            }
        }
    }
    #pragma endscop
}
