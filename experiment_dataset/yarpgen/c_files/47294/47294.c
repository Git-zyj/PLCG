/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] = 63;
                            var_15 = (((((3978247768 ? (((189 || (arr_11 [i_3] [i_0] [i_1] [i_0])))) : ((((arr_10 [i_1] [i_1] [i_3]) || (arr_5 [i_0] [i_1]))))))) < var_9));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_16 ^= ((-((1 ? (arr_8 [i_0] [i_0] [i_1 - 2] [i_0]) : var_5))));
                                var_17 = ((var_9 ? ((((853350190 ? 3441617105 : 227)))) : ((-var_13 ? (57 - var_11) : (min(8748278, var_11))))));
                            }
                        }
                    }
                    var_18 = (arr_18 [i_4] [i_1 + 4] [i_0] [i_0] [i_0]);
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_19 = (((arr_21 [i_1 - 2] [i_1 - 2] [i_7]) ? ((~(arr_21 [i_1 + 3] [i_7] [5]))) : (((var_9 == (arr_21 [i_1 - 3] [i_1 - 3] [1]))))));
                    var_20 = 198;
                }

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_21 ^= (arr_8 [i_0] [i_0] [14] [i_0]);
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_8] [i_0] = (max((arr_0 [i_8]), (arr_9 [i_1] [i_1 - 3] [i_1 + 3] [i_9 - 2])));
                                var_22 = (max(var_22, (((((((arr_11 [i_1 + 3] [i_1 + 3] [i_9] [i_1 + 3]) << var_2))) * ((0 >> ((((var_6 ? 3368658379062836178 : 14573)) - 3368658379062836164)))))))));
                            }
                        }
                    }
                    arr_30 [i_0] [i_8] [i_8] = ((+(((arr_7 [i_1 + 2] [i_1 + 1] [i_1 - 3]) ? (var_5 >> var_2) : (min(var_13, var_6))))));
                    var_23 = (((arr_19 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 2]) ? (((!(((1240305313347502490 ? 1348900215 : 240)))))) : (arr_15 [i_0] [i_1 - 3])));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    arr_34 [2] = (~-1155721545);
                    var_24 = (max(var_24, (((var_12 % (((arr_16 [i_0] [i_1 + 3] [i_1] [9]) / var_8)))))));
                    arr_35 [6] = (207 > 5733570481370790514);
                }
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    arr_38 [i_1] = (min((min(-507639931, (((arr_8 [i_0] [i_0] [i_0] [i_0]) - (arr_8 [i_0] [i_1] [i_12 + 2] [i_12 - 2]))))), 0));
                    var_25 = (arr_11 [15] [15] [15] [i_12]);
                    arr_39 [i_0] [i_0] [i_12 + 2] = ((var_4 == ((2682617459143032451 ? (arr_23 [i_1 + 1]) : (arr_23 [i_1 - 1])))));
                }
                var_26 = (max(var_26, (((-55 & ((((arr_32 [i_0] [i_1 + 1] [i_1 + 2] [i_1 + 4]) <= 1155721514))))))));
            }
        }
    }
    var_27 = 25162;
    var_28 = 1789829395;
    #pragma endscop
}
