/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((((var_7 ? var_8 : var_3)) > var_1))));

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_14 = ((((((var_8 ? var_3 : (arr_2 [i_0])))) ? -var_4 : (arr_1 [i_0 + 1]))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_2] [i_2] [i_3] [i_0] = 1;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_15 ^= (min((((arr_6 [i_4] [16] [i_0]) ? var_7 : (arr_1 [i_1]))), var_5));
                            arr_17 [i_1] |= (((arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] [13]) | (~-47)));
                        }
                    }
                }
            }
            arr_18 [i_0] [i_1] = (((((15740659283036782810 ? 4260968312 : -9223372036854775780))) ? var_3 : ((33998983 ? (-2195571995209110901 >= 236) : var_1))));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_16 *= (((min(((var_5 ? var_1 : var_7)), (arr_8 [i_5]))) / (arr_20 [i_0] [i_0] [i_0 + 1])));
            arr_22 [1] = ((((-127 - 1) ? ((8 ? 3864700612 : var_2)) : 3)));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_25 [i_0] = -5112331221127766240;
            var_17 = (max(var_17, (((-(max(33998984, ((max(3864700612, (arr_8 [i_6])))))))))));
            var_18 = (max(var_18, ((((min(var_4, (arr_5 [i_0 - 3] [i_0 - 2])))) ? ((21023 ? 39927 : 16125)) : (((arr_21 [i_0 - 3] [i_0 - 1]) / var_5))))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_33 [i_7] [i_8] = (max((arr_16 [i_9] [i_7] [i_7] [i_7] [i_0]), 15));
                            var_19 = (min(var_19, (((((118 ? (~var_10) : (var_0 / var_9))) * var_6)))));
                            var_20 ^= ((min((arr_0 [i_0 - 3]), (arr_0 [i_0 - 3]))));
                            var_21 = 115;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_22 = (min(var_22, -var_10));
            var_23 += (max((arr_6 [i_10] [12] [19]), (((var_5 ? var_5 : 2195571995209110895)))));
            arr_36 [5] &= (arr_7 [i_10] [i_10] [i_0] [i_0]);
            var_24 += (((((((min((-2147483647 - 1), var_5))) ? -11459026021996962545 : (arr_27 [i_0 - 3] [i_0 - 1] [i_0 - 2])))) ? ((var_3 - ((((arr_9 [1] [i_10] [4] [4]) + (arr_2 [i_10])))))) : (((72 - 164) ? 3038582944600958270 : (((var_6 ? var_5 : (-2147483647 - 1))))))));
            arr_37 [i_0 - 1] = (-(arr_29 [i_0 - 3] [i_0 - 1] [8]));
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 7;i_11 += 1)
    {
        var_25 += var_8;
        var_26 *= ((1 ? 103 : (((arr_28 [i_11] [22] [i_11]) ? var_9 : var_11))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    var_27 |= var_9;
                    arr_47 [6] [i_11] [i_11] [i_11 + 2] |= ((-9 ? (arr_21 [i_12] [i_13]) : (arr_21 [i_12] [i_13])));
                    var_28 = (max(var_28, ((((var_3 == var_1) ? (arr_43 [i_13] [i_13] [i_13]) : (~var_7))))));
                    arr_48 [i_11 + 4] [i_12] [i_13] [i_12] = ((-6681463463293453929 ? 164 : -1));
                    arr_49 [10] [i_12] [9] [i_11] = ((-((var_3 ? (arr_42 [i_12] [i_12]) : var_11))));
                }
            }
        }
    }
    #pragma endscop
}
