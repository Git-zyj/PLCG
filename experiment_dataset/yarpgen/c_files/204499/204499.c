/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(var_7 ^ var_9)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1 + 1] [i_2] [i_1 + 1] = ((270215977642229760 ? 24 : 29503));
                            arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] = (9690449371365607314 % 3909);
                        }
                    }
                }
                arr_15 [11] [i_1] = (max((((min(2120622086104032963, (arr_4 [i_1 - 2] [i_0]))) ^ (arr_2 [i_0 + 2]))), (((~(arr_11 [i_1] [i_1 + 1] [i_0 + 2] [i_0 + 2]))))));

                /* vectorizable */
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_21 [i_4] = -var_4;
                        arr_22 [i_1] [i_1] [i_4 - 3] [i_5] = ((!(var_5 < 2938229701)));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_4] [i_6] = -var_9;
                        arr_27 [i_4] [i_6] = var_6;
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_30 [i_0] [i_0] [i_4] [i_7] = -57;
                        arr_31 [i_0] [i_4] [i_0] [i_1] [i_1 - 2] = (((arr_28 [i_1]) ? (arr_28 [i_1]) : var_0));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_35 [i_0 - 1] [i_4] = (arr_24 [i_1 - 2] [i_8] [i_4] [i_8]);
                        arr_36 [i_0] [i_1] [i_8] = (((arr_18 [i_0 + 2] [i_8]) || (arr_19 [i_0 + 1] [i_0 + 1] [i_1])));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_44 [i_0] [i_1 - 1] [i_4 - 3] [i_4 - 3] [i_4] = ((var_7 ? var_5 : (arr_8 [i_4 + 1] [i_4 + 1])));
                                arr_45 [i_0 - 1] [i_0 + 2] [i_4] [i_0 - 1] [i_9] [i_4] = (((arr_28 [i_4]) ? var_4 : (arr_28 [i_4])));
                            }
                        }
                    }
                    arr_46 [i_4] [i_0] [i_4] [i_0] = ((1006936910 ? (arr_9 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_4 + 2] [i_1] [i_0]) : (((-2147483647 - 1) ? (arr_17 [i_0 + 2] [1] [i_4]) : -2120622086104032942))));
                }
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    arr_51 [i_1] = (((((((arr_47 [i_0] [i_0] [i_0]) ? var_7 : (arr_33 [i_0] [i_0] [i_0] [13])))) && var_8)));
                    arr_52 [i_11] [i_0] [i_11] = var_0;
                    arr_53 [i_11] [i_11] [i_11] = -2120622086104032941;
                    arr_54 [i_0] [i_1 + 1] [i_11] = (max(((max(-24, -32080))), (max(819146575, (7607620336193319976 - -33)))));
                }
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            {
                                arr_63 [i_1 - 1] [i_14 - 2] [i_12] [i_1 - 1] [i_12] [i_1 - 1] [i_0] = (max(((max(var_7, var_8))), (arr_43 [i_0] [i_0 + 1] [i_0] [i_0] [i_12] [i_0] [i_0])));
                                arr_64 [i_0] [i_13] [i_0] &= (max(23870, ((min(-1, -145)))));
                            }
                        }
                    }
                    arr_65 [i_1] |= ((min(((-32080 ? (arr_17 [i_0] [i_0] [i_0]) : 1)), (max(22940, (-2147483647 - 1))))));
                    arr_66 [i_1] [i_12] [i_1] [i_1] = (-2147483647 - 1);
                }
                arr_67 [i_0] [i_0] [i_1] = ((-33 ? 1333771133 : 0));
            }
        }
    }
    var_11 = ((((var_4 ? (var_0 % 64) : (((12854 ? 534607435 : -50)))))) ? (((var_5 < (min(var_5, var_2))))) : var_2);
    #pragma endscop
}
