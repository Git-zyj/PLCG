/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 -= (!40121);
                                var_14 = (max(var_14, ((((((var_5 <= (var_6 < var_1)))) << (((max((arr_6 [i_0] [i_3]), var_4)) - 61449)))))));
                            }
                        }
                    }
                }
                var_15 = (max((arr_8 [i_0] [9] [i_0]), (max(49, -1))));
                var_16 ^= ((~((-(arr_0 [i_0 - 2])))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_17 = ((+(((arr_13 [i_5] [i_5]) - (arr_13 [i_5] [i_5])))));
        arr_16 [i_5] = 40137;

        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            arr_19 [i_5] = ((min((var_7 > -3), (min((arr_8 [15] [i_5] [i_6]), 1)))));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        arr_28 [i_6] [i_6] |= (~(max((~var_6), (arr_6 [i_5] [i_7]))));
                        var_18 = (max(var_4, (!-1)));
                        var_19 = (arr_5 [i_8] [i_8]);
                        var_20 -= ((!((((1 ? 12 : (arr_9 [i_8])))))));
                        arr_29 [i_5] [i_7] [i_7] [i_8] [i_9 - 2] = ((((!(arr_23 [i_6 + 1] [i_6 - 1] [i_8] [i_9 - 1] [i_9]))) ? (~-112) : (((var_10 < (~var_7))))));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_32 [12] [i_6] [i_10] [10] [i_6] [i_10] |= ((((((arr_7 [3] [i_8] [i_7]) ? (((arr_25 [i_5] [i_5] [13] [i_5] [i_5] [i_5]) ? (arr_5 [i_5] [i_10]) : var_3)) : (~var_2)))) ? (min(((var_3 ? (arr_9 [i_6]) : var_3)), -1)) : (((!(((~(arr_21 [i_5] [i_6] [i_7])))))))));
                        var_21 *= var_12;
                    }
                    var_22 = (max((max(((var_2 ? (arr_10 [i_6] [i_6] [8] [i_8]) : (arr_2 [i_8] [i_8] [i_8]))), (((arr_30 [i_5] [i_6] [4] [i_7] [i_8] [i_7]) ? 1 : var_0)))), ((max(53397, 45642)))));
                }
                var_23 = ((25414 ? 5825271287134579501 : (((min(3, -270))))));
                arr_33 [i_5] [i_5] [i_6] |= ((~(arr_13 [i_6 - 2] [i_6 - 2])));
                var_24 = (max(var_24, ((-(max((arr_18 [i_6 - 1]), (arr_18 [i_6 - 2])))))));
            }
            var_25 &= var_3;
            arr_34 [i_5] = 1;
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            var_26 += (((max(var_12, (arr_11 [i_5] [i_5] [i_5] [i_5] [i_11] [i_11])))) << (((!(arr_11 [i_5] [12] [i_11] [i_11] [i_11] [i_11])))));
            var_27 = (min(var_27, (((-995608230 ? 255 : -50)))));
            var_28 = (~(((max((arr_17 [i_5] [i_5]), var_4)))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    {
                        arr_42 [i_5] [i_5] [i_5] [i_5] [i_11] &= ((((arr_0 [i_13]) ? (arr_12 [i_11] [i_11] [i_12] [i_12]) : (arr_0 [i_11]))));
                        var_29 *= ((var_6 < ((min((arr_10 [i_11] [i_11] [i_12] [i_13]), (arr_10 [i_11] [i_11] [i_12] [i_5]))))));
                        var_30 = (max(var_30, ((min((((((1 << (8732028404741061080 - 8732028404741061056)))) ? (arr_22 [i_5] [i_11] [2] [i_12]) : -var_2)), ((max(var_9, (arr_37 [11] [i_5])))))))));
                        var_31 = (min(var_31, 2220265621947621072));
                    }
                }
            }
            var_32 = var_7;
        }
    }
    #pragma endscop
}
