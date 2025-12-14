/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_0));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (max(-1665371152, 8770055154361536687));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [9] = var_8;
                        var_11 = (arr_1 [i_1]);
                        var_12 = (arr_10 [i_0] [i_0] [i_2] [i_3]);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_13 = ((-((((((arr_2 [i_0] [i_0]) & (arr_5 [i_0] [i_4] [i_4])))) ? (((arr_13 [i_0] [i_4] [i_4]) ? var_7 : (arr_2 [i_0] [11]))) : (arr_9 [i_0] [6] [6])))));
            var_14 = (max(var_14, var_4));
            arr_15 [i_0] = var_7;
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_15 = (min(var_15, ((((((max((max(1, 8704)), (min(var_9, var_0)))))) - (arr_16 [i_0]))))));
            var_16 = var_3;
            var_17 = (arr_1 [i_0]);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_18 = (arr_0 [i_7]);
                        arr_23 [i_5] [i_5] [i_5] [i_5] = ((((arr_20 [i_5] [i_0] [i_5]) + var_2)));
                        var_19 = -8687;
                    }
                }
            }
            var_20 -= max((arr_16 [i_0]), (arr_19 [i_0] [i_0]));
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_21 ^= (((-2147483647 - 1) ? 12208 : 49503151));
            arr_26 [i_0] [i_0] = (32750 & 32767);
            var_22 = var_6;
            var_23 = (min(((((~(arr_20 [i_0] [i_8] [i_8]))))), (arr_17 [i_0])));
        }
        arr_27 [i_0] = (((!(((-(arr_9 [5] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_31 [i_9] = var_7;
        var_24 = (min(var_24, var_8));
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        arr_35 [i_10] = arr_7 [18] [18] [i_10] [18];
        var_25 = var_9;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_26 = (max(var_26, (((9676688919348014928 ? ((var_5 ? (arr_36 [i_11] [i_11]) : 4294967295)) : (((arr_37 [i_11]) ? var_6 : (arr_37 [i_11]))))))));
        var_27 = (min(var_27, (((195 ? (arr_36 [i_11] [i_11]) : ((var_5 ? 10 : var_3)))))));

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_28 = (max(var_28, (9676688919348014928 != 61560)));
            arr_40 [i_12] |= (((arr_39 [i_11] [i_12] [i_11]) ? var_6 : (arr_39 [i_12] [i_12] [15])));
            var_29 -= (arr_37 [i_11]);
            var_30 = (arr_37 [i_11]);
        }
    }
    var_31 = (((((~var_0) ? ((-31479 ? 2710050995 : var_5)) : (min(var_3, var_3)))) + var_4));
    #pragma endscop
}
