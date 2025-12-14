/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_4 [10] = (((arr_2 [i_0 + 1]) ? var_10 : (arr_2 [i_0 + 2])));
        var_13 = (arr_1 [i_0]);
        var_14 = (((arr_2 [i_0 - 1]) ? (((arr_1 [1]) - (arr_1 [11]))) : var_9));
        var_15 = (arr_0 [i_0]);
        var_16 = (((((arr_0 [i_0 - 1]) + 2147483647)) << (((((arr_0 [i_0 - 1]) + 24256)) - 10))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_17 -= (min((~var_1), (((((~(arr_1 [11])))) ? (arr_5 [i_1 + 2]) : 162))));
        arr_7 [i_1] [i_1] = arr_2 [i_1];
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_18 = ((((arr_9 [i_2 - 1]) % (arr_9 [i_2 - 2]))));
        var_19 = ((!(arr_9 [9])));
        arr_10 [i_2] = (~105);
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((var_11 ? (((arr_8 [i_3 - 1]) ? (arr_8 [i_3 + 1]) : (arr_8 [i_3 + 1]))) : (((arr_8 [i_3 - 2]) ? (arr_8 [i_3 + 1]) : (arr_8 [i_3 - 1])))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_20 = ((((((arr_16 [i_4 - 1] [15] [i_3]) >> (((!(arr_9 [11]))))))) ? var_11 : (((max((arr_13 [i_4 - 1]), (arr_11 [i_3 - 2])))))));
                    var_21 = var_2;
                    var_22 = (min((~var_6), (min(1539197983, 11531))));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_24 [i_3] [2] [i_3] [i_3] [i_3] &= ((~((~(arr_11 [i_4])))));
                        var_23 = (((arr_8 [0]) ? (arr_11 [12]) : ((~(arr_11 [0])))));
                    }
                }
            }
        }
    }

    for (int i_7 = 4; i_7 < 8;i_7 += 1)
    {
        var_24 = (arr_21 [12] [12] [0] [i_7] [i_7] [i_7]);
        arr_28 [i_7] = ((((((arr_25 [i_7 + 1] [i_7 + 1]) + (arr_23 [i_7 - 2] [i_7] [i_7] [12])))) ? (((arr_23 [i_7 - 4] [i_7] [i_7] [i_7]) ? (arr_25 [i_7 - 3] [i_7 + 2]) : (arr_25 [i_7 - 3] [i_7 - 2]))) : ((max((arr_0 [i_7 - 2]), (arr_0 [i_7 - 4]))))));
        var_25 = (arr_2 [i_7]);
    }
    #pragma endscop
}
