/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((var_5 ? var_2 : (max((var_3 % var_4), var_8))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_0 [i_0])));
        var_15 = (min(var_15, ((var_0 - (arr_0 [i_0])))));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 = (max(var_16, (((((arr_8 [i_1 - 4] [i_2 - 1] [1] [i_3 + 1]) ? var_5 : (arr_8 [i_1 + 3] [i_2 + 1] [i_3] [i_3 + 3])))))));
                        var_17 = ((!(((((((min(var_2, (arr_5 [i_4] [11] [10])))) + 2147483647)) << (((((arr_4 [i_3]) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : var_6)) - 54598)))))));
                        var_18 |= ((((arr_2 [i_3]) / var_11)));
                    }

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        var_19 = (max(var_19, (((var_3 / ((var_0 << (((arr_15 [i_1 - 1] [i_1] [i_1]) - 2894)))))))));
                        arr_16 [i_1] [i_2] [i_3] [i_3] [5] = ((((var_11 ? var_4 : (arr_9 [i_3 - 1] [i_2] [i_3]))) % (min((arr_9 [i_3 + 2] [i_2] [i_5]), var_12))));
                    }
                    var_20 = ((((((arr_11 [i_2 + 1] [i_3 + 1] [i_3]) ? var_12 : (arr_11 [i_2 + 1] [i_3 + 2] [i_3])))) ? ((((var_7 + 2147483647) >> (var_12 - 65)))) : (((~var_2) ? (~var_0) : (var_5 & var_8)))));
                }
            }
        }
        var_21 = ((((((arr_8 [i_1] [i_1 + 3] [i_1 + 2] [i_1]) & var_11))) ? ((var_12 * ((((arr_5 [i_1] [i_1] [i_1]) <= (arr_11 [1] [i_1] [i_1])))))) : ((((max(var_9, (arr_12 [i_1] [i_1] [i_1] [i_1])))) << (((arr_8 [i_1] [i_1] [i_1] [i_1]) - 11))))));
        var_22 -= ((((((var_2 % var_4) <= (arr_5 [i_1 - 2] [i_1 + 2] [i_1])))) & ((((var_5 + var_6) >= (var_11 >= var_12))))));
    }
    var_23 = (((((((var_12 ? var_8 : var_0))) ? var_5 : (var_11 >= var_7))) & (var_8 * var_5)));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            {
                arr_21 [i_6] = ((var_9 ? -var_10 : ((var_4 ? (var_8 & var_8) : (arr_5 [i_6] [i_7] [i_6])))));
                arr_22 [i_6] = ((-(((arr_14 [i_7 + 2]) ? (arr_0 [i_7 - 1]) : (arr_15 [i_7 + 1] [i_7 - 1] [i_7])))));
                var_24 &= var_0;
            }
        }
    }
    #pragma endscop
}
