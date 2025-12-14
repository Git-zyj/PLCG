/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((10231413254252866983 ? (1 * 8) : (arr_2 [i_1] [i_1])));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [19] [i_1] = (max(((((-(arr_10 [i_0] [14] [i_2] [i_2] [i_3] [i_0]))) - -var_9)), (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 4]) : 410561744836115042))));
                                var_13 = var_2;
                            }
                        }
                    }
                    arr_13 [i_0] [i_0 + 3] [i_0] [i_1] = -255;
                    var_14 = (max(var_14, ((((-(arr_5 [9])))))));
                    arr_14 [i_1] = (!-8);
                }
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] &= (((((var_2 ? (~var_3) : (arr_2 [i_0] [i_5 - 4])))) ? (((~(arr_9 [i_5 - 1] [i_0] [i_5] [i_0 - 4] [i_0])))) : (max((max(1, 10035681795156795674)), 98))));
                    arr_19 [i_1] = ((var_4 ^ ((~(arr_5 [i_5 - 1])))));
                    arr_20 [i_1] = ((-((-410561744836115048 ? (arr_9 [i_5] [i_1] [i_0] [i_0] [i_0]) : var_12))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    var_15 = (((arr_7 [i_1] [i_0] [i_6 - 1] [i_0 - 2] [i_1]) && (((var_6 ? (arr_21 [i_0] [i_1] [i_6]) : var_1)))));
                    var_16 = (min(var_16, (((var_0 ? (arr_11 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))));
                    arr_25 [i_0] [i_0] [i_1] [i_0] &= ((-(arr_0 [i_0 + 3])));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_35 [i_1] [i_8] [0] [1] [i_0] [i_0] [i_1] = ((-(((((-(arr_27 [i_1] [i_1] [i_1] [i_8])))) ? (arr_30 [i_0] [i_0] [i_0 + 3] [i_0 - 4] [i_0 + 3] [i_0 - 2]) : var_11))));
                                arr_36 [i_1] = (i_1 % 2 == 0) ? ((((((arr_3 [i_0 - 3] [i_1] [i_0 - 4]) + 9223372036854775807)) << (((arr_3 [i_0 - 3] [i_1] [i_0 - 4]) / var_10))))) : ((((((arr_3 [i_0 - 3] [i_1] [i_0 - 4]) + 9223372036854775807)) << (((((((arr_3 [i_0 - 3] [i_1] [i_0 - 4]) / var_10)) + 63)) - 62)))));
                                var_17 = ((1 & (((min(var_0, var_11))))));
                                arr_37 [i_7] [i_7] [i_1] [i_1] [i_7] [i_7] = 1;
                                arr_38 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_8] [i_1] = ((max(var_7, (arr_27 [i_0 + 3] [i_8 - 2] [i_1] [i_0 + 3]))));
                            }
                        }
                    }
                    var_18 = (arr_15 [9] [i_1] [i_0 - 2]);
                    arr_39 [i_1] [i_0] [i_0] [i_1] = var_3;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    var_19 = (max(var_19, (arr_24 [i_10] [i_10] [i_10] [2])));
                    var_20 &= ((((((min(92, var_2))) ? var_0 : var_0)) | ((max((min(var_1, var_8)), (~410561744836115026))))));
                    var_21 = ((-((8589934591 ? 1 : -6369966670696836929))));
                    arr_48 [i_10] [15] [i_12] = (arr_24 [i_10] [i_11] [i_11] [i_10]);
                }
            }
        }
    }
    #pragma endscop
}
