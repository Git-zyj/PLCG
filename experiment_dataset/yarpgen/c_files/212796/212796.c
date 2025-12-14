/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_9;
                var_10 ^= 190;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_11 = 190;
                var_12 = 190;
                arr_12 [i_3] [i_3] = (max((var_5 ^ 39), 190));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_22 [i_4] [i_3] [i_4] [i_4] [i_3] [i_2] = 73;
                                arr_23 [i_2] [i_5] [i_4] [i_2] [i_5] [i_5] |= (((((var_8 << (((arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]) - 21))))) ? (!var_3) : (((arr_20 [i_2] [4] [i_4] [i_4] [i_6]) ? (~var_5) : 216))));
                            }
                        }
                    }
                    arr_24 [i_4] [i_4] [i_4] = ((var_6 && ((((((1 ? var_4 : 0))) ? (max(var_1, 3393446100)) : 39)))));
                    var_13 = (~14);
                    arr_25 [i_4] = (~231);
                    arr_26 [i_4] = var_0;
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_14 |= 4294967295;
                            var_15 = (((max((arr_30 [i_7 - 1] [i_7 + 2] [i_2] [16] [i_2]), (arr_30 [i_7 + 3] [i_7 + 1] [i_3] [i_3] [i_2])))) ? 3548163335 : var_4);
                            var_16 = 0;
                            var_17 = (max((arr_11 [i_2] [i_3] [i_2]), ((((max(1, (arr_7 [i_2]))) < (246 - var_9))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_18 = ((var_3 ? (!84) : ((var_0 ? (arr_21 [i_9 - 2] [i_10 - 1] [i_10] [i_12 - 2] [i_12 - 3]) : 202))));
                                arr_44 [i_13] [i_10] [i_11] [i_10] [i_9] = var_6;
                            }
                        }
                    }
                    var_19 = (!253);
                }
            }
        }
    }
    var_20 = (min(var_20, var_3));
    #pragma endscop
}
