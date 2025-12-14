/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = 1851;
                                arr_15 [i_0] [i_0] [i_1 - 2] [i_1] [i_3] [i_3] [i_1] = 1;
                                arr_16 [i_0] [i_0] [i_0] [0] [i_1] [i_0] [i_0] = (((((max(1850, (arr_4 [i_0] [i_2 + 1] [i_4])))) ? (!63684) : 1851)));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_7 [i_0]);
                                var_13 *= ((15503 ? var_0 : 208));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 6;i_5 += 1)
                    {
                        var_14 = (((var_11 ? var_7 : var_1)));
                        arr_20 [i_1] [i_2] [i_1] = 1851;
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        arr_23 [8] [i_2] [i_1] [5] = (arr_6 [i_6 - 2] [i_1 - 1] [i_1] [i_6]);
                        var_15 -= (((arr_5 [i_2] [i_1 - 1] [i_2 + 1] [i_2]) & (arr_5 [i_2] [i_1 + 1] [i_2 - 1] [i_6])));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            var_16 = (max(var_16, ((((min((((~(arr_12 [1] [1] [i_2] [i_7] [i_8])))), (((arr_7 [i_0]) ? (arr_25 [i_1] [i_2] [i_1]) : var_1)))) + (arr_10 [i_2]))))));
                            arr_30 [i_8 + 1] [i_1] = (min(65, var_3));
                        }
                        for (int i_9 = 4; i_9 < 8;i_9 += 1)
                        {
                            arr_33 [i_9] [i_1] [7] [i_0] [i_9] [i_1] = ((1 | ((-(arr_8 [i_0] [i_1])))));
                            arr_34 [i_0] [i_1] [i_1] [i_2 - 1] [i_7] [i_7] [i_1] = -29457;
                        }
                        arr_35 [i_1] [i_7] [i_2] [i_1] = (arr_18 [i_7] [i_2] [i_1 + 3] [i_0]);
                        arr_36 [i_1] [i_2] [i_2] [i_7] = -87;
                        arr_37 [i_1] [i_1] = (arr_29 [i_0] [i_1] [i_0] [i_2] [i_7] [i_7]);
                    }
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    var_17 = ((((-(((63679 < (arr_18 [i_0] [i_0] [i_0] [i_0])))))) >= (arr_38 [i_1])));
                    var_18 = (min(var_18, (arr_27 [i_0] [i_1] [i_10] [4] [i_0])));
                    var_19 = (min(var_19, ((min(((((((arr_7 [i_0]) ? (arr_22 [6] [i_0] [i_1] [i_10]) : var_0))) ? (~63668) : (((arr_13 [8] [i_0] [i_1] [i_1] [i_10]) ^ var_9)))), (((1900 ? (max(-1, (arr_21 [i_10] [i_1]))) : -1982002041))))))));
                    var_20 -= ((((min((arr_24 [i_1 + 3] [i_1 + 3] [i_1] [i_1 - 2]), 15776173331556962845))) ? (arr_24 [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 2]) : 235));
                }
                var_21 -= (((max(86, ((1 ? -73 : 9101992665620708449)))) ^ (((var_2 & ((-(arr_18 [i_0] [i_0] [i_1] [i_1]))))))));
            }
        }
    }
    var_22 -= ((!((((((5 ? -1741327083 : var_7))) ? ((min(61, -1))) : var_8)))));
    var_23 -= ((var_8 ? var_4 : var_1));
    #pragma endscop
}
