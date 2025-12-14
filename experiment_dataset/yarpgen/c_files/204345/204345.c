/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_7;
        var_15 = (min(var_15, (((((arr_1 [11]) ? (arr_2 [i_0] [16]) : (arr_2 [i_0] [i_0]))) >= (((-(arr_0 [i_0] [i_0]))))))));
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((((((var_7 && var_6) - (((arr_5 [11]) - (arr_2 [i_1] [i_1])))))) ? var_0 : (((((var_10 ? (arr_0 [i_1] [i_1]) : var_4))) * (arr_5 [11]))))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_20 [i_3] [i_2] [i_3] [i_4] [i_5] = (min((((((var_3 ^ (arr_12 [i_3]))) > (((~(arr_17 [1] [i_3] [i_4]))))))), -1959720768));
                            var_17 = ((((877926408 >> (63 - 33)))) ? (max((arr_14 [i_1] [i_5] [i_1] [i_3] [i_5]), (arr_14 [i_1] [i_2] [i_3] [i_3] [i_5]))) : ((((-57 + 2147483647) >> (var_2 - 6824)))));
                            arr_21 [i_1] [i_3] [i_3] [i_3] [i_1] [i_5] = 238553138;
                            var_18 *= (3627579544804447093 - -7232094981171785316);
                            arr_22 [i_2] [i_3] [i_2] [20] [i_2] = ((((min(var_13, (arr_8 [i_1] [i_1])))) > var_1));
                        }
                    }
                }
            }
            arr_23 [i_1] [i_2] = (((~(arr_17 [8] [i_2] [i_2]))));
            var_19 -= (((-64 + 2147483647) << (1 - 1)));
        }
    }
    var_20 = (min(var_20, (((-(((var_4 / var_12) - (var_3 == 18446744073709551615))))))));
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_21 = (((((arr_0 [i_6] [i_6]) ? ((var_0 & (arr_5 [i_8]))) : ((((var_10 == (arr_17 [i_6] [i_7 - 2] [i_8]))))))) <= ((((0 > (arr_24 [i_6 + 1])))))));
                    var_22 = ((~((1277439598 ? 7988403895164415909 : 588245003))));
                    arr_32 [i_6] [i_7] [i_8] = (((65520 ? 8 : -85)));
                }
            }
        }
    }
    #pragma endscop
}
