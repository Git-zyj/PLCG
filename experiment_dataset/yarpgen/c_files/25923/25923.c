/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] [i_2] [i_2] = (max(65531, (var_10 & 63181)));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_17 = var_2;
                        arr_12 [i_0] [i_0] [i_3] = 47817;
                    }
                    arr_13 [6] [6] [i_0] [i_0] = 60510;
                }
                for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_18 *= ((35702 ? ((~(arr_0 [i_1 + 1] [i_1 - 3]))) : ((min((arr_0 [i_1 - 1] [i_1 + 2]), (arr_0 [i_1 - 4] [i_1 + 1]))))));
                    var_19 = 42979;
                    arr_17 [i_4] [i_4] [11] = arr_15 [i_0] [i_0] [i_0];
                    arr_18 [i_4 + 2] [i_4 + 2] [i_4] [i_4] = ((!(((((max(var_0, var_0))) ? ((max(65535, (arr_15 [i_0] [i_1] [i_4])))) : (arr_3 [i_1] [13]))))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_20 = var_12;
                    var_21 = (arr_0 [i_1 - 2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_27 [i_5] [i_5] [i_1] [8] [i_7] [i_1] &= ((5048 ? 5074 : (arr_16 [7] [i_5] [i_5 + 1])));
                                arr_28 [i_0] [i_0] [10] [i_6] [i_6] [i_5] = 7209;
                                arr_29 [i_6] = ((-65535 ? 9 : 63197));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_37 [i_0] [i_1 + 1] [i_0] [i_9] = (((arr_21 [i_1 - 3]) ? var_7 : 63176));
                                var_22 = 13584;
                            }
                        }
                    }
                }
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    arr_41 [i_0] [i_0] [i_0] = (max(((-((((arr_8 [i_1]) < 9523))))), (36934 + var_12)));
                    var_23 ^= (((((((arr_26 [i_0] [i_0] [i_0] [i_10] [i_10]) ? (arr_22 [i_0] [i_1] [i_10] [i_0] [2]) : var_16)) + (arr_26 [2] [2] [i_10 + 2] [i_0] [10]))) + ((max(1920, (arr_10 [2] [i_1 + 2] [i_10 - 2] [2] [2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_47 [i_0] [i_1] [15] = ((41946 || ((((arr_5 [i_1 - 2] [i_11 - 2] [i_12]) ? 63169 : 65535)))));
                                var_24 = arr_45 [i_0] [i_0] [6] [i_12 + 2] [i_12];
                                var_25 &= 60521;
                            }
                        }
                    }
                    arr_48 [i_0] [i_1] [14] = ((((max(var_9, (60540 != 55808)))) ? ((((((arr_9 [i_0] [i_0] [i_10] [i_0]) + var_5)) >= (arr_46 [i_0] [3] [i_1 - 3] [i_1 - 3] [i_10] [3] [i_10 + 1])))) : ((((((46003 << (2359 - 2350)))) && (arr_5 [i_0] [i_0] [16]))))));
                }
                var_26 = arr_44 [i_0] [i_0] [i_1 - 3] [i_1];
                var_27 = (((((50230 ? 12 : ((max((arr_36 [i_1] [8] [8] [i_0] [i_1]), 6)))))) ? -var_8 : (max(((var_6 ? (arr_24 [i_0] [2] [2] [i_0] [i_1 - 3] [i_1] [9]) : (arr_40 [i_1] [16]))), ((max((arr_6 [i_0] [i_0] [i_1]), (arr_38 [i_0] [i_1]))))))));
                var_28 = (!var_11);
            }
        }
    }
    var_29 = var_15;
    var_30 = ((((min(var_3, 59575))) ? ((max((min(var_5, var_15)), var_11))) : (max((var_14 | 36799), var_4))));
    var_31 = (min(var_31, var_3));
    #pragma endscop
}
