/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_9 [i_4 - 1] [i_4 - 3] [i_4] [i_4] [i_4 - 3])));
                                var_21 = (i_3 % 2 == 0) ? (((((((var_6 << (((arr_8 [i_0] [i_0] [9] [i_3] [9] [i_3]) - 63334))))) + (var_0 & var_3))))) : (((((((var_6 << (((((((arr_8 [i_0] [i_0] [9] [i_3] [9] [i_3]) - 63334)) + 62095)) - 11))))) + (var_0 & var_3)))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [6] [i_0 + 2] = var_14;
                arr_13 [i_0] [i_1] = ((~(arr_1 [i_0 + 1])));
                var_22 = (((!var_5) << (((!((max(-9155504000391653299, 5708715921769979519))))))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_17 [i_0 - 1] [i_0] [i_5] [i_5] = (((arr_2 [i_0 + 2]) ? var_11 : (arr_8 [i_1] [2] [8] [i_0] [i_5] [i_5])));
                    arr_18 [i_5] [i_5] [i_0 + 3] [i_5] = var_12;

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_21 [i_6] [i_5] [i_5] [i_5] = (!var_0);
                        var_23 = (((arr_5 [i_1 + 1] [i_1] [0]) > 2963242816));

                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            arr_24 [i_5] [i_6] [i_5] [4] [i_5] = ((~((((arr_9 [i_7] [i_7] [i_6] [i_6] [i_7 - 1]) && var_4)))));
                            arr_25 [1] [i_5] [i_6] [3] [i_7] [i_1] [4] = ((arr_7 [i_1]) + ((531906304 << (var_7 - 816165667))));
                        }

                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            arr_28 [i_0 - 1] [i_0 - 1] [i_5] [i_5] [2] = 16;
                            arr_29 [i_0] [i_1] [i_5] [8] [i_5] = (arr_9 [i_0] [i_1] [i_5] [9] [5]);
                        }
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_24 = 1331724499;
                        var_25 = ((var_3 ? (arr_11 [i_0 + 3] [i_1] [6] [6] [i_9]) : (arr_11 [i_0 - 1] [i_1] [i_5] [i_9] [i_1])));

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_26 -= var_18;
                            arr_35 [i_0] [i_1] [i_5] [i_9] [i_5] = var_3;
                            arr_36 [i_10] [i_5] [i_5] = (((arr_31 [i_0] [i_0] [i_0] [0] [0] [i_0 + 2]) << (((arr_31 [i_0] [7] [1] [i_5] [2] [i_10]) - 4058155487))));
                        }
                        for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_9] [i_5] [i_11] [i_9] [i_5] = (~(var_5 + var_13));
                            var_27 ^= (((((arr_7 [i_0 + 3]) + (arr_6 [i_9] [i_9]))) + (arr_8 [i_5] [i_1] [i_5] [2] [i_9] [i_1])));
                        }
                        for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, (1331724484 * var_11)));
                            arr_42 [i_5] = (34978 ? ((-(arr_19 [i_0 + 2] [i_5] [i_9] [i_5]))) : 1331724479);
                            arr_43 [i_0] [0] [i_5] [i_5] [i_12] = arr_14 [i_1 + 1];
                        }
                        for (int i_13 = 1; i_13 < 9;i_13 += 1) /* same iter space */
                        {
                            var_29 = ((((13 ? (arr_7 [i_5]) : var_18))) + var_14);
                            arr_46 [i_0] [i_1] [4] [4] [i_9] [i_9] [i_9] &= 2963242816;
                        }
                        var_30 = (max(var_30, var_15));
                    }
                    arr_47 [i_5] [i_5] = 32767;
                    var_31 = (max(var_31, (var_14 ^ 1044206359061799606)));
                }
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_32 = ((((max(0, (arr_45 [i_1 - 1])))) ? ((((((var_3 ? (arr_34 [i_0] [i_0] [i_0] [i_1] [i_0] [4]) : (arr_15 [i_14] [i_1] [i_0 + 2]))) > (arr_1 [i_0 - 1]))))) : ((var_13 ? (min(var_8, 522366878484964891)) : (((arr_19 [i_1 - 2] [i_1 - 1] [i_0] [i_14]) ? (arr_4 [i_1]) : (arr_4 [i_14])))))));
                    var_33 = (max(var_4, (max((var_16 - -5797885412751418616), var_5))));
                }
            }
        }
    }
    #pragma endscop
}
