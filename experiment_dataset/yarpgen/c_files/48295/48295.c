/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = var_3;
    var_19 = (min(var_19, var_5));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_20 = -30744;

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_1 + 2] [i_1 - 1] [i_0] = (((((-(min(702319400, (arr_2 [i_0] [i_0])))))) * (max((((~(arr_0 [i_0 + 2] [i_0 - 1])))), (((arr_4 [i_0]) ? -6 : -6))))));
            var_21 = (min((max(1, (arr_3 [i_1 + 1] [i_1 - 1]))), ((-(arr_4 [i_0 + 1])))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_3] = var_3;
                            var_22 = ((((arr_10 [9] [i_3] [i_3] [i_0]) ^ 702319406)));
                        }
                    }
                }
                arr_14 [i_2] [15] [i_0] [i_0] = (((((arr_9 [i_0 - 1] [i_1] [i_1] [i_1] [i_0 - 1] [i_0 - 1]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : var_16)) < 3592647895));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_23 ^= (3180468452 | ((((((9223372036854775807 >> (702319376 - 702319314)))) ? 654778178 : ((max(28752, (arr_6 [4] [i_1] [i_1 - 1]))))))));
                var_24 = 1;
                var_25 = ((0 * (((702319400 ^ 7701892576418648015) ? var_14 : ((var_4 ? (arr_3 [i_5] [i_1 - 1]) : var_0))))));
            }
            arr_17 [i_0] [i_0] = (~65408);
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                {
                    var_26 = ((((((4294967295 && -6) ? (min((arr_18 [10] [i_6 - 1] [14]), (arr_4 [i_7]))) : ((((arr_7 [i_0] [i_7]) ? 1 : var_15)))))) && ((9223372036854775807 && (((arr_21 [i_0] [i_0] [i_0]) || var_11))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_27 ^= (((((1114498854 ? -65409 : -740550862315409460))) ? ((((((arr_11 [i_6]) | (arr_18 [i_7 - 2] [i_6] [i_0])))) ? (arr_22 [9] [i_9] [i_9]) : var_0)) : (((-(arr_21 [i_7 + 3] [i_7 + 3] [i_6]))))));
                                var_28 = (arr_22 [i_9] [i_9] [i_9]);
                            }
                        }
                    }
                    var_29 = var_15;
                    var_30 ^= (((((arr_21 [i_0 - 1] [i_0] [i_0]) ? (arr_21 [i_0 - 2] [i_0 + 2] [i_0 - 1]) : (arr_18 [i_0 + 2] [i_0] [7]))) + (max((arr_4 [i_0]), var_1))));
                    var_31 += var_4;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        var_32 = (max(29492, -32027));
                        var_33 = (((((-var_10 ? (max(1, (arr_26 [i_12] [1] [i_11] [i_0 + 1] [i_0 - 2]))) : (var_0 <= 3588479810813393664)))) ? ((-654778179 * (arr_20 [i_0 - 1] [i_0 + 2]))) : 65411));
                    }
                }
            }
        }
    }
    #pragma endscop
}
