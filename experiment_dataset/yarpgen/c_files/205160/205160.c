/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 ? (((((var_2 << (var_3 - 8317042021658231335)))) ? -2384681939422779579 : -2384681939422779560)) : (max(var_12, -1941401979))));
    var_16 = var_11;
    var_17 -= ((-((((max(var_2, var_4))) ? (((-2384681939422779580 + 9223372036854775807) << (((-1414136600 + 1414136618) - 18)))) : (var_0 / var_6)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] = (max(var_8, (!130782738)));
            arr_7 [3] [i_0] [i_1] = (max(var_10, var_11));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] = (max(var_0, var_7));
            arr_12 [i_0] [i_0] = (-(max(-2384681939422779580, 2384681939422779560)));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_15 [18] [18] |= (arr_8 [i_0 - 1] [i_0 - 1]);
            arr_16 [i_0] = (((((var_13 ? var_0 : var_11))) ? (2384681939422779579 | var_10) : ((((764503704 && (arr_9 [i_0])))))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_22 [i_0] = ((~((-(var_9 != 0)))));
                    var_18 &= (((((((var_10 ? var_11 : var_9))) <= (var_12 | var_3))) ? var_9 : (max((max(var_0, var_3)), (arr_1 [i_0 - 1])))));
                    var_19 = (max(var_19, ((((var_3 / var_2) ? (max(6, var_6)) : (-7468670603521148532 <= 130782752))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_31 [i_6] [i_7] = (max(var_12, ((var_1 ? var_5 : var_7))));
                    var_20 = var_4;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_36 [2] [8] [i_7 + 1] [5] [i_9] [i_7] [i_10] = var_7;
                                arr_37 [i_7] [i_7] [i_8] [i_8] [i_8] = (((var_10 + 2147483647) << ((((((((arr_23 [i_7] [i_6]) ? var_6 : var_0)) != ((0 ? var_9 : (arr_27 [8])))))) - 1))));
                            }
                        }
                    }
                    var_21 = max(var_1, (max(var_9, -1414136594)));
                    var_22 = ((+(((arr_20 [i_6] [i_7 + 1] [20]) + var_7))));
                }
            }
        }
        arr_38 [i_6] [i_6] = (-var_10 >= var_12);
    }
    #pragma endscop
}
