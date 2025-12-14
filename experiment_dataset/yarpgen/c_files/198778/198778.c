/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = var_12;
        arr_4 [i_0] = ((var_1 ? 923206627 : (arr_3 [i_0])));
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_15 ^= var_9;
        var_16 = (arr_1 [i_1] [i_1]);
        var_17 = (max((var_2 * var_2), var_10));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_18 = (min(var_18, var_4));
        var_19 ^= ((3371760640 << (((arr_7 [i_2]) - 4120533019))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] [i_5] = ((3371760652 ? (arr_12 [i_3] [i_4]) : ((5409988447168323843 ? (((arr_3 [i_4]) ? var_4 : var_10)) : 923206648))));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_20 = 3371760640;
                        arr_21 [i_3] [i_5] [i_5] [i_5] [i_5] = ((923206659 * ((((var_8 ? var_8 : (arr_19 [i_3] [i_4] [i_5]))) * (((min(var_9, 1190))))))));
                        arr_22 [i_3] [i_5] = var_12;
                        var_21 ^= (((((min(923206627, 6141774005100306452)))) ? (~var_6) : (max(-923206652, (max(var_11, var_5))))));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_22 = (min(0, 255));
                            var_23 = (max((((arr_27 [i_3] [i_3] [i_5] [i_7] [i_8]) ? ((3371760640 << (var_11 - 560261132))) : (((923206659 ? var_6 : var_1))))), ((max(1, (((arr_24 [i_3] [i_4] [i_5] [i_3]) / (arr_0 [i_7] [i_8]))))))));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_5] |= arr_25 [i_3] [i_4] [i_5] [i_7];
                            var_24 = ((min(923206658, (((arr_19 [i_3] [i_4] [i_9]) & 3371760640)))));
                            arr_33 [i_3] [i_4] [i_3] [i_3] [i_3] = -var_4;
                            arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_6;
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_25 = var_11;
                            var_26 = (max(var_11, var_0));
                        }
                        var_27 ^= (((min(((-(arr_30 [i_3] [i_4]))), (arr_13 [i_7] [i_7]))) / 33974));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_28 = ((-6141774005100306447 & (((max(var_6, (arr_15 [i_4])))))));
                        arr_39 [i_3] [i_4] [i_5] [i_3] = (min((max((1 || var_11), ((923206652 ? var_1 : 18446744073709551608)))), (min((arr_37 [i_3] [i_3] [i_4] [i_3] [i_11]), 16))));
                        var_29 = (min((arr_35 [i_11] [i_3] [i_5] [i_4] [i_3] [i_3] [i_3]), (((var_4 / (min((arr_2 [i_5]), 3371760652)))))));
                        var_30 -= (((!(arr_35 [i_3] [i_4] [i_4] [i_4] [i_5] [i_5] [i_11]))));
                        var_31 = (min(var_31, ((((arr_30 [i_3] [i_3]) ? 1 : (min(923206655, ((((arr_36 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? 4095 : var_2))))))))));
                    }
                    var_32 -= (arr_38 [i_3] [i_3] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
