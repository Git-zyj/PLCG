/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (1 * 0);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_7;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 *= ((~(arr_4 [1])));
            var_16 = 1;
            arr_5 [i_0] [i_1] [i_0] = ((0 | (arr_4 [i_0 - 1])));
            var_17 = var_4;
        }
        var_18 = (!var_10);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 += var_7;
            arr_8 [i_2] [i_0] [i_0] = -0;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_13 [i_0] [1] [i_0] = (((arr_12 [i_0] [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : var_7));
                arr_14 [i_0] [i_2] [i_3] [i_0] = ((-(arr_4 [i_0 - 1])));
                var_20 &= ((~((1 ? (arr_7 [1] [i_2]) : (arr_1 [i_0])))));
            }
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                arr_19 [i_0] = var_11;
                var_21 ^= ((0 ? (~1) : ((((max((arr_15 [1] [i_0] [i_4 - 1]), 1))) & 0))));
                arr_20 [1] [i_0] [i_4 - 1] [i_4] = ((((1 ? ((max(1, 1))) : (((arr_3 [i_0] [i_4]) - (arr_3 [i_0] [i_0])))))) && (min(1, (min(var_7, var_4)))));
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 -= 0;
            arr_23 [i_0] = (((arr_21 [i_0]) ? 1 : (arr_3 [i_0] [i_5])));
            var_23 = (((~(!0))) == (~1));
            var_24 = (((arr_9 [i_0 - 1] [i_0] [i_0 - 1]) ? (((!(arr_22 [i_0 - 1])))) : (((1 < (arr_9 [i_0 - 1] [i_0] [i_0 - 1]))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_26 [i_0 - 1] [1] [i_6] |= (((arr_18 [i_0 - 1] [i_6] [i_6]) ? (arr_24 [i_0 - 1] [1] [i_0 - 1]) : var_7));

            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                var_25 += (((arr_1 [i_0 - 1]) ? 1 : (arr_1 [i_0 - 1])));
                var_26 = (!(arr_12 [i_0 - 1] [i_7 + 1] [i_7] [1]));
                var_27 &= 1;
                var_28 -= 1;
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_29 = (((((~var_0) + 2147483647)) >> (arr_30 [i_0 - 1] [i_0])));
            var_30 = (!(((0 ? (arr_18 [i_0] [i_8] [i_8]) : 1))));
            var_31 = var_1;
        }
    }
    var_32 = var_9;
    var_33 = var_7;
    #pragma endscop
}
