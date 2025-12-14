/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [1] [i_3] [3] [i_0] = ((((5666070851638879814 != (((min(var_12, 54071))))))));
                            var_18 = ((~(((arr_4 [i_1 + 1]) ? 54071 : 0))));
                            var_19 = (((max((arr_4 [i_1 + 1]), var_2)) - (max(230, var_7))));
                            arr_10 [i_2] = (((((((var_9 ? 1 : 18393091576058386915)) - ((max(1240718280, var_8)))))) ? (max((max(54071, 2147483647)), -var_6)) : (--20956)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_20 += ((max(((var_14 ? var_12 : var_15), (64496 << 0)))));
                            var_21 = (min(var_21, ((min(((((max(24, 2842707619))) ? (min(3243872609, 53652497651164711)) : var_15)), ((min((((arr_1 [i_0]) ? -16 : var_13)), ((var_16 ? -4412 : var_6))))))))));
                            arr_15 [i_4] [i_4] [i_4] [13] = var_13;
                            arr_16 [i_0] [0] [i_4] [i_0] |= (((max((arr_11 [0] [0] [i_0]), var_13)) << (32 - 32)));
                            var_22 = (min(var_22, (arr_7 [i_0] [i_1] [i_4 - 3] [i_5])));
                        }
                    }
                }
                var_23 = ((+(min((arr_6 [i_0] [i_1 - 1] [i_1 - 1]), (11464 * var_17)))));
                var_24 = ((((min(1445178137, 1443733258))) ? (((min((arr_13 [i_1 - 1] [i_0] [i_1 - 1] [10] [i_1 - 1] [i_1]), (arr_13 [i_1 + 1] [i_0] [i_1 - 1] [12] [i_1] [i_1 + 1]))))) : (max(29, (arr_13 [i_1 + 1] [i_0] [i_1 - 1] [8] [8] [8])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_29 [i_6] [i_7] [i_7] [i_7] [i_9] [i_10] = (max((((min(var_7, var_13)))), (min(((var_15 ? 2376845773 : 9)), (var_2 / var_4)))));
                                arr_30 [i_10] [17] [i_8] [2] [i_7] [i_6] = (max((((arr_28 [i_10 - 2] [i_10 - 2] [i_10 - 2] [0] [i_10]) ? -30 : 1918121523)), (-var_12 / 29)));
                            }
                        }
                    }
                    var_25 = (max(0, ((var_0 ? (min(0, (arr_18 [i_7]))) : (var_9 - 281474976710655)))));
                    arr_31 [i_6] [18] [19] = -7;
                }
            }
        }
    }
    var_26 *= (min((((var_8 == ((var_14 ? var_7 : 160))))), ((((max(-5666070851638879807, 0))) ? (((min(var_10, var_14)))) : (63 / var_7)))));
    /* LoopNest 3 */
    for (int i_11 = 3; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 17;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_27 = ((var_17 + (((max((arr_35 [i_11 - 3]), (arr_35 [i_11 - 2])))))));
                                arr_45 [i_15] = ((var_16 / var_11) & (((((arr_40 [8] [10] [8] [8] [i_14 - 2] [i_15]) == (max(var_17, 4411)))))));
                                arr_46 [i_15] [i_15] [1] [i_12] [1] [i_15] [0] = ((var_17 ? (((((arr_18 [1]) && 4294967295)))) : (min(var_13, var_11))));
                                arr_47 [i_11] [i_15] [9] [i_13] [15] [i_11] = ((((min(-9, ((240 ? 3305604281 : var_11))))) ? var_2 : ((((min(var_0, 0))) ? (arr_43 [i_11 - 3] [i_13 - 2] [i_14] [i_14 - 2] [i_14] [i_15]) : ((57485 ? var_11 : 229))))));
                            }
                        }
                    }
                    var_28 = 9223372036854775807;
                    var_29 = 7;
                }
            }
        }
    }
    #pragma endscop
}
