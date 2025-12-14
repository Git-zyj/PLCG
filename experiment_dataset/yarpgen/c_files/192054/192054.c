/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 ^= ((var_13 & ((1 ? -1 : 2096744698))));
                    var_15 = (arr_4 [i_1] [i_2]);
                }
            }
        }
        var_16 = ((+((((arr_3 [i_0] [i_0]) >= -1)))));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] = ((~(arr_10 [i_3] [i_3])));

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_14 [i_4] [i_4] = (arr_12 [i_3] [i_4] [i_4]);
            arr_15 [i_4] [i_3] [i_4] = ((-2096744699 ? (arr_10 [i_3] [i_3]) : (arr_13 [i_4] [2] [i_4])));
        }
    }
    var_17 = var_3;
    var_18 = (((0 ? var_6 : 0)));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_26 [i_5 - 1] [2] [i_7] [14] |= (46483 > 0);
                            arr_27 [i_5] [i_8] [i_7 - 3] = ((((((var_2 ? var_11 : -209050468)))) ? (((-var_5 != (31744 / var_8)))) : (-var_5 % -575872778)));
                            var_19 = ((0 ? ((-1 ? ((2096744698 ? 1 : (arr_24 [i_5 - 1] [i_8]))) : (!442408060))) : 2147483647));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_20 = 1;
                            arr_34 [i_5] [i_5] = ((~(arr_19 [4] [i_5 + 1])));
                            var_21 = ((~(2731452 | 2147483647)));
                            arr_35 [i_5] [i_5] [i_6] [i_6] [i_10] [i_10] = 2096744698;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_22 = -688452646;
                            var_23 *= var_10;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
