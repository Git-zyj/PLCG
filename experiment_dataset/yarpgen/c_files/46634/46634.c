/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = var_14;
    var_17 = var_8;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (max(((~(((arr_1 [i_0] [i_0]) ? var_7 : var_9)))), (arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_18 ^= (((arr_8 [i_0 - 2]) ? (arr_4 [i_0 - 3] [i_0] [i_0]) : (arr_8 [i_0 + 1])));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((var_4 / (arr_3 [i_2]))));
                    arr_10 [i_0] [i_0] [i_3] = (((arr_7 [i_0 - 2]) ? ((var_9 / (arr_8 [0]))) : (((1133611319 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_3 [i_3]))))));
                    var_19 = (-32 >= -102);
                    var_20 *= (((((28232 >> (7606841113410262168 - 7606841113410262167)))) ? 1339129781288401402 : 101));
                }
                var_21 = -var_9;
                var_22 = -var_1;
                var_23 &= ((-84 + (arr_5 [i_0 - 1] [i_0 - 2] [i_1 + 1])));
            }
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                var_24 = (max(var_24, (((var_2 ? var_13 : var_1)))));
                arr_15 [i_0] [i_1] [i_4] = (((var_13 | (arr_7 [i_4 + 2]))));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_25 = ((!(arr_13 [i_1] [i_0 - 1] [i_1 - 2] [i_0 - 1])));
                    var_26 = ((arr_4 [i_0 + 1] [i_0 + 1] [i_1 - 2]) < ((7 ? var_10 : (arr_1 [i_1 - 2] [i_1 - 2]))));
                }
                arr_20 [i_0 - 3] [i_0 - 3] [i_1] [i_5] = 17115;
            }
            for (int i_7 = 3; i_7 < 23;i_7 += 1)
            {
                var_27 ^= (arr_13 [i_7] [i_7 - 3] [22] [22]);
                arr_23 [i_0] [i_0] [i_7] = (((var_4 ? -18559 : var_14)));
            }
            arr_24 [i_0] = (((((arr_14 [i_1] [4] [19] [12]) < (arr_11 [13]))) ? (arr_14 [i_0 - 1] [i_0 - 2] [3] [23]) : (arr_8 [i_0 + 1])));
            var_28 &= (--9011);
            arr_25 [i_0] = ((~(var_4 < var_9)));
            arr_26 [6] = (((arr_0 [i_0 - 3]) / (arr_22 [i_0 - 2] [i_0] [i_0] [i_0])));
        }
        var_29 = (max(((+(((arr_6 [i_0] [i_0] [i_0]) ? (arr_22 [i_0] [4] [i_0] [19]) : (arr_3 [i_0]))))), (((var_6 == (~-52))))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_31 [i_8] = (min(41523, 9001));
        var_30 += (((arr_6 [i_8] [i_8] [i_8]) % (max(((25 ? (arr_28 [i_8]) : (arr_4 [i_8] [23] [i_8]))), (((var_1 || (arr_22 [i_8] [i_8] [i_8] [i_8]))))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_31 = var_1;
        var_32 = ((var_5 ? ((-334127034 ? var_6 : 112)) : (((-9223372036854775807 - 1) ? var_3 : var_8))));
        arr_36 [i_9] [i_9] = (((arr_32 [i_9]) || (((var_13 ? (arr_34 [i_9]) : -6390487403959680679)))));

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_39 [i_9] = ((var_9 <= (((((arr_35 [i_9] [i_9]) <= var_8))))));
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_45 [i_9] [i_10] [i_10] [i_12 + 2] &= (arr_41 [i_10]);
                        var_33 = (((arr_32 [i_9]) ? -18567 : (arr_32 [i_9])));
                    }
                }
            }
            var_34 = (arr_41 [i_9]);
            arr_46 [i_9] = ((~(arr_41 [i_9])));
        }
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_35 = 1;
        var_36 = ((((((max(var_13, -8981)) - var_3))) + (((max(3701774031, 8255596628260880821)) - (arr_32 [i_13])))));
        var_37 -= ((var_1 | -17) | (max((min((arr_47 [i_13]), (arr_44 [i_13] [i_13] [i_13] [i_13]))), ((max((arr_33 [i_13]), var_8))))));
    }
    #pragma endscop
}
