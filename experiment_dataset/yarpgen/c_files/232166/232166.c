/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 28605;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] &= 2958402999;
        arr_3 [1] = (((arr_0 [i_0 - 1]) == (((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 + 2])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            {
                var_20 = max((arr_4 [i_2 - 1]), (((var_11 <= (arr_4 [i_2 + 1])))));
                var_21 = (((var_5 ? var_10 : var_15)));
                var_22 = ((-(~27)));
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_23 = (max(var_23, 0));
        var_24 = (-5168837011335223350 == 897648645);

        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            var_25 -= (((var_10 >= 2420499451) | ((var_6 ? var_13 : var_5))));
            arr_14 [i_3] [i_4] = (((arr_7 [i_3] [i_4 - 2] [i_4]) | var_2));
            var_26 -= (((!-1052862355) == var_10));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_21 [i_3] [i_3] = (var_4 > -5140);
                            var_27 = (((((!(arr_8 [i_3] [i_5] [8])))) != -var_16));
                            var_28 = arr_9 [i_3];
                            var_29 = (((((var_11 ? (arr_10 [i_3]) : var_17))) > 4767380300930181620));
                            arr_22 [i_3] [i_4] [i_3] [i_6] [i_6] [i_7] = ((!(arr_18 [i_5] [i_7] [i_7 + 2] [i_7 + 1] [i_7])));
                        }
                    }
                }
            }
        }
        for (int i_8 = 4; i_8 < 9;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_30 = (min(var_30, (((!(arr_15 [i_3] [i_8] [i_9]))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_32 [i_9] [5] [i_9] [i_9] = (arr_16 [i_3] [i_9] [i_10]);
                            var_31 = var_11;
                            arr_33 [i_10] [4] = ((((((arr_11 [i_9]) ? -93 : (arr_12 [i_10] [i_10])))) && (14104 > 6358271171636939057)));
                        }
                    }
                }
            }
            var_32 = (max(var_32, ((((897648645 == var_1) ? (((((arr_23 [i_8 - 3] [i_8 + 1] [i_3]) == (arr_28 [i_3] [i_3] [i_3] [1]))))) : (((arr_23 [i_3] [i_3] [i_3]) | 1241799126346623301)))))));
            var_33 = (min(var_33, ((((arr_8 [i_3] [i_8] [i_8]) ? (arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : var_0)))));
        }
    }
    #pragma endscop
}
