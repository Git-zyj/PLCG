/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((499088936 & var_10) >= var_6)) ? ((var_8 * (623366525 + 146))) : var_3));
    var_14 = (((~1) ? (((1 ? var_1 : var_0))) : ((0 + (max(234, 0))))));
    var_15 = var_2;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = ((1953833295 ? 1 : 1));
        arr_4 [i_0] |= ((-(max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = ((3458764513820540928 != (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
            var_18 = ((8 ? 8734340211790433384 : 0));
            arr_8 [i_0 - 1] = (arr_2 [i_0]);
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            arr_12 [i_2] [4] [i_2 + 2] = (min(5785044682444179137, 0));
            var_19 = 126;
            var_20 ^= (min(21, 9712403861919118231));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_21 &= (arr_10 [i_3 - 1] [6] [i_3 + 2]);
            var_22 += (arr_6 [i_0 - 1]);
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        arr_17 [i_4 + 4] = ((0 ? (arr_15 [i_4 + 2]) : (arr_15 [i_4 + 1])));
        arr_18 [i_4 + 4] = ((-1701178077 ? (arr_16 [i_4 + 1] [i_4 + 2]) : 20585));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] = (arr_19 [i_5]);
        var_23 = (((795789125 && -1) / (((arr_19 [i_5]) ? (arr_19 [i_5]) : (arr_19 [i_5])))));
        var_24 -= (((-39 <= 0) ? (((((arr_19 [1]) ? var_3 : 18446744073709551615)))) : (max((arr_19 [i_5]), ((1 ? 18 : -21345))))));
        var_25 = (max(var_25, ((((((var_7 >> (var_12 - 196))) & ((min((arr_20 [i_5]), 0)))))))));
    }
    var_26 = (((max(var_6, 0)) & -77));
    #pragma endscop
}
