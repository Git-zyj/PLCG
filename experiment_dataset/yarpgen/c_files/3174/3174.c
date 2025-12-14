/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_11 *= ((~((-(arr_1 [i_0])))));
        arr_2 [i_0] [i_0 - 1] = ((-(474504788 == 14)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_12 = ((min(((min(474504788, var_1))), (min(var_9, 3407791597)))) <= ((var_9 * (43 <= var_6))));
            arr_8 [i_1] [i_1] = (((((max(-54, (-9223372036854775807 - 1))) + 9223372036854775807)) >> (var_8 + 73)));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        var_13 = (((((((arr_9 [17]) ? var_1 : var_0)) ^ ((var_1 ? (arr_11 [i_4]) : var_7)))) < (arr_10 [i_1] [i_3])));
                        arr_15 [i_1] [i_3] [i_4] [i_4] [i_4] [i_5 + 1] = ((((((var_2 || var_3) * (~var_10)))) ? (((var_5 ? var_2 : (arr_12 [i_5 + 1])))) : (((var_7 / var_8) ? var_6 : (arr_3 [i_5 + 1] [i_1])))));
                        var_14 *= ((~(max(var_8, var_3))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_22 [i_1] [i_7] [i_1] [i_1] [i_1] = ((+(((474504788 + -56) >> (((min(var_7, (arr_12 [i_3]))) - 1300326950))))));
                        var_15 *= ((((((((arr_19 [i_6] [i_3] [i_6] [i_6] [i_3]) << (var_0 - 1173561938)))) ^ ((~(arr_3 [i_3] [i_3]))))) | 30));
                        arr_23 [i_1] [i_7] [i_7] = (((~var_10) <= (arr_5 [i_3] [0])));
                        var_16 = (arr_9 [i_7]);
                    }
                }
            }
            arr_24 [i_1] [i_1] = ((var_5 ? (((((var_1 ? var_2 : (arr_13 [i_1] [i_3] [i_3] [i_1] [i_3])))) ? ((((arr_17 [i_1] [i_1] [i_1] [i_1]) - var_5))) : ((var_10 ? var_9 : var_4)))) : (((min((arr_19 [i_1] [i_3] [i_3] [i_1] [i_3]), var_8))))));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_17 *= (((((((arr_13 [i_1] [i_8] [i_9 + 3] [i_9 - 1] [i_10]) ? var_1 : var_2)) + 2147483647)) << (((min((var_10 ^ var_7), ((-474504788 ? 18446744073709551615 : var_9)))) - 1298590743))));
                        arr_33 [i_1] [i_1] [11] [i_10] [i_9 - 1] = (min((~var_10), (((arr_16 [i_9 - 2] [i_9 + 2] [i_9 + 2]) ? (arr_32 [i_9 + 2] [i_9] [i_9] [i_10]) : var_3))));

                        for (int i_11 = 4; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_18 = ((((((13 ? var_3 : var_5)) | (var_0 > -117)))) ? ((((!(var_10 / var_9))))) : (min((((var_10 ? var_3 : (arr_4 [i_1])))), var_9)));
                            var_19 = (((((var_10 ? 14644 : var_8))) ? (~-var_2) : ((9223372036854775807 ? (var_6 >= var_6) : (var_10 ^ var_0)))));
                        }
                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            var_20 -= (((var_1 ? var_0 : var_5)));
                            arr_38 [i_1] [i_8] [i_8] [i_10] [11] = (!var_10);
                            var_21 = (max(var_21, (var_7 * 1)));
                            var_22 = ((((((arr_10 [i_1] [i_12 - 3]) ? var_7 : (arr_6 [i_8] [i_10])))) ? -474504759 : var_1));
                        }
                        var_23 = (max(var_23, var_6));
                    }
                }
            }
            var_24 = (((((var_1 ? (arr_1 [i_1]) : (arr_1 [i_1])))) ? var_1 : ((((var_9 < 15184631017773240362) < (min(var_7, (arr_26 [i_1] [i_1]))))))));
            var_25 = ((((max(-var_9, ((min(-1, var_1)))))) ? -77 : (arr_31 [i_8] [i_8] [i_1] [i_1])));
            arr_39 [i_1] = var_4;
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 19;i_15 += 1) /* same iter space */
                    {
                        arr_47 [i_14] [i_13] [i_13] [i_14] = ((9498 / var_4) + ((var_10 ? var_0 : var_3)));
                        var_26 += (var_2 << var_6);
                    }
                    for (int i_16 = 2; i_16 < 19;i_16 += 1) /* same iter space */
                    {
                        var_27 -= 15184631017773240362;
                        var_28 |= var_0;
                    }
                    var_29 ^= (min((((((var_7 << (var_4 + 3712049129586850760)))) ? ((-27736 ? var_4 : (arr_40 [i_1] [i_13] [i_13 + 2]))) : var_6)), var_10));
                    var_30 = (((max(var_9, var_3)) << ((((((arr_7 [i_13 + 1] [i_13]) ? 9498 : var_7))) ? 50 : ((40914 ? var_1 : (arr_21 [i_14])))))));
                    var_31 = (((max(var_7, var_7))) & (~var_4));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 21;i_18 += 1)
            {
                {
                    var_32 = ((var_5 / (max((arr_37 [i_1] [1] [18] [19] [17]), var_3))));
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 20;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            {
                                arr_60 [i_1] [i_18] [i_18] [i_19] = (max((((arr_16 [i_1] [i_17 + 2] [i_18 - 1]) ? (max((arr_49 [i_1] [i_17 + 1] [i_18 - 1] [i_19] [i_1] [i_20]), var_2)) : -8679723703351221992)), (arr_57 [i_17] [i_17] [i_17 + 1] [i_18] [i_17])));
                                var_33 += (~(min(((min(var_7, var_0))), var_3)));
                                var_34 -= ((((((arr_19 [i_19] [i_19] [i_19] [i_19 - 1] [i_19 + 2]) ? (arr_37 [i_18] [i_17] [i_19 - 2] [i_17 - 1] [i_17]) : (arr_6 [i_17 + 2] [i_18 - 1])))) ? ((3262113055936311253 ? 255 : var_4)) : (((arr_19 [i_19 + 2] [i_19 + 2] [i_19 + 2] [i_19 - 2] [i_19]) / var_3))));
                            }
                        }
                    }
                }
            }
        }
        arr_61 [i_1] = (max(((-27743 ? var_1 : ((var_4 ? var_1 : var_9)))), (((((var_3 ? var_2 : var_10))) ? ((min(var_7, var_4))) : (var_4 | var_9)))));
        arr_62 [i_1] [i_1] = (((((~(arr_17 [i_1] [i_1] [i_1] [i_1])))) <= (((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_7 : (arr_27 [i_1] [i_1] [i_1])))));
    }
    /* LoopNest 3 */
    for (int i_21 = 2; i_21 < 14;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 15;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 13;i_23 += 1)
            {
                {
                    arr_71 [i_23] = (((!var_4) >> (var_2 - 21060)));
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 0;i_25 += 1)
                        {
                            {
                                var_35 = (((~var_4) ? (((((var_8 ? 0 : -9499)) * ((var_4 ? (arr_19 [i_21 + 1] [i_22] [i_23 + 2] [i_24] [i_25]) : -474504789))))) : (min(var_6, (((arr_25 [i_24] [i_23 + 2] [13]) ? var_10 : var_3))))));
                                var_36 = (min(var_36, (((!((((~var_6) ^ var_9))))))));
                                arr_78 [5] [i_23] [i_25] = -2006581476;
                                arr_79 [i_21] [i_25] [i_25] [i_23] [i_21] = ((((((arr_7 [i_21 - 2] [i_21 - 2]) % (arr_72 [i_21 + 1] [i_21] [i_23 - 1] [i_23 + 2] [i_23 - 1] [i_23])))) ? (((((arr_36 [i_22]) & var_8)) >> ((((var_8 ? var_3 : var_5)) - 2031150450098162554)))) : ((((!(((73 ? 0 : var_1)))))))));
                            }
                        }
                    }
                    arr_80 [i_23] [i_23] [i_21] = (((((-(arr_67 [i_23] [i_23 + 1] [i_23 - 1])))) ? ((var_3 ? var_9 : var_0)) : var_0));
                }
            }
        }
    }
    #pragma endscop
}
