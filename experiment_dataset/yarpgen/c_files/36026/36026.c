/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((-1 ? 988789696538410215 : ((min(((-(arr_0 [i_0] [i_1]))), (((arr_6 [13] [i_1] [i_0] [i_2]) ? var_0 : var_10)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (((var_7 ? var_0 : 11)));
                        arr_10 [i_3] [i_0] [i_2 + 1] [i_1] [i_0] [13] = (((arr_3 [i_0] [i_2 + 1]) ? var_6 : ((6404543547149847023 ? 1 : 5430676298099270809))));
                        arr_11 [i_2] [i_1] [i_0] [i_3] [i_1] [i_0] = (((arr_9 [16] [i_1 + 1] [6] [i_2 - 1]) ? (arr_9 [i_1 + 2] [i_1 + 1] [i_1] [i_2 - 1]) : (arr_9 [i_1] [i_1 + 2] [i_2 - 1] [i_2 + 1])));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] = (~143);
                        var_13 = (min((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_4 - 1] [i_0] [i_0] [i_4 + 1]))), ((-10951 ? var_8 : (arr_6 [i_4 + 1] [i_0] [i_0] [i_1])))));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_17 [5] [i_2 + 1] [i_2] [i_5] [i_0] = 18446744073709551589;
                        var_14 = (arr_2 [i_0]);
                        arr_18 [i_0] [i_5] [i_2] [i_2 - 1] [i_0] [i_0] = 20915;
                    }
                    var_15 = (min(((((var_5 ? var_10 : var_6)))), ((4294967295 ? (105 && 1984) : ((min((arr_15 [7] [i_1] [i_2 + 1] [i_0]), 127)))))));
                    var_16 = (((((arr_16 [i_0] [i_2]) == ((((arr_4 [i_0] [6] [i_0]) > -18876)))))) / 60);
                    arr_19 [14] [14] [i_0] = (min(-54, var_8));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_17 |= (max(94, 110));
                    arr_26 [i_6 + 2] [i_7] [i_7] [i_6] = ((-((max((-32767 < 18341939997441425205), (-5 && var_3))))));
                    var_18 = (min(var_18, (((~((min((arr_23 [i_6 + 1]), (arr_23 [i_6 + 2])))))))));
                    var_19 = (((arr_22 [i_6] [1] [i_6 + 2]) | (arr_22 [i_6 + 2] [i_7] [i_8])));

                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_20 = (((((((min(12143, (arr_23 [i_6])))) % (~-23429)))) ? (arr_28 [i_6 + 1] [i_9 + 2] [i_6] [i_9]) : (max(((min(0, (arr_21 [i_6 + 1])))), (111 & var_4)))));
                        var_21 = ((-(min(((((arr_25 [15] [i_6] [i_8]) ? (arr_29 [16] [i_7] [i_8] [i_6]) : 0))), (min(386312354236814453, 1))))));

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_22 = 1;
                            arr_32 [i_6] [i_7] [i_6] [i_7] [i_10] |= ((-((((max(38, 1))) ? (-127 - 1) : ((1 ? 28 : 1))))));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_23 = ((-(((((1 ? (arr_27 [i_6] [i_9 - 1] [i_8] [i_9 - 1]) : 0))) / (min((arr_21 [8]), (arr_35 [i_11] [i_9] [i_9] [i_6] [i_7] [i_6])))))));
                            var_24 = var_0;
                        }
                        var_25 = ((((min((arr_24 [i_6 + 2] [i_6]), (var_4 || var_1)))) ? ((~(arr_29 [i_6] [i_7] [i_8] [i_6]))) : (arr_29 [i_6] [i_6] [i_8] [i_6])));
                        var_26 = (((((2361449424 ? 20915 : 42))) / (max(((((arr_34 [i_8]) ? 251 : 18012))), (((arr_20 [i_9]) >> (-55 + 57)))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_27 = ((-(arr_20 [i_6 + 1])));
                        var_28 = ((0 ? var_6 : (arr_27 [15] [1] [i_8] [i_12])));
                    }
                }
            }
        }
    }
    var_29 = var_7;
    var_30 = var_6;
    var_31 = ((0 ? 79 : (max(var_2, (var_1 ^ var_7)))));
    #pragma endscop
}
