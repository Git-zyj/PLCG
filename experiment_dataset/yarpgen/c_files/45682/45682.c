/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-var_8 || var_7);

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 = (arr_2 [i_0] [i_0]);
        arr_3 [i_0] = 1633459375;
        var_19 = (min(var_19, 1));
        arr_4 [0] [i_0] = (!-3115977536417722119);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_7 [1] [i_1] = var_6;
        var_20 = (min(var_20, var_13));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_21 = ((-(arr_6 [i_1 + 2])));
            arr_10 [i_2] [i_1] [i_1] = -var_8;
            var_22 ^= (arr_6 [i_1 - 1]);
            arr_11 [i_1] [i_1] = (arr_9 [i_1 - 1] [i_2]);
        }
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_23 = (max(((var_16 ? (arr_9 [i_3] [i_3]) : var_6)), (arr_13 [i_3])));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_16 [i_3] = (((((((arr_13 [0]) >> (2722056805 - 2722056774))) >> (((arr_5 [i_3]) - 3903109613)))) | ((((var_9 ? 2722056783 : 1572910513)) & (~-101)))));
            arr_17 [i_3] = var_8;
            var_24 = (((((((((arr_13 [i_3]) ? var_9 : var_0))) ? (arr_8 [i_4] [i_4]) : var_4))) ? -var_5 : ((-(arr_9 [13] [4])))));
            arr_18 [4] [i_4] = (var_5 % 2722056783);
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_25 = 32;

            /* vectorizable */
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                var_26 = (~((-(arr_8 [i_3] [i_5]))));

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_27 = (arr_23 [i_7] [i_7] [i_7]);
                        var_28 += (((arr_25 [i_6] [i_6 + 2] [i_6 + 2] [i_6 - 2] [i_6 - 3]) ^ (arr_26 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6 + 2])));
                        var_29 = (((var_14 - 32) ? var_2 : ((var_16 ? (arr_20 [8]) : var_1))));
                        var_30 ^= (((~var_9) ^ (~18)));
                    }
                    arr_27 [i_3] [i_3] [i_3] [i_3] = (~var_1);
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_31 = 2722056798;
                    var_32 = (((var_7 ? -64 : (arr_26 [1] [i_5] [i_5] [i_5] [i_5]))) == (arr_20 [i_3]));
                    var_33 = ((~(arr_20 [i_6 + 2])));
                }
                var_34 = (min(var_34, (((var_3 ? var_11 : -var_5)))));
                var_35 = ((~(arr_28 [i_6 - 3] [i_6 + 2] [i_6 + 2] [i_6 + 2])));
                var_36 = ((var_15 / (arr_29 [i_6 - 3] [i_6 - 3] [i_6 - 1] [i_6] [i_6] [i_6 - 2])));
            }
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                var_37 |= ((!(arr_21 [i_3])));
                var_38 = (min(((0 ? (arr_29 [i_10 + 2] [i_10 - 1] [i_10 - 1] [4] [i_10 + 1] [i_3]) : -32)), ((~(arr_29 [i_10 + 2] [i_10 - 2] [i_10 + 1] [i_10] [i_10 - 1] [i_5])))));
            }
            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                arr_36 [i_5] [i_5] [i_5] [12] = ((((max(var_15, 2722056783))) ? (arr_35 [i_11 - 2] [i_5]) : ((-(arr_35 [i_11 + 1] [i_5])))));
                var_39 = (max(var_39, (((0 && (arr_12 [i_3]))))));
                arr_37 [i_11 - 2] [i_5] [i_5] [i_3] = var_6;
                var_40 = (((var_16 - var_3) / (max(var_2, (arr_5 [i_3])))));
                arr_38 [i_11 + 1] [i_11 + 1] [i_11] [i_11] = var_8;
            }
            var_41 |= var_15;
        }
        var_42 = (max(-2722056803, (!192)));
    }
    #pragma endscop
}
