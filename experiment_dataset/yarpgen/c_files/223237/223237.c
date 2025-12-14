/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = var_8;
        var_19 = (max(var_19, (((-(min((min(var_12, (arr_1 [i_0]))), (14577450662179832496 != -4))))))));
        var_20 |= ((((((!((((arr_0 [i_0] [i_0]) ? 3 : (arr_2 [i_0])))))))) != ((((min(65525, (arr_2 [i_0])))) ? var_14 : ((-(arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = 1;
                                var_22 *= ((-((-((max((arr_15 [i_4] [i_3] [i_4] [0]), 24)))))));
                                var_23 ^= (((((arr_16 [i_0] [12] [i_2] [i_0] [i_0] [12] [i_4]) && (((2061042773296176798 ? 24 : (arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_4])))))) ? var_17 : ((-(arr_0 [i_1 + 1] [i_1 + 2])))));
                            }
                        }
                    }
                    var_24 = ((!(arr_18 [i_1 - 1])));
                    var_25 ^= ((-(arr_17 [i_0] [i_0] [8] [i_1] [i_2])));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_26 ^= (!var_14);
                        var_27 -= 11346509073471207925;
                    }
                }
            }
        }
        var_28 = min((((arr_0 [i_5 + 1] [i_5 + 1]) ^ (arr_0 [i_5 - 1] [i_5 - 1]))), (arr_0 [i_5 + 3] [i_5 - 1]));
        var_29 |= (((((((var_6 ? (arr_14 [4]) : var_13)) * (arr_28 [i_5] [i_5] [i_5] [i_5] [i_5])))) ? var_7 : ((((((var_17 ? 3759259885 : (arr_3 [i_5]))) != 24))))));
        var_30 = 35912;
    }

    for (int i_9 = 4; i_9 < 21;i_9 += 1)
    {
        var_31 = ((4562657110772287589 ? var_17 : var_17));

        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            var_32 *= (((((((((-1776662134 == (arr_32 [i_9] [i_9] [i_10]))))) ^ 13261869594414691185))) ? (min(var_7, (((arr_33 [i_9]) ? var_11 : (arr_32 [i_9] [i_9] [i_10]))))) : ((((arr_32 [i_10 + 1] [i_10] [i_10]) ? var_17 : (arr_30 [i_9 + 1]))))));
            var_33 = (arr_33 [i_10]);
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_34 = 192;
            var_35 *= (arr_35 [i_9 - 2] [i_9] [20]);
        }
    }
    for (int i_12 = 1; i_12 < 9;i_12 += 1)
    {
        var_36 &= (((((arr_30 [i_12]) << (((-39 + 42) - 3)))) <= ((((((var_6 ? (arr_26 [i_12] [i_12] [i_12]) : (arr_12 [4]))) <= (var_2 ^ 43300)))))));
        var_37 = (max((arr_13 [i_12] [i_12] [1] [i_12] [i_12] [12]), 1));
        var_38 *= var_4;
    }
    var_39 = (max(var_39, (!var_6)));
    var_40 = var_7;
    var_41 |= (((3 || var_13) ? var_11 : var_13));
    #pragma endscop
}
