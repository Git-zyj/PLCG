/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_11 != (~var_4)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [10] = ((-(932560641 || 1024)));
        var_17 = (((((1024 - ((18446744073709551615 ? (arr_1 [i_0] [10]) : var_11))))) ? (var_4 + 1) : var_8));
        var_18 = (max((max(((((arr_1 [i_0] [10]) != var_14))), ((3755308992 ? -120 : 31)))), var_0));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_3] = (-(arr_4 [i_2]));
                    arr_11 [i_1] [1] [22] [i_3] = ((!(64511 || -27983)));
                    var_19 = 7;
                    var_20 = -112;
                    var_21 = (min(var_21, (arr_6 [13] [i_2] [i_3 - 1])));
                }
            }
        }
        var_22 = ((arr_9 [i_1] [i_1] [i_1]) ? ((12119 ? var_8 : (arr_5 [i_1] [i_1]))) : (var_13 <= 0));
        arr_12 [i_1] = (arr_8 [i_1] [1] [i_1]);
        arr_13 [i_1] = (arr_3 [i_1] [20]);
        var_23 = (0 ^ var_5);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = (~((var_7 * ((14717489321329685025 & (arr_5 [5] [19]))))));
        arr_18 [i_4] = ((((((arr_4 [i_4]) * (!var_1)))) ? (((((((arr_14 [i_4] [i_4]) - var_3))) == ((2943732880 ? var_5 : var_11))))) : var_6));

        for (int i_5 = 4; i_5 < 21;i_5 += 1)
        {
            arr_23 [1] [i_4] = ((((min(var_2, (arr_19 [i_4] [i_5 - 4] [i_5])))) ? ((((arr_19 [i_4] [i_5 + 1] [i_4]) * 120))) : (((arr_19 [i_4] [i_5] [i_4]) ? -121 : (arr_3 [i_5 + 2] [i_4])))));
            arr_24 [i_4] [i_4] = var_0;
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_29 [i_4] = 9215190781221765969;
            arr_30 [i_4] = (((arr_9 [i_4] [11] [i_4]) <= -12329));

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_24 = ((!((((((max(var_13, 31)))) | (3298530872 & var_11))))));
                var_25 = (arr_5 [i_4] [7]);
                var_26 = ((1 | (((((var_11 ? 31 : var_6)) == (~64))))));
                var_27 = (((((((arr_31 [i_4] [i_6] [16] [16]) ? (arr_8 [i_4] [i_6] [i_4]) : (arr_21 [14] [i_4] [i_7]))))) || 13423));
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_28 = ((((max((arr_8 [i_4] [i_6] [i_4]), -31))) || var_15));
                var_29 -= (-(((arr_31 [7] [i_6] [i_6] [22]) * (var_0 + var_14))));
            }
        }
        arr_37 [i_4] [i_4] = (arr_22 [1] [i_4]);
        var_30 += var_15;
    }
    #pragma endscop
}
