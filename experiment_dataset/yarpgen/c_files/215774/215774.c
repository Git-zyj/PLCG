/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 -= (((((~(arr_7 [i_2] [i_3 + 2] [i_2] [i_0])))) % (((arr_7 [i_0] [i_1 - 1] [i_2] [i_0]) | var_13))));
                                arr_15 [i_0] = (arr_1 [i_0]);
                                var_21 = (arr_12 [i_4 - 3] [i_4] [i_0] [i_3 + 1] [i_3]);
                                var_22 = (1843817369 + -1045842526);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    var_23 = (min(var_23, ((-(arr_9 [i_5] [i_5] [i_5 - 3] [i_1 - 2] [i_0])))));
                    var_24 &= var_3;
                    var_25 -= (((((var_17 ? var_6 : -1))) ? (arr_2 [i_0]) : (arr_14 [i_0] [20] [i_1 + 2] [i_5] [i_0] [i_1 + 1])));
                    arr_19 [i_0] = (arr_13 [4] [4] [i_5 - 3] [i_1 - 1] [i_1]);
                }

                /* vectorizable */
                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_26 -= ((var_12 ? (arr_24 [i_6 + 1] [i_6 + 1] [i_1 + 2] [i_1 + 2]) : (arr_24 [i_7] [i_6 + 1] [19] [i_1 + 2])));
                        var_27 = -1;
                        arr_26 [i_7] [i_0] [5] [i_6 + 2] [i_0] [i_0] = ((1 ? 0 : -1));
                    }
                    arr_27 [i_0] [i_1 - 2] [i_6] [i_0] = (var_3 - var_6);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_28 = var_13;
                                var_29 = ((var_11 ? (arr_9 [i_9 + 2] [i_6 + 1] [i_1 + 2] [i_1] [i_1 + 2]) : (arr_31 [i_6 - 2] [i_6] [i_1 - 2] [i_1 - 2] [i_0])));
                                var_30 = (!18614);
                                var_31 = var_16;
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    var_32 ^= (arr_1 [i_0]);
                    arr_36 [i_0] [i_1] [i_0] = (arr_12 [i_10] [i_10] [i_0] [i_1 + 1] [i_0]);
                    arr_37 [i_0] [i_0] = ((((-(arr_14 [i_0] [i_0] [i_10] [i_1 - 2] [i_10] [i_0]))) * (((arr_14 [11] [i_0] [i_10] [i_1] [i_1] [i_1]) ? (arr_28 [i_10] [5] [i_0] [i_0]) : (arr_14 [12] [i_0] [i_10 - 1] [i_1] [i_1 - 1] [i_10 + 1])))));
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_33 ^= ((~((41789 - ((0 ? -95 : 7849309922620692365))))));
                    arr_40 [i_11] [i_0] [i_0] [i_0] = ((((min(var_6, (arr_9 [i_11] [9] [i_11] [i_1 + 1] [i_11])))) | ((min((arr_16 [12] [i_1] [i_1]), (arr_30 [i_11] [i_0] [i_1 - 2] [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_34 = (((((8772 || var_18) ? (arr_6 [i_1 - 1] [i_1 - 2] [i_11]) : (~var_8))) != (((min((arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_0]), (arr_7 [i_1 - 1] [i_1 + 2] [i_1 - 2] [i_0])))))));
                                var_35 = (max(var_35, ((min((((var_9 ? var_16 : 0))), -8772)))));
                                arr_48 [2] [i_0] [i_0] [i_0] [i_1] [i_0] = (min(((((((arr_46 [i_0] [20]) ? (arr_17 [12]) : (arr_47 [i_13] [i_12] [i_12] [i_1 - 2] [i_11] [i_1 - 2] [i_0])))) ? ((2147483647 ? 13 : 6906661270751984152)) : (((arr_8 [i_1] [i_1] [i_11] [10]) ? -3108546006412970979 : -689626873)))), (((var_7 ? var_9 : (((arr_39 [20] [i_11] [i_1 - 1] [i_0]) ? var_12 : var_5)))))));
                                var_36 = (~var_5);
                            }
                        }
                    }
                }
            }
        }
    }
    var_37 = var_15;
    var_38 = var_3;
    #pragma endscop
}
