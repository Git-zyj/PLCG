/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(var_15, var_6));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 += 3474647421;
                        arr_13 [i_0 - 1] [i_3] [10] [i_1 + 1] [i_2] [i_3 - 2] = var_8;
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 6;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_17 -= (max((min(((65519 * (arr_0 [12]))), ((-(arr_16 [9] [9] [i_6]))))), ((-(arr_4 [i_6] [i_5 - 3] [i_4])))));
                    var_18 *= 2;
                    arr_22 [i_6] [i_6] [i_6] = (arr_15 [0]);
                }
            }
        }
        arr_23 [i_4 + 3] [i_4 + 3] = (arr_8 [i_4]);
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_19 = ((~(max((arr_24 [i_7] [i_7]), ((max(1, var_3)))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_37 [i_11] [i_10 - 1] [i_8] [0] [i_8] [i_8] [i_7] = 3;
                                var_20 = var_4;
                            }
                        }
                    }
                    arr_38 [i_7] [i_8] [i_8] = ((((max(653098928, (arr_26 [i_9 - 1] [i_9 - 1])))) ? ((max((((arr_36 [i_8] [i_8]) ? (arr_25 [i_7]) : 56017666)), 105))) : (min((min(var_11, (arr_25 [i_8]))), (arr_32 [i_7] [i_8] [i_9 + 2] [i_9])))));
                    var_21 += ((min((arr_28 [6] [6]), (arr_28 [10] [i_8]))) ? (((((-(arr_24 [i_8] [i_7])))) ? -3474647421 : ((((arr_25 [i_8]) ? var_7 : var_4))))) : ((max(((-(arr_30 [i_9] [i_7] [i_8] [i_7]))), 1548620950969868672))));
                }
            }
        }
        arr_39 [i_7] = ((-((9223372036854775802 ? 14053 : 126))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    var_22 = (min((4294967284 - 12), 1));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                arr_50 [i_7] [i_12] [i_7] [i_7] [i_7] = (max(-9223372036854775803, 15));
                                arr_51 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = -747336800;
                                arr_52 [i_12] [i_12] [i_12] [i_12] [i_12] = (max(((min(1055840487, (((!(arr_46 [i_7] [i_12 - 1] [i_13] [12] [i_15]))))))), (max(((-9223372036854775794 ? var_2 : var_8)), (arr_29 [i_7] [i_12] [i_12] [i_15])))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        arr_57 [i_16] = (((!4294967295) & ((-(((arr_55 [i_16]) ? (arr_54 [i_16]) : var_4))))));
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {
                {
                    arr_64 [i_16] [i_17 + 1] [i_16] [7] = var_11;
                    arr_65 [i_16] [i_17 + 2] [i_18 - 1] = (min(var_8, (((!(!22679))))));
                    arr_66 [i_16] [i_17 + 2] [i_18] = var_6;
                }
            }
        }
        var_23 = 22701;
    }
    var_24 = var_9;
    #pragma endscop
}
