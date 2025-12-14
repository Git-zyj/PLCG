/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = ((var_1 ? 25378732 : (arr_0 [i_0] [i_0])));

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            var_16 = (!65535);
            arr_4 [i_0] [i_1] [i_1] = (arr_3 [i_0]);
        }
        var_17 += (12273414685048811605 <= 117);
        arr_5 [i_0] = arr_3 [i_0];
        var_18 = (min(var_18, (((var_10 <= ((4269588563 ? 312 : (arr_0 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_15 [i_2] = (arr_6 [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = (arr_18 [i_2] [i_3] [i_5] [9]);
                                arr_21 [i_2] [i_3] [4] [i_6 - 2] [i_6] [i_4] [i_3] = var_6;
                            }
                        }
                    }
                    arr_22 [i_2] [i_2] [6] [i_4] = (4208234780 - 4269588551);
                }
            }
        }
        arr_23 [i_2] [i_2] = ((-925713557 & (arr_18 [i_2] [i_2] [i_2] [i_2])));
        var_20 = ((!(25378745 >= 6173329388660740010)));

        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_33 [i_2] [i_7] [i_8] [16] [i_10] [16] [i_9] = (((arr_26 [i_7 - 1] [i_7 - 1] [i_7 - 1]) | (arr_7 [i_7 - 3] [i_2])));
                            arr_34 [i_2] [i_2] [i_2] [i_9] [i_2] [i_2] = var_10;
                        }
                    }
                }
            }
            var_21 = ((-(arr_2 [i_2] [i_2] [i_7 - 1])));
        }
    }
    var_22 -= (-(((((var_6 ? var_7 : 1967360058))) ? -var_8 : (var_13 || var_8))));
    var_23 = ((-126 > ((var_8 ? -var_13 : var_0))));
    var_24 ^= (((((132 ? 54191 : 65535))) ? 239 : var_5));
    #pragma endscop
}
