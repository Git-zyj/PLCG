/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [21] = (((arr_7 [i_0]) ? (arr_7 [i_0]) : (arr_7 [i_0])));
                    var_10 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (!var_0)));
                                arr_17 [1] [i_0] = ((-((var_2 ? (arr_10 [i_2] [i_3] [i_4]) : var_8))));
                                var_12 = (min(var_12, (((!(arr_1 [i_4]))))));
                                arr_18 [i_0] [i_1] [i_1] [i_0] [i_4] = (((arr_3 [i_0] [i_0] [i_0]) ? var_9 : (arr_9 [i_3] [i_2] [i_1] [i_0])));
                            }
                        }
                    }
                    var_13 ^= (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_2])));
                }
            }
        }
        arr_19 [i_0] = var_6;
        arr_20 [i_0] = (~127);
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_14 = ((!(~86)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {
                {

                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        arr_33 [i_5] [i_6] [i_6] [i_8 - 1] = ((-(((((var_8 ? var_3 : var_2))) ? ((min(var_7, var_0))) : ((24 ? 128 : 0))))));
                        var_15 -= (min((arr_0 [i_5] [12]), var_4));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_16 = (((((((arr_3 [i_5] [i_6] [i_5]) ^ (arr_24 [i_5] [i_6]))))) + (min(((var_0 ? var_2 : var_0)), -var_6))));
                        var_17 ^= (min((((((!(arr_35 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) ^ ((max((arr_8 [1] [1] [i_9] [i_9]), var_8))))), (!var_6)));
                    }
                    arr_36 [i_6] [i_6] [i_5] = (((min((arr_34 [i_7 + 3] [i_7 - 3] [i_7 - 3] [15] [i_7 - 3] [i_7 - 2]), 24))) ? ((~(arr_26 [i_7 + 1] [i_7] [i_7 + 1]))) : var_6);
                    arr_37 [i_5] [i_6] [i_7] [12] = (((((-95 ? -111 : 57329))) ? -551447802 : ((max(60, 6848)))));
                }
            }
        }

        for (int i_10 = 4; i_10 < 18;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 19;i_12 += 1)
                {
                    {
                        var_18 = ((arr_26 [i_12] [i_12] [i_12 - 3]) ? (arr_5 [2] [2] [i_11]) : (1 <= 4));
                        arr_48 [i_5] [i_10] [i_10 - 4] [i_10] [i_12 + 1] = (arr_23 [i_5]);
                        var_19 = (((max(((24 ? 110 : var_4)), 127)) % ((var_1 ? (max(var_1, (arr_45 [7] [i_10] [i_10] [i_5]))) : var_1))));
                    }
                }
            }
            arr_49 [i_10] [i_10 - 1] = (max(var_0, -var_6));
            arr_50 [i_10] = (-((((((arr_12 [i_10]) ? var_2 : (arr_9 [i_5] [22] [i_5] [i_5])))) - (arr_40 [i_5] [i_10] [i_10 - 1]))));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_20 += ((((min(((~(arr_42 [i_5] [i_13]))), (arr_7 [18])))) + ((min(var_4, (arr_45 [i_5] [12] [i_5] [i_5]))))));
            arr_53 [i_13] = (((((((((arr_35 [i_5] [i_13] [17] [i_5] [i_5] [i_13]) ? var_0 : var_5))) ? (max((arr_25 [i_13] [1]), var_5)) : (!594298672)))) ? (((-(arr_45 [i_5] [i_13] [9] [i_13])))) : (arr_41 [i_13] [i_13] [i_13] [i_13])));
            var_21 ^= ((max(((max((arr_43 [i_13] [i_13] [i_13] [i_13]), (arr_15 [i_5] [i_5] [i_5] [i_13] [i_13])))), (max((arr_43 [i_5] [i_13] [i_13] [i_5]), var_1)))) % (arr_5 [i_5] [i_13] [i_5]));
        }
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        var_22 = ((var_9 ? var_2 : (94 ^ var_8)));
        var_23 = (min(var_7, (arr_24 [i_14] [i_14])));
    }
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        arr_59 [i_15] = ((!(arr_55 [i_15])));
        var_24 -= (arr_29 [i_15] [4] [4] [i_15]);
    }
    var_25 &= ((var_9 + (((65535 ? 65535 : 32504)))));
    var_26 = var_9;
    var_27 = (128 >= 15435435076252227744);
    #pragma endscop
}
