/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 *= (min(var_11, (((-(arr_4 [i_1] [i_1] [i_1]))))));

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        var_18 = (max(var_18, (((min((arr_9 [8] [8] [i_0 - 2] [i_1 - 2] [18] [i_3 + 1]), -6651684217084634436)) << (((arr_9 [i_0] [i_0] [i_0 + 1] [i_1 - 4] [i_1] [i_3 - 1]) - 9198743478672452523))))));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_4] = (((!var_0) < (arr_10 [i_0] [i_1] [i_0] [i_3] [i_0])));
                            var_19 = (min(var_19, (((((min(0, (arr_10 [1] [i_1] [i_2] [i_3 - 1] [i_4])))) != ((~(arr_6 [i_0] [i_0] [14] [i_3 - 1]))))))));
                        }
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            var_20 *= (((((-9223372036854775807 - 1) ? 114 : 114))) ? var_11 : ((min(((min(167, 0))), ((0 ? (arr_4 [i_3] [i_0] [i_0]) : (arr_13 [5] [i_2] [5])))))));
                            var_21 = (max(((-(arr_11 [i_1] [i_1]))), (min(9223372036854775807, 0))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_22 = (!1);
                            var_23 = (min(var_23, var_11));
                        }
                        arr_21 [i_0] = (arr_18 [i_0 + 1] [i_2 - 1] [i_3] [i_3 - 1]);
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [18] [i_1] [12] [i_7] &= (max(1, ((114 ? ((max(var_4, 1))) : (max(1, 4325717766134704696))))));
                        var_24 = (min((min((((var_0 || (arr_7 [i_0] [i_1] [i_1])))), -5438952257160465899)), ((max((1 <= 23354), (min((arr_1 [12] [i_0]), var_15)))))));
                        var_25 -= (arr_5 [4] [i_2 - 1] [4]);
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] [i_0] [i_8] [i_8] [i_9] [i_9] = ((!(((arr_23 [i_2] [15]) != (arr_18 [16] [16] [12] [i_9])))));
                            var_26 -= 1;
                            var_27 = (max(var_27, (((~(arr_23 [i_1 - 4] [i_1 - 4]))))));
                            var_28 |= (((arr_26 [i_8 - 1] [15] [i_8 - 1] [9]) ? (arr_26 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8]) : (arr_26 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_29 = (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            var_30 = (max(var_30, (arr_34 [16] [i_2 - 1] [i_1] [i_1] [12])));
                            arr_35 [i_0] [i_0] [i_0] [7] [i_8] [i_8] [i_0] = (((arr_26 [i_1 - 2] [i_8 - 1] [i_10 - 1] [i_0 - 2]) ? -23355 : (arr_26 [i_1 - 4] [i_8 - 1] [i_10 - 1] [i_0 - 2])));
                        }
                        arr_36 [i_0] [i_0] [4] = ((-((((max(var_2, var_13)) >= 1)))));
                        var_31 ^= ((~(((arr_26 [11] [i_1] [i_2] [i_8]) ? ((68 ? var_16 : (arr_19 [i_1]))) : (arr_0 [i_0 - 1] [i_0 + 1])))));
                        arr_37 [i_0] [i_0] [i_1] [1] [i_2] [i_8] = (((((!(arr_3 [i_0])))) / (max((arr_12 [1] [i_0] [i_1] [0] [i_8] [19] [i_8]), (arr_5 [i_2 + 3] [i_2 + 3] [i_0])))));
                    }
                    var_32 = (((-(arr_14 [i_0 + 1]))));
                    var_33 = ((-(((arr_5 [i_0] [i_1] [i_0]) * (arr_5 [i_0] [i_1] [i_0])))));
                    var_34 = 4325717766134704676;
                }
            }
        }
    }
    var_35 = ((var_2 > ((var_9 ? (~-14092) : -1))));
    #pragma endscop
}
