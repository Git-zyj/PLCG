/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 *= (((((var_11 ? var_10 : var_12))) ? var_12 : var_11));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [1] &= (((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (arr_0 [i_0]) : ((var_11 ? (arr_1 [22]) : (arr_0 [i_0]))))));
        arr_3 [i_0] = var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 = var_5;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                {
                    var_21 = (arr_8 [i_3 - 2] [i_3] [i_3] [i_3 - 1]);
                    arr_11 [i_2] [i_1] [i_2] [i_3] = (((var_8 + 2147483647) << (((arr_4 [i_3 - 1]) - 110))));
                    var_22 &= (!var_10);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_23 -= (((((((((arr_10 [i_4] [i_4] [i_4]) && var_3))) / -65280))) ? (min(((-26967 ? var_13 : (arr_6 [i_4]))), var_2)) : 11981));
        var_24 *= ((var_11 ? ((~((max(var_5, var_14))))) : ((1 ? -471224745 : 1761))));
        arr_14 [i_4] [21] = (max((~var_15), (arr_6 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        arr_22 [i_4] [i_5] [i_4] [0] = ((((-((max((arr_10 [4] [4] [i_4]), (arr_15 [i_7] [15] [i_5])))))) | (((((arr_9 [i_4]) || -915965823)) ? ((var_1 ? var_9 : 254)) : (arr_13 [i_6] [i_6])))));
                        arr_23 [22] [i_5] [i_5] [i_5] [i_7] = var_6;
                        arr_24 [i_4] [i_5] [i_6] [i_7 + 1] = (31 ? 125 : 17994);
                        arr_25 [i_4] [1] [i_6] [i_7] [i_4] [13] = ((((max(65280, 0))) ? (max((7399 && 11981), (arr_19 [i_5] [i_5] [17]))) : ((-var_9 ? (arr_4 [i_4]) : var_7))));
                    }
                    arr_26 [i_4] [i_5] [i_6] = (arr_5 [i_4] [i_6]);
                    var_25 *= ((((((-14240 | -64) ? (var_3 > var_15) : (arr_4 [i_6 - 2])))) ? (((((var_3 ? -14252 : var_12))) ? (arr_8 [12] [12] [12] [i_6 + 1]) : (max(-14254, var_13)))) : ((((arr_20 [1] [i_5] [i_5] [i_5]) ? (arr_12 [i_6 - 2] [i_4]) : (max(var_4, var_7)))))));
                }
            }
        }
    }
    #pragma endscop
}
