/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(min(1, (var_5 & var_11)))));
    var_17 |= var_2;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = ((((((max(var_10, 8))) != (var_14 - 4294967289))) ? ((((arr_1 [i_0]) ? var_0 : (arr_1 [i_1])))) : var_12));
            arr_7 [i_0] = (((((var_6 ? var_8 : 16)))));
        }
        arr_8 [i_0] [i_0] = 1253162497;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        var_18 = (arr_5 [i_0] [i_2]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_19 [10] [i_4 + 1] [i_0] [i_2] [i_0] [i_0] [i_0] |= (arr_10 [i_4 - 1]);
                            arr_20 [i_5] [i_3] [i_3] [i_4 + 1] = ((((4294967289 ? 36219 : (arr_1 [i_0]))) - var_13));
                            var_19 = (max(var_19, (--7)));
                            arr_21 [i_0] [i_3] [i_0] [i_0] [i_0] = (-(-8 < -28313));
                            var_20 = (min(var_20, ((((arr_16 [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4] [i_5] [i_5]) ? 4294967291 : (arr_16 [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_5] [5] [i_5]))))));
                        }
                        arr_22 [i_0] [i_3] [i_3] [i_4] = arr_11 [i_0] [i_0];
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_31 [i_6 + 3] [i_6 + 3] [i_6] = var_5;
                    arr_32 [i_6] = ((var_0 ? (min((arr_30 [i_6 + 1] [i_7] [7]), ((var_11 ? (arr_24 [i_6] [i_6]) : (arr_26 [i_8]))))) : (11 == var_0)));
                }
            }
        }
        arr_33 [i_6] = ((+((var_15 ? (arr_23 [i_6 + 4]) : (arr_23 [i_6 - 1])))));
        arr_34 [i_6] [i_6 + 3] = ((((var_0 & (arr_26 [i_6])))));
        arr_35 [i_6] = (i_6 % 2 == 0) ? (((((min(51971, (((var_5 ? var_8 : -27)))))) ? (((((23 << (((arr_25 [i_6]) - 30226)))) * var_0))) : (min(var_15, (arr_27 [i_6] [i_6])))))) : (((((min(51971, (((var_5 ? var_8 : -27)))))) ? (((((23 << (((((arr_25 [i_6]) - 30226)) - 19165)))) * var_0))) : (min(var_15, (arr_27 [i_6] [i_6]))))));
    }
    for (int i_9 = 3; i_9 < 7;i_9 += 1)
    {
        arr_38 [i_9 - 2] [i_9] = (((arr_36 [i_9 + 2] [i_9 + 3]) ? 17 : (((arr_29 [i_9 + 3] [i_9 + 3] [i_9]) ? (~var_7) : ((8 ? var_11 : -65536))))));
        arr_39 [i_9] [i_9] |= ((-(max((max(18446744073709551615, var_4)), (((arr_29 [i_9] [i_9] [i_9 - 3]) ? (arr_18 [2]) : var_7))))));

        for (int i_10 = 3; i_10 < 8;i_10 += 1)
        {
            var_21 = ((~(max(104, 4294967278))));
            arr_43 [i_10] = (var_14 && -10);
        }
        arr_44 [i_9] [i_9] = ((((((-(arr_18 [6]))))) ? (4294967289 == 33554431) : ((((-3 == (arr_16 [i_9] [i_9] [i_9] [i_9] [8] [i_9 + 3] [i_9]))) ? (arr_36 [i_9 + 1] [i_9]) : 9223372036854775803))));
        var_22 = (max(4194304, -9223372036854775804));
    }
    #pragma endscop
}
