/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                arr_8 [14] [22] [0] = ((var_13 ? (arr_0 [i_1 - 1] [i_2 + 1]) : (((arr_6 [i_0] [i_1] [21]) ? var_17 : 28817))));

                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    arr_11 [22] [4] [i_1] [18] [15] [21] = 127;
                    var_20 -= ((var_6 ? (arr_0 [21] [i_1 - 3]) : (arr_0 [11] [i_1 - 2])));
                    var_21 = (~6);
                    arr_12 [17] [1] = var_19;
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_17 [i_5] [19] [i_2] [9] [i_0] = (((arr_13 [i_0 + 3] [i_0] [i_0]) > (((arr_3 [10] [19]) ? (arr_3 [11] [2]) : (arr_4 [16] [16])))));
                        var_22 = arr_10 [1] [i_2] [i_2 + 1] [22] [i_2 + 1];
                    }
                    var_23 -= 960;
                    var_24 = var_5;
                }
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    arr_21 [6] [i_0] [i_1] [14] [0] = (((arr_4 [20] [5]) == var_9));
                    var_25 = arr_3 [i_2 + 1] [i_1 - 2];
                    arr_22 [1] = 63;
                    var_26 = (((arr_4 [2] [i_0 - 3]) && (arr_4 [i_1 - 3] [i_6])));
                }
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    var_27 = 65535;
                    arr_26 [16] [i_1] [17] [21] = (((38335 - 68) * (((!(arr_25 [i_0] [i_1] [14]))))));
                    var_28 = (((arr_3 [i_0 - 1] [i_7 + 1]) ? 5086052299638699470 : (arr_6 [i_7 + 1] [19] [8])));
                    arr_27 [12] [3] [5] [22] = (arr_5 [16] [i_1] [22]);
                }
                arr_28 [10] [0] = var_7;
                var_29 = (min(var_29, ((((arr_23 [i_0] [18] [i_1 + 2] [22]) | (arr_23 [3] [13] [i_1 + 1] [15]))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_30 ^= var_1;
                    var_31 = (min(var_31, (((128 ? ((21262 ? (arr_0 [13] [3]) : var_8)) : (arr_0 [i_0 + 2] [3]))))));
                    var_32 = (((arr_2 [i_0 - 3]) || (((55 ? 233 : 0)))));
                }
                arr_33 [2] [i_8] = ((var_11 ? (arr_15 [i_0 - 2]) : (arr_3 [i_1] [i_8])));
                arr_34 [12] [14] [i_8] [11] = arr_16 [i_8] [i_8] [10] [i_0] [i_0] [i_0];
                var_33 = var_12;
            }
            arr_35 [11] [21] = (((((((max((arr_16 [2] [7] [18] [i_0] [12] [i_0]), var_9))) & ((((arr_13 [21] [10] [18]) > var_1)))))) ? (min((min((arr_30 [1] [9]), (arr_3 [i_0] [7]))), ((max(255, var_17))))) : (((((max((arr_31 [20] [1]), (arr_20 [22] [7])))) ? ((max(127, 200))) : (arr_6 [i_0 - 2] [i_1 + 3] [i_1]))))));
            arr_36 [3] [15] [i_0] = (arr_29 [i_1] [i_1] [8]);
        }
        var_34 = (((~5086052299638699470) ? (((max(938, 61347)))) : (((arr_24 [i_0 + 2]) * (arr_23 [12] [i_0 + 1] [i_0 - 1] [i_0])))));
        arr_37 [i_0] [i_0] |= arr_0 [21] [19];
        arr_38 [i_0] = (max(((((arr_9 [16] [15] [15] [i_0]) ? ((var_11 ? 127 : 65467)) : (arr_32 [i_0] [15] [15] [4] [i_0])))), (((((var_9 ? (arr_0 [15] [10]) : 148))) ? (((arr_10 [9] [5] [3] [5] [i_0]) | var_6)) : (arr_19 [16] [4] [12] [i_0] [11])))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        var_35 = (max(var_35, (((var_0 ? -1 : (arr_14 [10] [i_10 - 1] [i_10 - 1] [0]))))));
        var_36 = ((!(arr_6 [i_10 + 1] [8] [8])));
    }
    var_37 = (~var_13);
    var_38 = (min(var_38, (((var_10 ? var_12 : (((((var_16 ? var_12 : 102))) ? 174 : (var_5 >= var_11))))))));
    #pragma endscop
}
