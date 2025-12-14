/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 = (min(var_19, (((!(((-556377463 ? 229513704 : (arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_20 = (min(var_20, ((((((var_17 ? 0 : 32768))) < (arr_1 [i_0 + 1]))))));
                        var_21 = var_15;
                    }
                    var_22 += (~-229513704);
                    arr_12 [i_0] [i_0] = ((var_8 ? -229513705 : var_10));
                    var_23 = (!1);
                }
            }
        }

        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            var_24 = (((arr_3 [i_4 + 1] [i_0] [i_0 - 2]) / (arr_3 [i_4 - 1] [i_0] [i_0])));
            var_25 = (arr_7 [i_0 - 2] [i_4]);
        }
        var_26 &= (!(arr_10 [i_0 - 1]));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_27 -= (((min(3922612714, 25101)) ^ (((((min(7523718019700583900, 19))) ? ((~(arr_18 [i_5]))) : (arr_18 [i_5]))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                var_28 |= ((~(!-5145555880513533852)));
                                var_29 *= (min(var_4, (((arr_32 [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9]) ? (arr_26 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 1]) : (arr_30 [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                arr_38 [i_7] = ((-15601 ? ((((((arr_19 [i_10] [i_6] [i_5]) ? 28 : var_3))) & ((7261352350545662750 ? 17793781300624491937 : var_7)))) : ((-((62286725 ? (arr_29 [i_5] [i_5] [i_5]) : 18446744073709551597))))));
                                var_30 = ((-(652962773085059678 * 584480947)));
                                var_31 = arr_20 [i_7 - 2];
                                var_32 = ((-(((arr_32 [i_10 - 1] [i_10 - 1] [i_6] [i_6] [i_5]) / (min(634416110, 652962773085059679))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 14;i_15 += 1)
                {
                    {
                        var_33 = (min(33554431, ((min(41, (arr_18 [i_15 + 1]))))));
                        var_34 = (arr_26 [i_13] [i_14] [i_13] [i_15 - 1] [i_13] [i_13]);
                        var_35 = ((((var_3 ? (arr_42 [i_14 - 3]) : (arr_42 [i_14 - 1]))) - (min((arr_42 [i_14 - 3]), 1994556409))));
                    }
                }
            }
        }

        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            var_36 = (min(var_36, ((min(17793781300624491937, (!-32503))))));
            arr_51 [i_12] [i_16] = ((((arr_20 [i_12]) % var_18)));
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            for (int i_19 = 4; i_19 < 16;i_19 += 1)
            {
                {
                    var_37 = ((((!(((var_6 ? 35724 : 33554431))))) ? (min(1994556409, 652962773085059679)) : (((0 ? 43045 : (arr_57 [i_19 + 2] [i_19 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        for (int i_21 = 2; i_21 < 19;i_21 += 1)
                        {
                            {
                                var_38 = var_13;
                                var_39 = (((~(arr_30 [i_21 + 1] [i_19 - 1] [i_19] [i_19] [i_19]))));
                            }
                        }
                    }

                    for (int i_22 = 3; i_22 < 19;i_22 += 1)
                    {
                        arr_70 [i_17] [i_17] [i_17] [i_17] = ((((-(arr_60 [i_18])))));
                        arr_71 [i_22] = (arr_37 [i_17] [i_17] [i_18] [i_17] [i_19] [i_22]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
