/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, (((0 * (arr_4 [i_0 - 2] [i_0 - 2]))))));

                    for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_11 -= (arr_2 [i_0] [i_0 - 1] [i_2 - 2]);
                        var_12 = 74;
                        var_13 = (18446744073709551615 * 6400456733429939559);
                    }
                    for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_14 = var_0;
                        var_15 = (((arr_11 [i_4 - 2] [i_4] [i_4 - 3] [i_0 + 2]) || (arr_6 [i_4 - 4] [i_0 + 1])));
                        arr_12 [i_4] [i_0] = ((((((arr_0 [i_4 - 4] [i_4 - 2]) ? (arr_10 [i_2] [i_0]) : 8))) || (arr_11 [i_0] [i_1] [i_4 - 2] [i_4 - 4])));
                    }
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        arr_16 [i_5] [i_1] [i_2] [i_5] [i_0 + 1] [i_5] = var_9;
                        arr_17 [i_5] = (((arr_5 [i_2 + 1] [i_2] [i_2 + 1] [5]) ? 7053257236192589996 : (!var_9)));
                        var_16 = ((!((18446744073709551615 <= (arr_15 [i_5] [i_1])))));
                        arr_18 [i_5] [i_5 - 3] [i_2] [i_1] [i_5] [i_5] = ((~(arr_7 [i_5 + 1] [i_1] [i_0 - 4] [i_2 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_17 = ((((30229 && (arr_11 [i_0] [i_1] [i_1] [i_6]))) ? (((18446744073709551595 ? 64 : (arr_22 [i_0] [i_2] [i_2 - 2] [i_2])))) : 1));
                        var_18 &= ((19332 ? 68 : ((-(arr_1 [i_1] [i_1])))));
                    }
                    arr_23 [7] = ((15023054416962492179 ? ((238 ? var_6 : -1035094785)) : (((var_4 == (arr_4 [i_0] [i_1]))))));
                }
            }
        }
        var_19 ^= ((!(arr_10 [i_0 + 3] [i_0])));
        var_20 = 2146915906;
        var_21 -= (((((var_2 ? 27286 : 15023054416962492179))) ? (var_7 & 127) : (arr_7 [i_0 - 4] [i_0] [i_0] [i_0])));
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_22 = (max(var_22, (((!(arr_26 [i_7 - 1]))))));
        arr_27 [i_7] = ((-(arr_26 [i_7])));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 11;i_10 += 1)
            {
                {
                    var_23 = (arr_5 [i_8] [i_8] [i_8] [i_8]);
                    arr_35 [i_8] [i_8] [i_9] [i_10] = ((-25930 ? ((min((arr_2 [i_9 - 1] [i_10] [i_10 - 1]), (min(40, (arr_14 [i_10] [i_8] [i_10] [i_9] [i_8])))))) : (max((arr_0 [1] [i_10]), 1))));
                }
            }
        }
        var_24 = ((-(((!((max(var_5, (arr_29 [i_8])))))))));
        arr_36 [i_8] = (min(((((arr_19 [i_8] [i_8] [i_8] [i_8]) > (arr_19 [i_8] [i_8] [i_8] [i_8])))), 216));
        var_25 = (min(var_25, ((min(((-64 * ((32767 ? 18446744073709551615 : 1)))), (min(-25433, ((var_8 ? 18446744073709551596 : -56)))))))));
    }
    var_26 = (max((~2282303425), ((var_6 ? 1 : 27272))));
    #pragma endscop
}
