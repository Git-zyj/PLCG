/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((!((((((var_0 ? var_10 : var_12))) ? var_13 : var_15)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_17 = ((((arr_2 [9]) ? 232 : 209)));
        var_18 ^= (var_10 * var_0);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_19 -= ((~(((((arr_4 [18]) ? (arr_6 [14]) : (arr_0 [1])))))));
        arr_7 [i_1] = (max(((~(arr_6 [i_1 - 1]))), (((arr_6 [i_1 + 2]) ? (arr_4 [i_1 - 1]) : 146))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_20 [i_2] [i_2] [7] [1] [11] [i_2] = ((+(((arr_18 [1] [8] [4] [4]) ? (((~(arr_17 [6] [1])))) : (((arr_14 [i_2] [8] [i_2]) ? 0 : var_7))))));
                        arr_21 [i_2] = (((var_6 || 24) - ((-var_2 * (arr_19 [1] [15] [1])))));
                    }
                    arr_22 [17] [i_2] [i_2] [13] = ((((((max(32, var_6)) % var_11))) ? ((min((max(var_2, var_13)), 16367))) : (min((arr_18 [i_2] [11] [i_2] [i_2]), (0 / var_14)))));
                    arr_23 [i_2] = 185;
                }
            }
        }
        var_20 = (min((arr_0 [i_2]), (((((arr_14 [i_2] [0] [i_2]) ? 1443321244 : 225)) << (((((((arr_3 [i_2]) ? var_7 : (arr_12 [i_2]))) + 1147429439)) - 13))))));
        arr_24 [i_2] = var_11;
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_27 [i_6] [i_6] = ((var_8 ? ((((((0 ? var_12 : 504)) >= ((min((arr_12 [i_6]), 2153))))))) : (min((((arr_10 [i_6] [i_6]) ? 47 : (arr_16 [8] [8] [8] [8]))), -505))));
        var_21 = 448;
    }
    #pragma endscop
}
