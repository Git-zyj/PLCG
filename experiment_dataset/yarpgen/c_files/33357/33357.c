/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 ^= ((((((arr_1 [i_0]) / (arr_2 [i_0])))) ? (((((arr_2 [i_0]) < var_12)))) : (var_15 | 201326592)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 ^= (((((-(arr_12 [i_4] [i_0] [i_4] [i_4] [i_4] [i_0] [i_4 + 1])))) ? (arr_4 [i_1]) : var_0));
                                var_21 ^= ((((max((max(1144334127, var_0)), ((18446744073709551615 ? (arr_6 [i_0] [i_1] [i_2] [i_4]) : 9060))))) ? (((((arr_6 [i_0] [i_2] [i_1] [i_0]) ? var_10 : (arr_2 [i_4]))) / (arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0]))) : var_8));
                                arr_13 [i_4] [i_2] [i_2] [i_2] [i_0] = -4294967295;
                                var_22 ^= arr_10 [i_3 - 3] [i_4] [i_0] [i_4 - 2] [i_4];
                                var_23 = 242;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_24 = (max(var_24, (((var_12 ? (arr_14 [i_5 + 1]) : var_14)))));
                var_25 ^= ((((((var_3 + 4294967295) - ((((arr_17 [i_5] [4] [i_6]) / var_1)))))) ? ((1914423694 ? (max(-1914423695, 40198)) : 73)) : (((arr_14 [i_5]) ? ((-(arr_18 [i_5] [4]))) : ((-2109492648 ? (arr_14 [i_5]) : (arr_15 [i_6])))))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_26 = (min(var_26, (((63 || (((-1914423695 ? (max(var_7, var_14)) : (var_18 && 1914423695)))))))));
                            var_27 = 620432369;
                        }
                    }
                }
                var_28 ^= (((((arr_19 [i_5 - 3] [i_6] [i_5] [i_6]) / (arr_19 [i_5 - 2] [i_6] [i_6] [i_5]))) > ((var_10 << (var_7 - 1828710936)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_29 = 183;
                                arr_41 [i_13] [i_10] [i_11] [i_12] [i_13] [i_13] [i_12] = (((206 != 1914423695) | ((var_1 ? (arr_28 [i_12 - 1]) : var_14))));
                                var_30 ^= (((((arr_32 [i_12 + 1]) ? ((((arr_33 [i_9] [i_10] [i_11]) || 214))) : 109)) < 0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                arr_48 [i_9] [i_10] = ((~((-(arr_32 [i_9 - 2])))));
                                var_31 = ((0 >= ((min(((var_6 ? var_15 : (arr_42 [i_15] [i_14] [i_11] [i_10] [i_9]))), (max((arr_32 [i_14]), (arr_42 [i_9] [i_10] [i_11] [i_14] [i_15]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 3; i_16 < 9;i_16 += 1)
    {
        for (int i_17 = 2; i_17 < 7;i_17 += 1)
        {
            {
                var_32 ^= (min(((((((arr_5 [i_16]) ? 1160334994 : var_16))) || 9060)), ((!(arr_10 [i_17] [i_17] [i_17] [i_16] [i_16])))));
                var_33 ^= (min((((65536 >> (233 - 228)))), (min((arr_3 [i_16] [i_17 + 1] [i_17]), var_4))));
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 9;i_19 += 1)
                    {
                        {
                            var_34 = (min(var_34, ((min((max((min((arr_26 [i_16]), var_9)), (((var_0 + (arr_0 [i_16] [i_17])))))), var_14)))));
                            var_35 = (min(var_35, (((((((arr_43 [i_16] [i_17]) + (arr_44 [i_16] [i_17] [i_16 - 1] [i_17 + 1] [i_18] [i_19 + 2])))) ? 56476 : var_2)))));
                            arr_58 [i_16] [i_17] = ((var_1 ? ((((3291539227082572257 / var_16) ? (arr_20 [i_16 - 1]) : (max(var_7, 142))))) : (arr_7 [i_16] [i_17] [i_19])));
                        }
                    }
                }
                var_36 = (min(var_36, -106001365));
            }
        }
    }
    #pragma endscop
}
