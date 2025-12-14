/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-20440 ? 254 : 1));
    var_15 = (min(var_4, (((var_0 - var_4) ? (var_6 || var_12) : ((var_2 ? var_11 : 1))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_16 = (18 & 253);
        var_17 = ((+(((arr_0 [i_0 + 1] [i_0 + 1]) * (arr_0 [i_0 - 3] [i_0])))));
        var_18 ^= ((((min((arr_0 [i_0] [i_0 + 4]), (arr_1 [i_0 - 1])))) ^ (((arr_1 [i_0 + 2]) ^ 1))));
        var_19 += ((-((~(((arr_0 [i_0] [i_0]) >> var_9))))));
        var_20 = (max((((arr_0 [i_0] [i_0]) ? ((max((arr_0 [i_0 + 2] [i_0]), var_0))) : ((1 ? -19 : var_2)))), (-1 % var_4)));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_21 += ((((min((max(61331, (arr_2 [5]))), ((((arr_1 [i_1 + 2]) && (arr_1 [0]))))))) > (((arr_3 [i_1 + 1] [4]) ^ (((!(arr_3 [i_1] [10]))))))));
        var_22 -= (arr_2 [i_1]);
        arr_5 [i_1] [i_1] = (max(0, (((arr_4 [i_1]) ^ 240))));
        var_23 ^= (((((min(140, 143))) ? 0 : -1)));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_24 = ((!(((-1 ? (arr_2 [i_2]) : (arr_2 [i_2]))))));
        var_25 = ((~(arr_8 [i_2])));
        arr_9 [16] = (((((~(arr_0 [i_2] [i_2])))) ? var_13 : (((var_11 >= (arr_1 [i_2]))))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    arr_20 [11] [i_3] [i_3] = ((((min((arr_8 [11]), (arr_6 [i_3])))) ? ((min(var_3, (arr_7 [i_3])))) : ((~(arr_17 [i_3] [i_3] [i_3] [i_3 + 1])))));
                    var_26 = (max(var_26, var_8));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_27 = (((var_4 ? var_1 : 1349)));
                                var_28 = ((((4193 ? 9 : (arr_2 [i_3 - 1]))) << ((((((10 ? 18 : 221)) << (((arr_7 [i_3]) - 49898)))) - 18411))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            arr_28 [i_3] [i_8] [i_3] = ((~((61333 ? (var_3 || 21) : (!107)))));
            var_29 = ((((((((arr_7 [i_3]) < (arr_17 [i_8] [i_3] [i_8] [i_8])))) - 64)) & (((((var_13 ? (arr_26 [i_8 - 1] [i_3] [i_3]) : var_7))) ? ((min((arr_13 [i_3] [i_3] [6]), 24))) : ((50343 / (arr_23 [9] [i_3] [i_8] [i_3])))))));
            var_30 |= ((var_8 || (((22 ? ((0 ? (arr_22 [i_3] [i_3] [14] [i_8]) : var_0)) : (arr_10 [i_3]))))));
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] = ((!((min(-27190, (min((arr_1 [i_3]), 1)))))));
                            var_31 = (((arr_7 [i_3]) ? (arr_3 [i_11] [i_3]) : (arr_33 [i_3] [i_9] [i_12])));
                            arr_40 [8] [i_9] [i_10] [i_11] [i_3] [i_11] [9] = -6;
                            arr_41 [i_3] [i_9] [i_10] [i_11] [i_3] = ((((min(var_0, var_10))) <= (253 || 65)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 14;i_14 += 1)
                {
                    {
                        var_32 = ((((233 ? 2 : 30410)) >= 65504));
                        arr_47 [i_3] [i_9] [i_3] [i_9] [i_14] [7] = ((!(((((max((arr_2 [i_14]), var_8))) ? var_11 : (((arr_18 [i_3]) ? 135 : (arr_2 [18]))))))));
                    }
                }
            }
            var_33 = (((((arr_10 [i_9]) != 13946)) || (arr_3 [11] [i_3])));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_34 ^= var_7;
            var_35 = (var_9 ^ var_10);
            var_36 += (((arr_34 [0] [10] [i_3 + 1] [i_3 + 1] [i_3 + 1]) > (~-8749)));
            var_37 ^= (arr_3 [16] [16]);
            var_38 = (((((var_3 ? (arr_15 [i_3] [13]) : (arr_19 [i_3])))) ? (arr_18 [i_3]) : var_5));
        }
        var_39 ^= (min(var_2, ((min((arr_1 [i_3 + 1]), var_8)))));
    }
    #pragma endscop
}
