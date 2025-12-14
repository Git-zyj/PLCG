/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {
                        var_10 = (max(var_10, (min(((((((arr_0 [i_1]) >> (((arr_5 [i_0]) + 28795)))) != (arr_0 [i_2])))), (((-(arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))));
                        var_11 = -31440;
                    }
                }
            }
            var_12 = (max((arr_5 [i_0 + 2]), (max(15, 2164923046))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_13 *= (((arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (((~(arr_5 [i_0])))) : (arr_3 [i_0] [i_4])));
            arr_14 [i_0] [i_0] [i_0] = (3553499571 != 2130044250);
        }
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            var_14 = 21471;
            var_15 ^= ((arr_1 [i_0]) ? (arr_9 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0]) : (min((arr_4 [i_0 - 1] [i_5 + 2] [i_5 + 2]), (arr_4 [i_0 - 1] [i_5] [i_5 + 3]))));
        }
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            arr_21 [i_0] = 44093;
            var_16 = (max(var_16, (arr_20 [i_0 + 2] [i_0 + 1])));
        }
        arr_22 [i_0] = (((min(1, 44035))));
        var_17 = var_7;
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((((max(2164923053, (arr_33 [i_7] [i_7] [i_7] [i_7]))) - (arr_25 [i_7] [9])))) ? (arr_32 [i_7] [i_8] [i_8] [i_9] [i_10] [3]) : var_4))));
                                arr_37 [i_11] [i_8] [i_8] [i_11] [i_8] [22] = var_3;
                                arr_38 [i_9] [i_9] [i_11 - 1] &= (min((((var_7 >= (arr_33 [i_7] [i_8 - 2] [i_10] [i_11 + 1])))), (min(((min((arr_35 [i_7] [i_8] [i_9] [i_10] [i_11]), 21454))), (arr_28 [i_9] [i_8 - 1] [i_9])))));
                                var_19 = (max(var_19, ((min((arr_26 [i_8] [i_9] [i_11]), ((((arr_33 [i_9] [i_9] [i_9] [i_9]) >> (((arr_33 [i_7] [i_8 - 3] [i_7] [i_10]) - 33593))))))))));
                            }
                        }
                    }
                }
                var_20 = (var_9 != (arr_34 [i_8 - 2] [i_8 + 2] [i_8 + 1]));
            }
        }
    }
    var_21 = (min(21488, ((~(~-523)))));
    var_22 = var_4;
    #pragma endscop
}
