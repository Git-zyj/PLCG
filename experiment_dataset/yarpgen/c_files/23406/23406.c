/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_11;
    var_13 = ((!(((((min(1476286423, -29321))) ? 127 : var_0)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 ^= ((~((194 ? var_8 : var_6))));
            var_15 = (max(var_15, ((((var_11 >= var_2) ? (~var_11) : (((!(arr_0 [i_0] [2])))))))));
            arr_4 [3] [3] [i_0] = (arr_2 [i_0]);
        }

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_16 = (arr_1 [i_0]);
            var_17 = ((var_3 ? (arr_6 [i_0 + 1] [i_2 - 2] [i_2 - 1]) : (arr_6 [i_0 - 1] [i_2 + 1] [i_2 + 1])));
            arr_7 [i_0] = (((-(arr_0 [i_0 - 1] [i_0 - 1]))));
        }
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 4; i_4 < 9;i_4 += 1)
        {
            var_18 = 8736398854218307396;
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        {
                            var_19 = (((((((var_5 ? (arr_13 [i_4]) : var_8))) ? ((var_7 ? 79 : (arr_8 [i_6]))) : (max(211, 1989387563)))) <= ((((min((arr_3 [i_6]), (arr_13 [i_3])))) ? ((47195 << (((arr_14 [i_3 - 2] [i_4 - 2] [i_7 + 1]) - 3922338432)))) : (!var_2)))));
                            var_20 |= (max(var_4, (max((max((arr_20 [i_4 - 3]), var_2)), (((40880 ? (arr_10 [i_4] [i_6] [1]) : (arr_2 [i_6]))))))));
                            arr_21 [i_3 - 1] [i_4] [i_5] [i_6] [i_4] = ((!((248037933292493794 && (arr_0 [i_4 - 4] [i_7 + 3])))));
                            arr_22 [i_4] = (~-99);
                        }
                    }
                }
            }
            arr_23 [i_4] = (min((max(103, (min((arr_1 [i_4]), (arr_9 [i_4] [i_3]))))), (((!(var_4 >= -23135))))));
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            arr_26 [i_8] [i_3] [i_8 - 1] = ((var_9 ? (arr_17 [i_8] [i_8 - 1] [i_8] [i_3] [i_3] [i_3]) : ((min(var_0, (~var_3))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 9;i_10 += 1)
                {
                    {
                        var_21 = (arr_9 [i_8] [i_8]);
                        arr_32 [i_10] [i_8] [i_8] [i_3] = (max((((arr_20 [6]) - (arr_17 [i_3] [i_9] [i_9] [i_10] [10] [i_10 - 2]))), (((var_8 ? (((arr_27 [i_3] [i_9] [9]) ? var_6 : var_0)) : (((6 > (arr_25 [i_3 - 2] [i_9] [i_10])))))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 2; i_11 < 9;i_11 += 1)
        {
            var_22 = (arr_15 [i_3 - 1]);
            var_23 &= var_0;
            var_24 = (max(var_24, var_7));
        }
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            var_25 = (min(var_25, (((((max(27, var_8))) ? (~214) : ((62732 ? (arr_28 [i_3] [i_3] [i_12] [i_12 - 1]) : (arr_28 [i_3 - 1] [i_12] [i_12 - 1] [i_12 - 1]))))))));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 9;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    {
                        var_26 = ((((min((arr_28 [i_3 + 1] [i_3 - 2] [i_13 + 1] [i_13 + 1]), var_8))) ? ((-(~120))) : (((!((min(var_10, var_4))))))));
                        var_27 = (((-11 + 2147483647) << ((((135 ? (arr_44 [i_3 - 2] [i_3 - 2] [i_13 + 1] [i_14]) : 8306)) - 2308232245373298185))));
                    }
                }
            }
            var_28 = ((((5548 ? 40850 : -2147483635))) && ((min((arr_0 [i_3 + 1] [i_3 + 1]), (arr_0 [i_3 + 1] [i_3 - 1])))));
        }
        var_29 = 4961122611183604365;
        arr_45 [i_3] = (((arr_8 [i_3 + 1]) ? 9060602290640618507 : (min(1511, var_4))));
        arr_46 [i_3 + 1] = (min(((~(arr_44 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]))), ((max(((43 ? -19931 : -32762)), 1989387563)))));
    }
    #pragma endscop
}
