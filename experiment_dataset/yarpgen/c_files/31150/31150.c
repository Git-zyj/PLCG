/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [0] [i_3] [4] [4] [4] = (!198);
                                var_10 = (((((7962 ? (min(var_7, var_5)) : 119))) ? (((((-(arr_7 [0] [i_2])))) ? ((59550 ? var_2 : -9929)) : -5985)) : ((((var_3 ? 5985 : (arr_1 [i_0] [i_3])))))));
                                var_11 = ((+(((-567816938708876469 < 1679244444688152720) & -3721))));
                            }
                        }
                    }
                }
                var_12 = ((((arr_2 [i_0 - 1] [i_0 - 1] [i_1]) / (arr_2 [i_0 - 3] [i_1] [i_1]))) / (((((arr_6 [i_0] [i_0 - 1] [i_0] [i_0]) != var_2)))));
                var_13 = min((arr_5 [i_0 - 3] [i_0 + 1] [i_0 - 1]), (min(((max(9928, (arr_6 [i_0] [i_0] [i_0] [i_0])))), (max(5986, -1679244444688152720)))));
                var_14 = ((((min((arr_8 [i_0 - 1] [i_0] [i_1]), var_2))) ? (((var_7 != (arr_7 [i_0 - 2] [i_0 - 3])))) : (!4642353516570684762)));
            }
        }
    }
    var_15 = ((((-1 != (!0)))));
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_17 = (max(var_6, (arr_14 [i_5] [i_6])));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_19 [0] = ((!(arr_14 [i_5 + 2] [i_5 + 1])));
                    var_18 = (3639151390682878001 / 9928);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_19 = var_4;
                    var_20 = ((!(arr_22 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2])));
                }
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    var_21 = (((0 <= 10) == 212));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_22 = 4642353516570684762;
                                var_23 = (((arr_18 [2] [i_10] [3]) + ((212 ? 10726 : -30307))));
                                var_24 = ((var_7 ? (~var_3) : (arr_22 [i_10 + 2] [i_10 + 2] [i_10] [i_5])));
                                var_25 = (((((-7880005024341857643 ? (-9223372036854775807 - 1) : -1679244444688152720))) ? (((var_1 + (max(var_7, (arr_22 [i_5] [8] [i_9] [7])))))) : (max(((min(var_6, (arr_29 [13])))), ((-1679244444688152720 ? (arr_18 [i_5] [i_11] [9]) : (arr_15 [19] [8] [i_9])))))));
                                var_26 = ((~(((-5991 + 2147483647) >> (48 - 31)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_35 [i_5] [19] [i_9] [i_5] [8] = ((5860050341052926733 ? (!var_3) : 18446744073709551615));
                                arr_36 [i_12] [i_6] [i_6] [i_12] [6] = (arr_21 [i_5]);
                            }
                        }
                    }
                }
                arr_37 [i_5] = (!(((-(arr_21 [i_5 - 1])))));

                /* vectorizable */
                for (int i_14 = 1; i_14 < 18;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            {
                                var_27 = (((arr_17 [i_15 - 2] [i_14 + 2] [i_14 + 2]) ? var_6 : (((arr_32 [i_15] [i_14] [6]) ? -7880005024341857643 : (arr_40 [0] [i_15] [16])))));
                                var_28 = -26498;
                                arr_47 [i_5] [i_6] [2] [i_15] [i_16] = (((((!(arr_13 [i_16])))) & (arr_22 [i_5] [3] [i_5] [i_14 + 2])));
                            }
                        }
                    }
                    arr_48 [i_5] [i_6] [12] [i_14] = ((!((!(arr_25 [i_6] [i_14])))));
                }
            }
        }
    }
    var_29 = (((var_8 ? var_8 : (var_1 ^ var_8))));
    #pragma endscop
}
