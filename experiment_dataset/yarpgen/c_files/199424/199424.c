/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_1 [i_0])));
        var_22 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_23 = var_18;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_24 = ((+(((arr_5 [i_0] [i_1] [i_0]) ? var_12 : var_5))));
                arr_7 [i_1] = var_9;

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_25 = var_13;
                    var_26 = 62;
                    var_27 |= 57;
                }
                var_28 ^= (((arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2]) <= ((var_3 ? 18446744073709551613 : 2040))));
                var_29 ^= (((arr_3 [i_0] [i_1]) ? (arr_3 [i_0] [i_0]) : var_7));
            }
            arr_10 [i_1] [i_1] [9] = (min(((max(((max(76, 13))), (arr_2 [i_0] [i_1])))), (((arr_9 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1]) | (arr_9 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1])))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_30 = var_7;
            var_31 = (max((arr_5 [i_4] [i_4] [i_0]), (62 < 9223372036854775794)));
            var_32 = (((((15275 ? (max(var_6, (arr_12 [i_0] [i_0]))) : (((arr_13 [i_0] [i_4]) + var_0))))) + (max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_4] [i_0] [i_0])))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_22 [i_0] [3] [i_4] [i_0] [i_4] = 0;
                        arr_23 [i_4] [i_4] [i_4] [12] = (((var_12 ? (arr_6 [i_0] [i_4] [i_5]) : var_9)));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_33 = (~250);
            var_34 = var_1;

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_35 = (min(((+(((arr_29 [i_0] [i_7] [i_8]) + var_0)))), var_9));
                var_36 = (((((arr_11 [i_8]) / (arr_11 [i_0])))) ? (var_17 / var_7) : (((arr_11 [i_0]) / (arr_20 [2] [i_8] [1] [i_0] [i_0]))));
            }
        }
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            var_37 -= ((min((max(var_6, var_11)), -16384)));
            var_38 = (max(var_38, ((((((624711417 == var_4) ? ((((var_11 + 2147483647) >> ((-2147483639 - (-2147483647 - 1)))))) : var_10)) == var_14)))));
        }
    }
    #pragma endscop
}
