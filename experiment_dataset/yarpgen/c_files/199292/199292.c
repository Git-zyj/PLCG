/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_2 ? 0 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_6 [i_2] [i_1] [i_2] = (524287 ? var_9 : -1940110225);
                    arr_7 [i_0] [i_0] [i_2 + 1] [10] = (((arr_4 [i_0] [i_0] [i_2]) | (arr_3 [i_2] [i_1])));
                    var_14 = (max(var_14, ((4195059625517787500 - (arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1])))));
                }
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    var_15 = 1;
                    arr_12 [i_3] [0] [i_3 + 3] = ((min(-8957399162728673309, (min(-7623471564690602871, 1940110224)))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((~(max((arr_11 [i_0] [i_1] [i_3]), 1940110235)))))));
                                arr_19 [i_0] [i_0] [i_3] [i_4 - 1] = (arr_17 [i_0] [i_1] [i_1] [i_4] [i_5]);
                                var_17 *= (((((min(var_4, -21193))) ? (min((arr_8 [i_4] [1]), var_9)) : var_7)));
                                arr_20 [10] [i_1] [i_4] [i_4] [i_3] = (!((max(21193, (min(-1940110225, 0))))));
                            }
                        }
                    }
                }
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    var_18 ^= (~-114);
                    arr_24 [i_6] [i_1] [i_6] = ((((4887 <= (((arr_17 [i_0] [i_1] [i_6] [i_0] [i_1]) | -4861)))) ? ((min(1, -2021145435))) : ((var_12 ? (!1) : (arr_15 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [i_6])))));

                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        arr_27 [i_7 + 1] [i_1] [i_6] [i_7 - 1] = (min(-308136335, 8));
                        var_19 = (max(var_19, var_7));
                        arr_28 [i_1] = (((arr_21 [i_6] [i_1] [i_0]) & -var_3));
                        var_20 = (((((((arr_13 [i_0] [i_1] [i_0] [i_6] [i_0] [i_0]) != 481021947)) ? (arr_17 [i_1] [12] [i_6] [i_7] [i_6 - 2]) : (((arr_0 [i_7]) << (((arr_4 [i_1] [i_1] [i_6]) - 17599555597871679109))))))) ? (min(6, 1)) : -1864725252);
                        var_21 = (!(arr_21 [i_0] [i_0] [i_0]));
                    }
                    var_22 = (max(var_22, (((((((!(((-70 ? (arr_14 [i_0] [i_0] [4] [i_0] [i_0]) : (arr_1 [i_1])))))))) % (((min(197, var_11)) | (1 % 4903))))))));
                    var_23 = (min(var_23, (((+(max(((var_10 ? (arr_9 [i_1] [i_1] [i_1] [i_6]) : 18446744073709551615)), (arr_22 [0] [i_6] [i_6 + 2] [i_6 - 2]))))))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        var_24 = min((arr_0 [i_0]), (max(1, (max((arr_3 [i_0] [i_0]), 18446744073709551615)))));
                        var_25 = arr_32 [i_0] [i_0] [i_0] [7];
                        var_26 = (arr_10 [i_1] [i_1]);
                        arr_34 [i_9] [i_1] [i_1] [i_9] = (3 != 16445577501654447672);
                    }
                    arr_35 [i_1] [i_1] [i_0] [i_0] = (max((((var_6 == (((var_4 <= (arr_13 [i_0] [i_0] [i_1] [i_1] [6] [i_8]))))))), ((2618693344470610043 * (arr_0 [i_0])))));
                }
                arr_36 [5] [14] [i_1] = var_4;
                arr_37 [i_0] [i_1] [i_1] = (min((!1), (((arr_33 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]) || 2021145435))));
                var_27 = (max(((max(1, (arr_30 [i_0] [i_1] [i_1])))), (arr_8 [i_0] [i_1])));
            }
        }
    }
    var_28 = (var_8 * var_8);
    var_29 = ((1 ? var_7 : (((11896011146137463413 - var_2) ? (max(185, var_2)) : (~255)))));
    #pragma endscop
}
