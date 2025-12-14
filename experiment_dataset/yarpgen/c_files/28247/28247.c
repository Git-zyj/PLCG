/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(-var_8, var_2);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((2092 || 713958140671252270) ? (((!(-127 - 1)))) : (((!(arr_1 [i_0]))))));
        var_18 ^= ((((arr_0 [i_0]) ? -93 : 92)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_19 = (arr_1 [i_0]);
            var_20 = (-9223372036854775807 - 1);
            arr_7 [i_0] = 85;
            var_21 = (max(var_21, ((((arr_5 [i_0] [i_1] [i_1]) * var_3)))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                arr_13 [i_0] [i_2] [i_3] = ((-(((arr_10 [i_0]) + 65535))));
                arr_14 [i_0] = (arr_10 [i_0]);
                var_22 = ((10201470982467346222 ? var_3 : (arr_4 [i_0])));
            }
            var_23 = 5371362583429705437;

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_24 = ((var_0 ? (arr_8 [i_0 + 2] [i_0]) : var_6));
                arr_17 [i_0] [i_0] = (arr_5 [i_4] [i_2] [i_0]);
                var_25 = (((arr_4 [i_0]) == var_3));
            }
            var_26 = 713958140671252270;
        }
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            var_27 = (((((~(arr_1 [i_0])))) ? ((~(-32767 - 1))) : 89));

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_28 = (arr_5 [i_0] [4] [13]);
                var_29 = ((-4 ? 248 : (arr_15 [i_0] [i_5] [i_0])));
                var_30 ^= ((var_2 <= (((101 << (var_10 - 3527))))));
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_26 [i_0] [i_0] = ((-93 * (((arr_19 [i_7] [i_0 - 1] [i_0 - 1]) ? 65535 : 47843))));

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_31 = (((arr_2 [i_7]) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) : var_13));
                    var_32 |= (((var_15 ^ 21714) / ((~(arr_22 [i_5] [i_5])))));
                    var_33 ^= 511;
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_34 = (((arr_31 [i_0 + 2] [i_0] [i_5 - 1] [i_5 - 1]) != 65408));
                    arr_33 [i_0] = (-(arr_12 [i_5 + 1] [i_5 + 1] [i_0 - 1]));
                }
                var_35 ^= (!50341);
            }
            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_39 [i_0] [i_0] = (arr_23 [i_11] [i_10] [i_0 + 2] [i_0 + 2]);
                    var_36 = (max(var_36, 87));
                    var_37 = ((+((((arr_22 [2] [i_5]) && (arr_9 [i_0] [i_5] [i_10 + 3]))))));
                }
                var_38 = (arr_12 [i_5 + 1] [i_5 - 1] [i_5 + 1]);
            }
        }
        var_39 = var_1;
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                {
                    var_40 = max((arr_40 [6]), (min(var_8, (arr_44 [i_13] [i_12]))));
                    var_41 = (((min((var_13 || var_5), (~0))) | (min(var_8, var_11))));
                }
            }
        }
    }
    #pragma endscop
}
