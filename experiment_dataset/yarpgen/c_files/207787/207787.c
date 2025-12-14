/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] |= var_2;
                    arr_7 [i_2] [5] [i_1] = ((~((~(((arr_5 [i_0] [i_0] [i_1] [i_2 + 1]) ? var_4 : (arr_0 [i_2])))))));
                    var_17 = (((arr_2 [i_2 + 1]) + (arr_2 [i_2 + 2])));
                    arr_8 [i_2] [i_2] = 4294901760;
                }
            }
        }
    }

    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        arr_11 [i_3] = (arr_3 [i_3] [i_3] [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [8] [10] = ((((max(var_10, (min((arr_2 [i_4]), (arr_5 [i_6] [i_3] [8] [i_3])))))) || (4294901760 != 4294901789)));
                        arr_23 [i_3] [1] [i_3] [i_3 + 3] [7] = (min(((-(((arr_19 [i_3] [i_3] [3] [i_3]) ? var_0 : (arr_0 [i_3]))))), (min((arr_0 [i_3 + 2]), (var_5 <= var_14)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 11;i_7 += 1)
    {
        var_18 = ((((var_15 ? 18446744069414649849 : var_12)) & (4294901789 > 7860444272237444539)));
        var_19 = 0;
        var_20 = -16;
        var_21 = ((arr_19 [6] [i_7 - 2] [i_7] [i_7]) ? (~var_0) : (((9223372036854775791 ? var_1 : var_15))));
        var_22 = (((arr_14 [9]) < var_15));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_23 = (arr_19 [7] [i_8] [i_8] [i_8]);
        var_24 = var_13;
        var_25 = (9223372036854775791 || var_16);
        var_26 = (max(var_26, (((var_10 ? (arr_25 [i_8] [i_8]) : (arr_25 [i_8] [i_8]))))));
    }
    #pragma endscop
}
