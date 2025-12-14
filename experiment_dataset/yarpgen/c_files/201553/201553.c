/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((((18446744073709551598 ? 0 : 2347161133581524356)) - -var_9));
    var_21 = ((((((var_0 || var_15) >= (2347161133581524332 == var_16)))) >> (var_12 + 59)));
    var_22 = (max(((-((37859 ? var_6 : var_19)))), var_6));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_23 = (min(var_23, (arr_1 [i_0])));
        var_24 = var_19;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_25 = ((-(arr_2 [i_1] [i_1])));
        var_26 = (max(var_26, var_7));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_27 = (min(42, 2347161133581524341));
            arr_8 [i_2] = ((max(65523, (max(2347161133581524323, 51347)))));
        }
    }
    for (int i_3 = 4; i_3 < 10;i_3 += 1)
    {
        var_28 = ((-(max((arr_11 [i_3] [i_3 + 3]), (arr_11 [i_3] [i_3 + 2])))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_29 = ((((((arr_13 [i_3] [i_3 - 3] [i_3]) ? var_14 : var_18))) ? ((var_16 ? (arr_7 [i_4] [i_4] [i_3 + 2]) : (arr_1 [i_4]))) : (arr_11 [i_3 + 1] [i_3 + 3])));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_22 [i_5] = -var_0;
                        arr_23 [i_6] [i_5] [i_6] = 237;
                        arr_24 [i_5] = (((arr_19 [i_3 + 2] [11] [i_3] [11] [11] [i_3]) == (arr_19 [i_4] [i_6] [i_4] [i_4] [i_3 - 1] [i_3 + 2])));
                        arr_25 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5] = ((var_12 ? (((var_5 || (arr_2 [i_3] [i_3])))) : (arr_20 [i_3 + 3] [1] [i_5] [13])));
                        arr_26 [i_6] [i_5] [i_5] [i_3] = (((arr_4 [i_3 + 2]) < (arr_11 [5] [i_6])));
                    }
                }
            }
            var_30 ^= (arr_18 [i_3 + 3] [i_3 + 1] [i_3 - 4]);
        }
    }
    #pragma endscop
}
