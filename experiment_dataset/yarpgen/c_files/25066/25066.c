/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_11 = ((~(((arr_1 [i_0]) ? 1164287554745022649 : 224))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] &= (min(((-(arr_7 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]))), (((arr_7 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]) ? (arr_7 [i_3 - 2] [10] [i_3 - 1] [i_3 - 2] [i_3 + 1]) : 65535))));
                        var_12 = (min(var_12, (((max(-2218183357328362688, var_7))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] = var_5;
                            arr_14 [2] [i_1] [i_0] [i_3] = 224;
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_13 = (min(var_13, 127));
        arr_17 [i_5] = ((((max((arr_12 [i_5]), var_10))) ? 1 : ((var_0 ? 2016074328 : (arr_12 [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_14 -= (min(-507791396, ((((arr_4 [i_5] [i_6] [i_5]) || ((max(1, -1))))))));
                    var_15 = (min(var_15, (+-3393508655022008755)));
                    var_16 = 3393508655022008754;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_17 = (max((min(((224 ? -3393508655022008755 : -3393508655022008768)), (arr_19 [i_5] [i_8 - 1] [i_8 - 1]))), (((~var_7) ? 3845 : (max(2218183357328362688, 30))))));
                    arr_28 [i_9] = ((536346624 ? -536346624 : 7013));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {
            {
                arr_33 [i_10] = 549755813824;
                var_18 = (((arr_26 [i_10] [i_10]) == (arr_22 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_10])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_19 = var_2;
                            var_20 ^= ((var_3 ? (~-2344974258072415385) : ((max(-1840932736, -10)))));
                        }
                    }
                }
                var_21 = (arr_6 [i_10] [i_10] [17]);
            }
        }
    }
    #pragma endscop
}
