/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [2] = (arr_0 [i_0]);
        arr_4 [i_0] = ((var_3 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                var_16 -= ((-21 < (arr_11 [i_2 + 1] [i_2 + 2] [i_3 - 2] [16])));
                var_17 = arr_8 [i_2];

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_18 -= ((var_2 * (arr_8 [2])));
                    arr_14 [i_2] [14] &= (var_6 <= var_3);
                }
            }
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                var_19 = (~var_10);
                var_20 = (min(var_20, ((((arr_9 [i_2 + 1] [i_5] [i_5 + 2]) < 38)))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_21 = (min(var_21, 81));
                            var_22 = (min(var_22, ((((arr_20 [i_1] [i_2 - 1] [i_5 + 2] [i_5]) ? (arr_20 [i_5] [i_6] [i_5 + 2] [i_5]) : (arr_20 [i_1] [i_2] [i_5] [i_5]))))));
                        }
                    }
                }
            }
            arr_22 [i_1] [22] |= ((~(((119 || (arr_15 [i_2] [17]))))));
            var_23 = (min(var_23, 4));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_24 += arr_24 [i_1];
            var_25 = (((arr_6 [9] [i_8]) ? var_5 : var_0));
            var_26 -= (((arr_7 [6] [i_8] [i_1]) < var_12));
        }
        for (int i_9 = 2; i_9 < 23;i_9 += 1)
        {
            arr_29 [i_1] [i_1] [i_9] = (((arr_16 [i_1] [i_9 + 1] [i_9 - 2]) ? (arr_16 [i_9] [i_9] [i_9 - 2]) : (arr_16 [i_1] [i_1] [i_9 - 2])));
            var_27 = 85;

            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                arr_33 [1] [1] [i_1] [i_1] = var_6;
                var_28 = (min(var_28, (arr_8 [i_9])));
                var_29 ^= var_5;
            }
        }
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            var_30 ^= 56;
            var_31 = ((~(arr_11 [4] [i_11 - 2] [i_11 + 2] [4])));
        }
        arr_38 [i_1] = (!-125);
        var_32 = ((var_15 <= ((var_4 ? -80 : (arr_32 [i_1] [i_1] [i_1] [i_1])))));
        arr_39 [i_1] = arr_16 [i_1] [3] [i_1];
    }
    var_33 |= -3;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            {
                arr_46 [i_13] [i_13] = arr_27 [i_12];
                var_34 = (((((14 ? (arr_10 [i_13] [i_13] [i_12]) : (~-43)))) ? var_3 : (arr_0 [i_12])));
                arr_47 [2] &= min(var_1, (((28 && (arr_27 [i_13])))));
            }
        }
    }
    var_35 = var_10;
    #pragma endscop
}
