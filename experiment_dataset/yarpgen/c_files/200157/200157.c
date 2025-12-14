/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 -= arr_9 [i_1] [1];
                    var_22 = ((~(((arr_0 [i_2]) ? (((arr_5 [i_2] [i_1] [5]) / var_18)) : (arr_8 [i_1] [1] [i_2] [i_0])))));
                    var_23 -= ((-(max((arr_4 [i_0]), var_17))));
                    var_24 = var_18;
                }
            }
        }
        var_25 = 16711680;
    }
    var_26 = (min(var_10, (((~(~var_6))))));

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_27 = (((arr_12 [i_3] [i_3]) ? ((~(arr_1 [i_5] [i_4]))) : (arr_11 [4] [i_4])));
                    var_28 = (min(var_28, (arr_11 [i_3] [i_3])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                {
                    arr_26 [i_3] [i_6] [i_7] [i_3] = ((-(arr_21 [i_7])));
                    var_29 -= ((((((16711677 ? 1 : 16711685)))) ? (((arr_0 [i_7 - 2]) ? 1 : (arr_0 [i_7 + 1]))) : (!var_0)));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_30 = (arr_28 [i_8] [i_8]);
        var_31 = (min(var_31, var_13));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_32 = var_4;
                    arr_39 [i_10] [i_10] [i_10] = ((((((arr_34 [i_9]) ? (arr_32 [7] [i_10]) : var_11))) ? -var_6 : (arr_28 [i_9] [i_10])));
                    arr_40 [i_9] [i_10] [i_9] [i_9] = var_4;
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_33 = ((!(arr_32 [i_9] [i_13])));
                                var_34 &= var_13;
                                var_35 ^= var_14;
                            }
                        }
                    }
                }
            }
        }
        var_36 *= (((!1) ? ((~(arr_32 [i_9] [i_9]))) : var_3));
    }
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 20;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 19;i_15 += 1)
        {
            {
                var_37 = (max((!var_8), ((~(arr_47 [i_15 + 1])))));

                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    var_38 = (min(var_38, var_10));
                    var_39 = ((var_5 || var_1) ? (((!(((var_16 ? (arr_45 [i_14] [i_16]) : (arr_28 [i_16] [i_14]))))))) : (((!(arr_47 [i_15])))));
                    var_40 |= ((((max((arr_54 [i_14] [i_14] [i_14 + 1] [i_15 - 1]), (arr_54 [i_14] [5] [i_14 - 1] [i_15 - 2])))) ? (((19052 ? -7205 : -16711678))) : (min(10245057088453370163, -1839405520))));
                    var_41 = (-3 ? ((122 - ((0 ? (arr_47 [4]) : (arr_54 [i_14] [i_15] [i_15] [i_14]))))) : (((arr_54 [i_15 + 2] [i_14 - 1] [i_14] [i_14 + 1]) >> (!var_19))));
                }
            }
        }
    }
    #pragma endscop
}
