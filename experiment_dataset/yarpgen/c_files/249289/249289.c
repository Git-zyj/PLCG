/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] = ((((min((arr_4 [i_2]), (((var_9 ? 24749 : 46933)))))) ^ ((155 ? 2130301062020042728 : 18446744073709551615))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_13 = ((!(arr_2 [i_0])));
                            var_14 = (max(var_14, ((min((((((arr_1 [3]) < 25)))), ((((max((arr_11 [i_4] [i_3] [i_2] [i_1 + 1]), 0))) ? (((arr_8 [i_0] [2] [i_2] [3]) ? var_8 : 65)) : (((arr_11 [i_4] [i_2] [i_1] [i_0]) ? (arr_2 [i_0]) : 1)))))))));
                            arr_16 [6] [i_1] [i_2] = ((16352 ? 49 : 1124380526));
                            var_15 = (arr_13 [i_0] [i_1 + 2] [i_3] [i_3] [i_3] [i_1]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_16 = (max(var_16, (((((((((18446744073709551615 ? var_10 : (arr_4 [4]))) != ((min((arr_1 [i_0]), (arr_1 [i_0])))))))) & (arr_1 [i_1 - 1]))))));
                            var_17 = ((1 ? 0 : 0));
                        }
                        var_18 = (max(var_18, ((min(((-((var_8 ? 17018 : var_0)))), var_0)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_19 = (min(var_19, (((((arr_17 [i_6] [i_2] [i_1] [i_0 + 2]) + var_0)) > (arr_1 [i_1])))));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_20 -= (arr_4 [i_6]);
                            var_21 = (((((3584 ? (arr_22 [i_6] [i_0] [i_2] [i_1]) : 19507))) ? (~var_10) : (9223372036854775798 >= 1)));
                            var_22 *= (((arr_19 [i_0] [14] [2] [i_0]) ? (arr_22 [i_0] [i_6] [i_1] [i_0]) : (arr_5 [i_0 + 2] [i_1 - 1] [i_1 - 2])));
                            var_23 = (0 >= 7);
                            arr_24 [i_6] [i_6] [i_2] [i_1] [i_6] = (((((var_3 ? (arr_0 [i_2]) : (arr_2 [i_0 + 1])))) ? (arr_9 [i_0] [i_1] [i_6]) : 3285874654));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_24 = (min(var_24, var_4));
                        var_25 = (max(var_25, (arr_3 [i_1 + 2] [i_1] [i_2])));
                        var_26 ^= ((((((arr_22 [i_0] [2] [i_2] [i_8]) ? var_7 : 1))) ? (((arr_3 [i_1] [i_2] [11]) ? var_10 : (arr_12 [i_0] [i_1 - 3] [i_2] [i_8]))) : ((((arr_7 [i_1]) / (arr_2 [i_2]))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_27 = ((arr_26 [i_0 - 2]) < -var_12);
                            var_28 ^= (((arr_3 [i_9 - 2] [i_1 + 1] [i_0 + 2]) ? -var_2 : ((((arr_12 [i_0 + 1] [i_2] [i_9] [i_10]) ? (arr_28 [i_0] [9]) : -825928590)))));
                        }
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            var_29 = (((((46049 - (arr_3 [i_0] [i_2] [i_9])))) >= (var_0 ^ var_7)));
                            var_30 -= -19487;
                            arr_33 [i_0] [i_0] [5] = (((!(arr_8 [i_0] [i_1] [i_1] [12]))));
                            arr_34 [i_0] [14] [i_1 + 2] [i_2] [8] [i_9] [i_11] = ((((var_2 ? 46029 : (arr_9 [i_11 + 1] [i_9] [i_0]))) * (((!(arr_0 [i_11]))))));
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_31 *= ((-(((arr_28 [i_0] [9]) ? var_9 : var_8))));
                            var_32 = (arr_2 [i_12]);
                        }
                        var_33 = -32;
                        arr_37 [i_0] [i_1] = (((arr_20 [i_0] [i_1] [i_1 - 3]) ? var_7 : (arr_20 [i_0] [i_1] [i_1 + 2])));
                        var_34 = ((!(((-(arr_13 [14] [i_2] [1] [1] [13] [i_2]))))));
                    }
                    var_35 = ((((((-(arr_13 [i_1] [1] [i_2] [i_0 + 2] [i_1] [i_0]))) + 2147483647)) >> (2212953677 - 2212953660)));
                }
            }
        }
    }
    var_36 *= (max(29640, (((48517 ? 255 : -63)))));
    var_37 = 46024;
    #pragma endscop
}
