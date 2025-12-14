/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (var_7 < var_6);
    var_11 *= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = ((min((492007199 * 1), ((1 ? (arr_2 [i_0] [i_0]) : var_9)))));
                arr_4 [i_0] = ((33 ? (((min((arr_2 [i_0] [i_0]), var_6)))) : (1 % var_3)));
                arr_5 [i_0] [i_0] [8] &= ((((((~var_4) ? ((var_5 ? var_5 : var_9)) : var_0))) ? (((((1 ? var_6 : (arr_3 [i_0])))) ? ((min((arr_2 [0] [0]), 1978357354))) : 11412697283825390618)) : (((((min((arr_3 [i_0]), var_2))) ? 1 : (arr_2 [i_1 - 1] [10]))))));
                var_13 = (((min((arr_2 [i_1 + 2] [i_0]), (arr_2 [i_1 + 2] [i_0]))) ? (((arr_2 [i_1 + 2] [i_0]) ? var_1 : var_7)) : (arr_2 [i_1 + 2] [i_0])));

                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    var_14 = ((!(((~(arr_2 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (+-36147)));
                                var_16 &= (((arr_1 [i_1] [i_2]) << ((((((var_3 ? var_2 : var_2))) || ((max(1, var_0))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = 4507;
                            }
                        }
                    }
                    var_17 = ((((max((!1536), (((arr_1 [i_0] [i_0]) | var_0))))) + (((((min(var_6, 28946)))) & (var_7 / 1)))));
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_18 = (max(var_18, (((((((arr_12 [i_0] [10] [i_1] [i_5] [4]) ? var_3 : (arr_12 [i_0] [1] [i_1] [i_5 - 2] [0])))) || (((arr_11 [1]) >= (arr_14 [6] [i_0] [6]))))))));
                        var_19 = max(18446744073709551615, (((var_4 ? (2147483647 != 96) : (min(44249, var_0))))));
                        var_20 *= (max(((((((arr_11 [16]) != 1))) / (var_5 > var_1))), (((((arr_9 [i_0] [i_1] [i_5] [i_6 - 1] [1] [i_5]) ? var_6 : (arr_8 [i_6 - 1] [1] [20] [20] [i_1] [i_0]))) & ((((arr_16 [i_1] [14]) <= 1)))))));

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_21 = (((var_5 ? ((max(-4500, (-2147483647 - 1)))) : var_3)));
                            var_22 = (min((arr_8 [i_0] [i_1] [i_0] [i_5 - 2] [i_6] [i_7]), -4500));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [4] = (((((arr_7 [i_0]) + 2147483647)) >> ((((45394 ? 1 : (arr_20 [i_0])))))));
                            arr_22 [i_0] = (((min(1, ((var_7 >= (arr_12 [i_0] [i_1] [i_1] [i_0] [i_0])))))));
                            var_23 = 0;
                        }
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            var_24 -= ((((min(((var_6 ? var_4 : (arr_15 [i_0] [i_1] [i_8] [i_0]))), (((-290733293 + 2147483647) << (1 - 1)))))) || ((max(((-4507 ? 153 : var_9)), (arr_10 [i_5 - 2] [i_8 - 2] [i_8] [i_8]))))));
                            var_25 = ((var_2 ? (var_0 & 0) : 31));
                            arr_26 [9] [i_0] [i_5 + 1] [i_0] [i_0] = ((~((-29 ? ((max(154, var_1))) : (var_1 <= 31)))));
                            var_26 = (arr_15 [i_1] [20] [i_6] [i_8 - 2]);
                        }

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            arr_29 [i_0] = 3349735714442086079;
                            var_27 += ((15097008359267465541 ? 50967 : var_1));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_32 [i_0] [8] = ((((((arr_10 [i_1 - 1] [i_5 - 2] [i_6 - 1] [i_6]) ? (arr_14 [i_0] [i_5] [i_0]) : (arr_10 [i_1 - 2] [i_5 + 1] [i_6 - 1] [i_1 - 2])))) ? (var_2 - var_8) : (((arr_1 [i_0] [i_0]) ? var_9 : 290733305))));
                            var_28 = (max(var_28, ((((((1 ? var_0 : (arr_25 [i_1] [i_5] [i_6 - 1] [i_10])))) || ((((arr_31 [i_1 + 2] [i_1 + 2] [i_5] [i_5 - 1] [i_6 - 1]) ? 1 : 3))))))));
                            var_29 -= 24990;
                            arr_33 [i_0] [i_1] [i_5 + 1] [i_6 - 1] [i_10] = ((var_0 ? var_4 : 8));
                            arr_34 [i_10] [1] [i_0] [i_0] [i_0] [i_0] = var_6;
                        }
                    }
                    arr_35 [i_0] [1] [i_5] [i_5] &= (((arr_6 [i_0] [i_0]) ? (((max(1, var_1)))) : var_3));
                }
                /* vectorizable */
                for (int i_11 = 4; i_11 < 19;i_11 += 1)
                {
                    var_30 = (arr_14 [i_0] [i_1 - 1] [i_0]);
                    var_31 = (arr_38 [i_0] [i_11 - 4] [i_11 + 1]);
                    arr_39 [i_0] [i_1] = (((var_5 > var_2) <= ((var_8 ? -4515 : var_2))));
                    var_32 += (((arr_17 [i_0]) ? (arr_36 [i_0] [i_1 + 2] [i_11]) : (arr_17 [i_1 - 3])));
                }
            }
        }
    }
    var_33 = (max(var_4, var_1));
    #pragma endscop
}
