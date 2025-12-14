/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((-31672 ? (((((1 ? var_4 : var_0))) ? (max(var_4, var_8)) : var_11)) : 134)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_0 [i_0])));
        var_15 |= ((((((arr_0 [i_0]) > -384382688))) | ((((arr_0 [i_0]) || (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_16 = (!(-9223372036854775807 - 1));
                var_17 = (min(var_17, (((var_4 ? ((var_0 >> (arr_10 [i_2] [i_2] [i_3]))) : (arr_4 [i_1 - 2] [i_1 - 2]))))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_18 = (arr_11 [1] [i_1] [i_1 + 2] [i_1] [i_1 - 1]);
                    var_19 |= (~(arr_14 [i_1 - 1] [1] [12] [i_2] [13]));
                }
                var_20 = (min(var_20, (arr_5 [i_1] [i_2] [i_3])));
            }
            var_21 -= ((~(arr_7 [i_1 + 1] [i_1 - 1] [i_2] [i_1])));
        }
        var_22 = 150;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_23 = (arr_0 [i_5]);
        arr_18 [i_5] [1] = 14408290613676025514;
        var_24 = 80;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_23 [i_6] = var_0;
        var_25 *= (((arr_3 [i_6]) ? 113 : (((arr_3 [i_6]) ? var_3 : (arr_3 [i_6])))));
        var_26 = 31655;

        /* vectorizable */
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            var_27 = (-127 - 1);
            var_28 = (!(((~(arr_21 [i_6] [i_7])))));
            var_29 = (arr_9 [i_7 + 3] [i_7 + 3]);
            var_30 *= (~-70);
        }
        var_31 = (((max((((arr_12 [i_6]) ? var_5 : (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]))), (arr_12 [i_6]))) >> (((((((arr_15 [i_6] [i_6]) ? 0 : (arr_6 [i_6] [3]))))) - 6096))));
    }
    var_32 = ((!(((((var_4 ? 1 : var_7)) ^ (max(var_3, 131071)))))));
    #pragma endscop
}
