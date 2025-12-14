/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 *= (max((max((((var_11 ? var_0 : 127))), (max(10543731700794839022, -1920872703)))), ((((max(-1272679087, var_18)) > (min(var_18, var_7)))))));
    var_21 = 3030002065;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_22 *= (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0 - 2]) : 14));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 8;i_3 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, (((((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / var_17))) ? ((31078 ? var_8 : var_0)) : -1313152282)))));
                        arr_10 [i_2] [i_2] [i_0] [i_2] = (((arr_0 [i_0 - 2] [i_1]) ? (((!(arr_1 [i_2])))) : (arr_4 [i_0 - 2] [i_3 - 2])));
                    }
                    for (int i_4 = 4; i_4 < 8;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_4] [i_2] [i_2] [i_1] [i_2] [i_0] = (((var_9 ? 115 : (arr_1 [7]))));
                        var_24 = var_10;
                        var_25 = var_5;
                        var_26 = (arr_7 [i_0 + 2] [i_1] [i_2] [i_4 - 3]);
                        arr_14 [0] [i_2] [i_4 - 3] = (arr_4 [i_2] [i_4 - 1]);
                    }
                    arr_15 [i_0] [i_2] [i_2] [i_0] = (((arr_11 [i_0 + 1] [i_2] [i_2] [i_2] [i_0 - 1]) - (arr_3 [i_2])));

                    for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_1] [i_2] [i_5 - 1] = (((((arr_4 [i_0] [i_0]) ? 18056154659286789555 : (arr_4 [i_2] [4]))) >= (arr_12 [i_0] [i_1] [i_2] [i_5])));
                        var_27 ^= (((arr_16 [i_5] [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_5]) <= 0));
                    }
                    for (int i_6 = 1; i_6 < 7;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            var_28 = (min(var_28, ((((arr_22 [i_6 + 3] [i_6 + 3] [i_6] [i_6]) < 1163418093)))));
                            arr_23 [i_0] [i_2] [i_2] [i_6 + 2] [i_7] = var_3;
                        }
                        for (int i_8 = 2; i_8 < 6;i_8 += 1)
                        {
                            var_29 &= ((((var_15 && (arr_27 [i_0] [i_8 + 1]))) ? ((((arr_19 [i_2] [i_1]) ? 1 : 9))) : (arr_26 [1] [i_6] [i_2] [i_1] [i_1] [1] [i_0])));
                            arr_28 [i_0] [i_2] [i_0] [i_2] [i_2] [i_6] [i_8] = (arr_27 [i_0] [i_0]);
                        }
                        arr_29 [i_2] [i_1] [i_1] = ((((-32767 - 1) + var_6)));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_30 = var_9;
                                var_31 = (max(var_31, ((((arr_24 [i_1] [i_1]) ? (arr_4 [i_0] [i_0]) : 9)))));
                                arr_37 [i_9] &= ((((3566082577 ? -96 : 2221019689358557952))) ? var_3 : (var_13 % 21490));
                                var_32 &= (arr_33 [i_9] [i_9] [i_0 + 2]);
                                arr_38 [8] [8] [i_9] [i_9] [i_10] &= ((65529 / (((arr_7 [i_10] [2] [i_0] [i_10]) << (((((-32767 - 1) + 32777)) - 9))))));
                            }
                        }
                    }
                    var_33 *= (((arr_2 [i_0 - 2]) | (arr_2 [i_0 - 2])));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_34 = (max(var_34, 11136865435164591997));
        arr_42 [i_11] [i_11] = ((((arr_39 [i_11] [i_11]) / (arr_39 [i_11] [i_11]))));
        arr_43 [i_11] [i_11] = ((-((((((arr_39 [i_11] [i_11]) ? 41028 : (arr_41 [i_11])))) ? ((var_9 ? 126 : (arr_40 [i_11] [i_11]))) : var_0))));
    }
    var_35 = (((var_10 >> (((max(var_6, var_2)) - 12140882705060876517)))));
    #pragma endscop
}
