/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (max(var_15, var_1));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] [2] [i_1] = (-(max((var_11 / 25776), (var_9 * var_9))));
                                var_16 = (-2147483647 - 1);
                                var_17 = ((((0 ? (0 * var_13) : (min(var_1, 2147483630)))) < 15215));
                                var_18 = (((((min(var_3, -1584668617) == -786432)))));
                                var_19 = (max(var_19, (min(var_12, (33 & -17)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 -= ((((!((max(var_2, 1))))) ? (((-(64512 != 15229)))) : -15221));
                                arr_20 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0] = ((var_12 > (min((min(128, 0)), ((var_4 ? 536870912 : var_9))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        var_21 = ((-(-108 != 477593955)));

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_22 *= 13;
                            arr_32 [i_1] [i_1] [10] [i_7] [10] [i_9] |= ((16 ? 33 : (-1 * 248)));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_23 |= 0;
                            var_24 = (max(var_24, -1));
                        }
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_25 = (max(var_25, var_10));
                            arr_39 [i_0] [0] [i_0] [i_8] [i_8] [1] [i_11] = (!1554697479);
                            var_26 = var_7;
                            var_27 = var_4;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_45 [i_0] [i_1] [i_0] [i_12] = ((((1 ? 14581580338868960047 : 0)) % (((2147483647 << (14581580338868960063 - 14581580338868960063))))));
                                var_28 = 222;
                                arr_46 [i_0] [5] = (((1 ? -15245 : var_5)));
                            }
                        }
                    }
                    var_29 = (((((-119 ? 205 : var_1))) ? ((47807 ? 249 : 53519)) : 13));
                    var_30 *= ((2737 ? var_13 : var_9));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    var_31 = (min(var_31, var_13));
                    arr_51 [i_0] = var_0;
                    var_32 = (min(var_32, (~-15215)));
                    var_33 = (min(var_33, (((!(((-2 ? 25 : var_9))))))));
                    var_34 = (min(var_34, 1));
                }
            }
        }
    }
    var_35 = (min(46689, 21));
    /* LoopNest 3 */
    for (int i_15 = 2; i_15 < 15;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                {
                    arr_58 [8] [i_16] [i_15] |= (min(2021156703, (102 >= var_1)));
                    arr_59 [i_16] = (max(15215, -44));
                    arr_60 [i_16] [i_16] [i_17] = ((((((max(1, -86))) >= ((118 << (var_9 - 86)))))) * (((!(~65535)))));
                }
            }
        }
    }
    #pragma endscop
}
