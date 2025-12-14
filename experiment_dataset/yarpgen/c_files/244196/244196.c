/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = ((-var_0 ? 7864320 : ((~(arr_2 [i_0])))));
                var_13 = 254;
                arr_6 [i_1] [6] [i_1] = 20;
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_14 = ((!(((~(arr_4 [i_2] [i_2] [i_2]))))));
        arr_11 [i_2] |= (arr_2 [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_15 = (((arr_1 [i_4]) ? (((~4266609270540357609) ? 4266609270540357601 : var_5)) : (min(-1856184321, 7069524343923606368))));
                        arr_20 [i_2] [i_3] [i_3] [i_3] = 12;
                        arr_21 [i_3] [i_3] = ((!(-2147483647 - 1)));

                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            arr_25 [i_6] [i_5] [i_3] = (arr_10 [i_3]);
                            var_16 = 12639830888134206318;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_17 = 25436;
                            var_18 = (~4266609270540357616);
                            var_19 = (((arr_7 [6]) ? 4510169638591150739 : 12));
                        }
                        arr_29 [i_5] = var_5;
                    }
                }
            }
        }
        arr_30 [9] = var_7;
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_20 ^= (~0);
            arr_35 [i_9] &= (--225);
        }
        var_21 ^= 8866844798650886421;
        var_22 = arr_32 [i_8 + 1];
    }
    #pragma endscop
}
