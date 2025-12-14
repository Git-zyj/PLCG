/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_10 = var_3;
            arr_6 [i_1] [i_1] [i_0] = (((arr_1 [i_0 + 1]) <= ((32761 & (arr_4 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_2] [i_2] [i_0] = (((arr_9 [i_2]) ? (-32760 / 19395) : -var_2));
            var_11 = (min(var_11, ((((~-1) ? var_4 : (~28510))))));
            var_12 ^= (~var_5);
        }
        var_13 = (max(var_13, (-1 | -32762)));
        var_14 = (((((var_9 ? (arr_7 [i_0] [i_0] [i_0]) : var_4))) ? (arr_5 [i_0 - 4] [i_0 - 2] [i_0 + 3]) : -23));

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_15 ^= ((((((arr_4 [i_0]) < 31))) >> ((((var_7 ? var_3 : (arr_5 [i_0] [i_0] [i_0]))) + 2890))));
            var_16 = ((!(((29108 ? 13129 : -4954)))));
            var_17 = (min(var_17, (arr_14 [i_3])));
            arr_15 [i_0] [i_0] = arr_8 [i_0] [i_0] [i_0];
        }
        arr_16 [i_0 - 1] = (arr_8 [i_0 - 2] [i_0 - 3] [i_0 - 3]);
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 8;i_6 += 1)
            {
                {
                    var_18 ^= (((((arr_22 [i_6 + 1] [i_6 + 1] [i_6] [i_6]) / var_8)) < (23598 == 31)));
                    var_19 ^= (max((((arr_18 [i_6 - 3] [i_6 - 2]) ? -9895 : (arr_8 [i_6 + 1] [i_6 + 1] [i_6 - 2]))), ((-28106 ? 32761 : 0))));
                    var_20 = (~16907);
                }
            }
        }
        var_21 = (((((var_7 ? var_4 : 3715)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_28 [i_8] [i_7] = (-15272 - -8119);
                    var_22 = (((((arr_7 [i_8] [9] [i_4]) ? -1 : var_0)) / (~-18720)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_23 *= -30410;
                                var_24 = ((((max((arr_22 [i_10] [i_10] [i_8] [i_9]), 9894))) ? ((4160 ? (arr_1 [i_10]) : -1)) : ((-5325 ? (arr_14 [i_4]) : var_1))));
                                arr_35 [2] [i_7] [i_8] [i_8] [0] [i_10] [i_10] = (((min(var_0, (~23598))) ^ ((~((~(arr_14 [i_4])))))));
                                var_25 ^= -18176;
                            }
                        }
                    }
                    var_26 = (max(var_26, (arr_19 [i_7] [i_7] [i_4])));
                }
            }
        }
        arr_36 [i_4] = 28371;
        var_27 &= (!18720);
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        arr_40 [i_11] [i_11] = ((-(arr_38 [i_11])));
        var_28 = -1;
        arr_41 [i_11] [i_11] = var_1;
        var_29 = ((!(arr_37 [i_11])));
    }
    var_30 = ((((26857 ? 4156 : -1)) ^ ((((var_7 ? var_1 : -5)) | var_7))));
    var_31 -= (((((((var_1 ? var_0 : var_7))) ? (var_3 / var_2) : var_2)) * -102));

    /* vectorizable */
    for (int i_12 = 4; i_12 < 18;i_12 += 1)
    {
        var_32 = ((var_2 > (arr_39 [i_12 - 2])));
        var_33 = (min(var_33, (((!(arr_38 [i_12 + 1]))))));
        var_34 = (-32767 - 1);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        arr_46 [i_13] = (arr_38 [i_13]);
        var_35 = (min(var_35, (511 == 18089)));
        arr_47 [i_13] [i_13] = 14827;
        var_36 -= var_8;
        var_37 |= arr_45 [i_13] [i_13];
    }
    #pragma endscop
}
