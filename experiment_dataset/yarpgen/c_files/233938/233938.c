/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_18 = ((-(arr_1 [i_0 - 3])));
            var_19 = (((-(arr_0 [i_1]))));
            arr_4 [14] [i_1] = (((((~var_5) & (15313417265947342606 ^ -1))) << (min(4, 1208090803))));
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [1] [i_2] [i_2 - 1] [10] = (((--1208090804) / (arr_7 [8] [i_2] [i_0])));
                    arr_11 [i_2] = ((((36028788429029376 << ((((15020 ? 1208090803 : var_5)) - 1208090773)))) != 12342899395998843721));
                    var_20 ^= (((((arr_5 [i_3] [i_2] [i_0]) ? (arr_3 [12]) : var_17)) * 163));
                    var_21 ^= (min(((min((arr_7 [i_3] [i_3 - 1] [i_2 - 1]), var_8))), var_15));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = var_14;
        var_22 *= ((-(18446744073709551615 > 6)));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_23 = 36028788429029376;
        var_24 = (arr_18 [0]);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_25 = (((((arr_18 [i_6 + 1]) >= (arr_18 [i_5]))) || (arr_16 [i_5] [i_6 + 1])));
                    var_26 = (!22807);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_27 ^= ((1 % (min((~-22791), (~var_10)))));
                        arr_33 [i_5] [1] [i_5] [i_5] [3] &= (arr_19 [i_5]);
                        var_28 -= ((((((-(arr_30 [i_5] [i_5] [22]))))) ? (arr_29 [i_5] [i_8 + 2]) : ((((max(1452635938, var_4))) ? (arr_24 [i_5] [i_8] [i_10]) : var_5))));

                        for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_29 ^= (((((~(((!(arr_21 [i_5] [i_8] [i_9]))))))) || ((((0 % (arr_21 [6] [i_8] [i_9])))))));
                            var_30 ^= ((2842331357 ? 183 : 18410715285280522239));
                            var_31 = ((~(arr_28 [20] [23] [i_11])));
                        }
                        for (int i_12 = 2; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            var_32 = (((arr_25 [i_10] [2] [8]) * var_16));
                            var_33 = (min(var_33, 9));
                            arr_39 [18] = (arr_31 [18] [i_10] [i_9] [i_5]);
                            arr_40 [i_9] = var_4;
                            var_34 = (max(var_34, (((-((-(((arr_34 [i_5] [i_8] [i_8] [i_9] [i_10] [i_12]) + (arr_29 [i_10] [i_9 - 1]))))))))));
                        }
                        var_35 *= (((10928379463082611522 >= (arr_35 [i_9] [i_9] [i_8 - 1] [5]))));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
    {
        arr_44 [21] = ((((max(((var_0 ? (arr_29 [1] [i_13]) : var_10)), ((((arr_16 [i_13] [i_13]) << (((arr_27 [13] [i_13] [i_13]) + 112)))))))) ? ((-(min((arr_21 [17] [i_13] [15]), (arr_29 [i_13] [i_13]))))) : ((min((((!(arr_24 [i_13] [11] [i_13])))), (-127 - 1))))));
        var_36 = (arr_32 [i_13] [6] [i_13]);
        var_37 = (((arr_35 [i_13] [i_13] [23] [i_13]) ? 1 : (min(((201 ? var_13 : (arr_36 [i_13] [11] [14] [i_13] [i_13]))), (((var_15 != (arr_20 [i_13] [i_13]))))))));
    }
    var_38 = (var_4 == (var_10 != var_7));
    #pragma endscop
}
