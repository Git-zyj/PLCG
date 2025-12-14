/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(911355406, (var_14 <= var_10)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        var_19 += 25185;
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_20 = (max(var_20, (((-((-93 ? 25161 : (arr_4 [i_3] [i_2]))))))));
                        var_21 *= (arr_11 [i_2] [i_4]);
                        var_22 = (max(var_22, (((var_5 ? (((var_8 && (arr_11 [i_2 - 1] [i_1 - 2])))) : ((min((arr_11 [i_2 + 3] [i_1 + 1]), (arr_11 [i_2 + 2] [i_1 + 3])))))))));
                    }
                }
            }
        }
        var_23 = (arr_6 [i_1]);
        arr_15 [i_1] = ((((max(var_12, (!29)))) ? (max(240, ((var_1 ? (-32767 - 1) : (arr_5 [1]))))) : ((-(arr_9 [i_1] [i_1 + 1] [i_1])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_23 [11] [i_5] [i_5] [23] = (max(var_0, (arr_19 [i_1] [i_5] [13] [i_7])));
                        var_24 = (max(var_24, (((1659 ? (+-1400) : (min((min(-5203, (arr_8 [i_1] [i_1] [i_7]))), (arr_19 [16] [i_5] [16] [i_7]))))))));
                        var_25 = (max((min((min(var_15, var_12)), (arr_20 [22] [i_1 - 1] [i_1 + 3] [i_1 - 3]))), (((min(1, (arr_4 [i_1] [i_6])))))));
                        var_26 = min(((((min(9223372036854775807, var_9))) ? (var_6 * var_2) : (((((arr_20 [i_5] [i_5] [i_5] [i_1]) || -9223372036854775807)))))), (((((((arr_10 [i_1] [i_1] [i_1]) ? (-127 - 1) : (arr_10 [i_5] [i_6] [i_5])))) ? (arr_16 [i_1 - 3]) : (max(25100, (arr_20 [3] [3] [9] [i_7])))))));
                    }
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        var_27 = (max(-93, -27));
                        var_28 = var_7;
                        var_29 = 8;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_30 = (max(var_30, (((67 ? -1 : (arr_14 [i_9] [i_5] [i_1 - 3] [8]))))));
                        arr_30 [i_1 + 3] [i_5] [i_6] [i_9] [i_9] = (((var_7 / var_2) >= (32534 || 231)));
                        arr_31 [i_5] [i_9] [i_9] [22] = (((((-25185 + 2147483647) >> (120 - 114))) == ((-36 ? (arr_29 [i_1 + 2] [i_1] [i_9] [i_1] [i_1]) : (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                        arr_32 [i_1] [19] [i_5] [i_6] [i_9] [1] = ((((255 & (arr_21 [i_1] [i_5] [i_6] [15] [i_9])))) ? -25186 : (arr_21 [i_1 + 2] [i_1 + 3] [i_1 - 2] [i_1 - 3] [i_6]));
                        var_31 *= ((-121 ? 73 : 255));
                    }
                    var_32 = (((((((((arr_16 [i_5]) ? var_11 : -32758))) ? (arr_19 [i_1] [i_5] [15] [i_6]) : (-32767 - 1)))) || 38));

                    for (int i_10 = 2; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_33 += 14424495975022330571;
                        var_34 = var_9;
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_1] [i_1] [i_6] [i_1] = var_0;
                        var_35 += (arr_35 [8] [14] [i_6] [i_11 - 2]);
                        arr_39 [i_1] [i_6] [4] = (!93);
                        var_36 += (arr_26 [i_1 - 1] [i_6] [17] [i_11 + 1] [i_6]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
