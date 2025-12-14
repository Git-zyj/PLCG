/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (~var_17);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = arr_17 [i_1];
                                var_19 = 65213;
                                arr_18 [9] [i_2] [i_1] = 41;
                                var_20 ^= ((((~((259291277 ? var_17 : var_17)))) <= var_11));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_21 = var_11;
                            var_22 |= ((-var_7 ? ((1389455116 | ((min(32767, var_9))))) : -46));
                        }
                    }
                }
                arr_25 [6] |= ((~((((arr_5 [i_0 - 2] [i_1]) || var_5)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            var_23 = (max((((arr_6 [i_0 - 3] [i_1]) ? var_17 : var_6)), (arr_17 [i_1])));
                            var_24 = ((((((arr_8 [i_8 + 1]) ? (arr_8 [i_8 + 1]) : (arr_8 [i_8 + 1])))) ? ((1048575 & (arr_8 [i_8 + 1]))) : ((var_1 ? 1 : var_1))));
                            var_25 = (max((min((32768 & var_16), var_15)), var_10));
                            var_26 = (!(((-((1 << (var_17 - 1870667570)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                {
                    arr_38 [i_11] [i_10] [9] = 41504;
                    var_27 = (((max(var_7, (((arr_31 [i_11]) ? var_1 : var_0)))) < (((-(((1 > (arr_30 [i_9] [i_11])))))))));
                }
            }
        }
    }
    var_28 ^= (~var_3);

    for (int i_12 = 4; i_12 < 13;i_12 += 1)
    {
        arr_41 [i_12] &= (max(((var_8 ? var_2 : (var_8 / 1))), (((var_15 <= (arr_36 [i_12]))))));
        arr_42 [i_12 + 3] = (!1);
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 16;i_15 += 1)
                {
                    {
                        var_29 = (max(var_29, ((((arr_33 [i_15 - 1] [13] [i_12 - 1]) ? (!var_13) : ((((arr_32 [i_12] [i_13 - 1] [13]) + 1))))))));
                        var_30 += ((!(((-(arr_32 [i_14 - 2] [i_13 - 1] [i_12 - 3]))))));
                    }
                }
            }
        }
    }
    for (int i_16 = 1; i_16 < 8;i_16 += 1)
    {
        var_31 = (!var_9);
        arr_55 [i_16] = (((((-((1 ? (arr_51 [1]) : 1))))) / ((-var_15 ? -1 : 13466332813384765940))));
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {

        /* vectorizable */
        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {
            var_32 = (var_17 ? (((126 ? 1 : 839254345))) : (var_15 << var_9));

            for (int i_19 = 0; i_19 < 15;i_19 += 1)
            {
                var_33 = ((259291258 ? var_0 : var_16));
                var_34 = 4294967265;
            }
        }
        /* vectorizable */
        for (int i_20 = 3; i_20 < 14;i_20 += 1)
        {
            arr_66 [i_17] [i_17] [i_17] = var_16;
            var_35 *= (((var_2 ? 9223372036854775807 : var_13)) >= ((((259291258 == (arr_44 [i_17] [i_20] [i_20]))))));
            var_36 = var_9;
        }
        for (int i_21 = 0; i_21 < 15;i_21 += 1)
        {
            arr_69 [i_21] = var_14;
            var_37 = ((!(((4035676019 ? (arr_48 [i_17] [i_17] [i_17] [i_21] [i_21] [i_21]) : (((11708592969191551425 ? var_11 : var_0))))))));
        }
        var_38 &= (((((arr_36 [2]) ? (~var_0) : 6738151104518000185))) ? (((~6738151104518000184) ? (((((arr_30 [15] [15]) || var_13)))) : 8388607)) : ((((~var_13) ? (arr_39 [i_17] [i_17]) : var_3))));
        var_39 |= ((-1346163259370873253 ? 11708592969191551437 : (((var_5 ? ((var_14 ? -1649413113 : 48519816)) : var_13)))));
    }
    #pragma endscop
}
