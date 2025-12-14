/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_10, (((var_10 <= (max(var_6, 12067197)))))));
    var_12 = ((max(((16949697301337563945 ? var_0 : var_4)), (var_0 / var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_3 [i_0] [i_1] [i_0]);

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = (((((var_5 & (var_0 <= var_0)))) ? var_7 : (((((var_8 ? var_4 : -533461209)))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = (((((~(var_2 <= -982609694)))) <= (((((var_0 ? var_7 : var_2))) ? (min(15939324084744776628, 60645)) : (arr_1 [i_0])))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_13 = var_9;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_14 -= ((var_7 ? var_10 : ((max(((((-9223372036854775807 - 1) && var_2))), var_5)))));
                                arr_18 [i_0] [i_3] [i_0] [i_0] = ((~(min(268435328, 90))));
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_15 &= -1218;
                            var_16 = (var_7 & (arr_7 [i_6 + 1] [i_0] [i_6 - 1] [i_6 - 1]));
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            var_17 = ((-533461197 ? (3584 && 45057) : var_1));
                            var_18 = (max(var_18, -5034069208304590285));
                            var_19 = (min(var_19, var_9));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_29 [i_0] [i_6 + 1] [i_3] [i_1] [i_0] = (min(((((arr_8 [i_0]) < (((max(var_6, var_1))))))), (((arr_8 [i_6 - 1]) ? var_3 : var_8))));
                            arr_30 [i_6] [13] [1] [i_0] [i_0] = (max(((((arr_16 [i_9] [i_0] [i_6] [i_0] [i_6]) == var_9))), (max((-99 / var_1), -var_8))));
                            var_20 = (min(((((var_8 || var_4) || (var_2 ^ var_7)))), (var_8 <= var_8)));
                            arr_31 [i_0] [i_0] [i_3] [i_3] [i_6] [i_9] = (i_0 % 2 == 0) ? ((-(((max(var_6, var_3)) >> (((arr_11 [9] [i_0] [i_0] [i_3]) - 39219)))))) : ((-(((max(var_6, var_3)) >> (((((arr_11 [9] [i_0] [i_0] [i_3]) - 39219)) - 14686))))));
                        }
                        arr_32 [i_1] [i_0] [i_0] [i_0] = ((~((var_2 >> (var_3 - 4366238721937124105)))));

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_36 [i_6] [i_6] [i_0] [i_0] [i_10] [i_0] = var_7;
                            arr_37 [13] [i_0] [i_6 - 1] [i_10] = (((!var_10) ? (~99) : (min((arr_20 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1]), var_8))));
                        }
                        var_21 = (var_5 << (((var_6 / var_9) - 300)));

                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            var_22 = 8593;
                            arr_40 [i_0] [i_1] [i_0] [3] [i_11] = var_9;
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_43 [i_0] [i_6] [i_3] [0] [i_0] = (((((((var_3 || (arr_7 [i_6] [i_0] [13] [1]))) ? (~var_8) : var_9))) || (((((((!(arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) % var_0)))));
                            arr_44 [i_0] [i_1] [9] [5] [9] [i_6] [1] = ((65535 * 1) ? ((max(61275, 62512))) : ((min(19111, -5157))));
                            var_23 = (min(var_23, ((max((134217727 && 16383), (((!((((arr_15 [10] [i_1] [i_1] [i_1]) ? 16383 : var_1)))))))))));
                            arr_45 [3] [i_0] [3] [3] [3] = ((((((var_7 ? var_2 : var_2)) ^ (~var_7))) <= (((((!-533461209) < var_5))))));
                        }
                        for (int i_13 = 2; i_13 < 12;i_13 += 1)
                        {
                            arr_49 [i_0] = (((-847924951 + 105) - var_0));
                            arr_50 [i_13] [i_13] [i_6] [i_0] [i_1] [i_1] [i_0] = (min((((arr_48 [i_0] [i_6 + 1] [i_13 + 2] [i_0] [i_13 + 2] [9] [i_1]) ? (arr_39 [i_0] [i_6 - 1] [i_13 + 1] [i_13 + 1]) : var_6)), (((var_10 < (arr_48 [i_0] [i_6 - 1] [i_13 + 2] [i_6] [10] [i_13 + 2] [12]))))));
                        }
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        arr_54 [i_0] [i_0] [i_3] [i_14] [i_3] [6] = ((120 && (((arr_38 [i_0] [i_1] [i_1] [i_14]) || (!var_0)))));
                        arr_55 [i_0] [i_1] [i_0] [i_14] = (((!var_0) ? var_9 : (arr_11 [i_0] [i_0] [i_3] [i_0])));
                        var_24 = ((117 == (var_6 + var_3)));
                        arr_56 [i_0] [i_3] = ((((var_6 ? var_3 : (arr_34 [i_1] [i_14])))));
                    }
                    arr_57 [i_0] [13] [i_0] [i_0] = (((((var_7 ^ (((99 ? var_0 : 16368)))))) ? (arr_51 [i_0]) : ((var_4 ? (min(var_5, var_4)) : var_1))));
                }
                arr_58 [4] [i_1] [i_1] &= ((-533461201 ? 5833808583069587498 : 140));
            }
        }
    }

    /* vectorizable */
    for (int i_15 = 1; i_15 < 18;i_15 += 1)
    {
        arr_61 [i_15 - 1] [11] = (!var_5);
        arr_62 [i_15] [i_15] = -1;
        var_25 = (var_0 / -var_2);
        var_26 = (min(var_26, (((-(arr_59 [i_15 - 1] [i_15 - 1]))))));
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        for (int i_17 = 2; i_17 < 18;i_17 += 1)
        {
            {
                arr_67 [2] [12] [i_17] &= ((~(~-533461209)));
                var_27 = var_5;
                var_28 = var_10;
            }
        }
    }
    #pragma endscop
}
