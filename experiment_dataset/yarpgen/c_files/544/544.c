/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_0 + 2] [i_0 + 2] [i_0] = var_1;
                    var_13 = (max(var_13, ((max((((((76 ? var_5 : 4109732994))) & 549755813884)), 4109732994)))));
                    var_14 = (((~(((arr_9 [i_0 + 3] [i_0 - 1]) >> (var_8 - 8607383203266987069))))) | (arr_3 [i_0]));
                }
                arr_11 [i_0] [i_0] = min((4109732992 != 3287255280129108676), (((var_7 / (arr_0 [i_0])))));
            }
        }
    }

    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        var_15 = (max(var_15, 1));
        var_16 = ((max((arr_8 [i_3] [i_3] [i_3]), (var_5 > var_5))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_17 = (((~(arr_16 [i_4 + 1] [i_4 + 1]))));
        var_18 = (max(var_6, (max((arr_17 [i_4 - 1]), ((-1 * (arr_16 [13] [i_4])))))));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_28 [i_5] = (((((arr_17 [i_6 - 1]) * ((-(arr_17 [i_6])))))) ? var_5 : ((-4185215051 + ((min(var_0, var_7))))));

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_31 [i_5] [i_7] [i_6] [i_5] = (((65535 ? (arr_22 [12] [i_6 + 1] [12]) : 4185215053)));
                        var_19 = (min(var_19, (~var_2)));
                        var_20 *= (min((max((arr_17 [i_5 - 1]), (arr_24 [i_5 + 1] [i_7]))), ((((arr_19 [i_6 + 2] [i_5 + 1]) > (arr_19 [i_6 + 4] [i_5 - 1]))))));
                        var_21 = ((var_10 ? (min(((4185215051 ? 255 : -14134)), (var_9 || var_4))) : (((var_9 || ((max(-66, var_5))))))));
                        arr_32 [0] [i_5] = ((var_7 % ((max(65, 1)))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_39 [i_5] = (max(var_5, var_7));
                                var_22 = (max(var_22, var_5));
                            }
                        }
                    }
                }
            }
        }
        arr_40 [i_5] = (((1452090056 * 61) * (((var_7 / (arr_19 [i_5 - 1] [i_5 - 1]))))));
    }
    for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_23 = (max((112 || 16383), (min(4294967295, -1))));
                    var_24 = var_5;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((((-(arr_33 [i_14] [i_14]))) <= var_5)))));
                                var_26 &= (((27715 ? (((var_2 >= (arr_19 [1] [i_12 - 3]))) : (arr_29 [i_11] [i_11] [i_11 - 1] [i_11 + 1] [i_11 - 1] [0])))));
                                var_27 = var_0;
                                var_28 = (max(var_7, (min((((arr_30 [5] [i_11] [i_15] [5] [1]) ? 511 : var_4)), (min(var_0, var_4))))));
                            }
                        }
                    }
                    arr_55 [i_11] [i_11] [i_11] = (min((min(var_2, (arr_27 [2]))), -63));
                }
            }
        }
        arr_56 [i_11 - 1] |= var_5;
        var_29 = (min(var_29, (-2147483647 - 1)));
        var_30 = (min(var_30, (max(var_7, (min(65535, var_4))))));
    }
    #pragma endscop
}
