/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((1 << (840619607 - 840619594)))))) + ((((min(840619617, -1))) ? -3454347680 : 15560))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 += (((arr_2 [i_0]) < var_15));
        arr_3 [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : var_15));
        arr_4 [i_0] = ((!(arr_2 [i_0])));
        arr_5 [i_0] = (((arr_1 [i_0]) < (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_21 = 3454347661;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = (((-2665836830921567932 * 1) - (!var_4)));
            var_23 = (max(var_23, (((~(arr_0 [i_1 - 1] [i_1 - 2]))))));
            arr_10 [i_1] [i_2] = 1737409951253939104;
            arr_11 [i_2] = (((-(arr_9 [i_1 + 1]))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_23 [i_5] [i_5] [i_5 + 2] [i_6] = ((((((arr_14 [i_1] [i_3] [i_6]) ? 8191 : var_16))) ? (((arr_21 [i_6] [i_4] [i_4] [i_3] [i_1]) ? var_4 : (arr_17 [i_4] [i_3] [i_4 + 3] [i_5] [i_4] [i_4]))) : 840619634));
                            var_24 += (((arr_16 [i_4 - 2]) / -2665836830921567932));
                        }
                    }
                }
            }
            var_25 += ((3454347671 ? var_10 : (!var_4)));
            arr_24 [i_1] = (((arr_16 [i_1]) - (arr_18 [i_1 - 1] [i_3] [i_1 - 1] [i_1 - 2] [i_1])));

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_27 [i_3] [i_7] = (-9223372036854775807 - 1);
                arr_28 [i_7] [i_3] [i_7] = (arr_6 [i_1 - 2]);
                var_26 = ((-15561 - (arr_26 [i_1 - 1] [i_1] [i_1 - 1] [i_1])));
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_27 = (max(var_27, ((((var_4 <= var_11) ? 44912 : var_4)))));
                var_28 = (((arr_14 [i_1 - 1] [i_1] [i_1 - 1]) ^ 1));
                arr_32 [i_8] [i_8] [i_3] [i_1] &= (((var_16 > 7) <= var_11));
            }
        }
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            var_29 ^= (!77);
            arr_36 [i_1 - 1] [i_9 - 1] [i_9 - 1] = ((-(arr_8 [i_1] [i_1 - 2])));
            var_30 ^= -var_4;
        }
    }
    var_31 = 1;
    #pragma endscop
}
