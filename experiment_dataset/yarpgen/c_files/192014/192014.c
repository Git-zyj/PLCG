/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(var_14, 6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = (arr_1 [i_1] [i_0]);
                    arr_10 [i_1] [i_1] [i_0] = ((((((~4974600065189927290) ? ((var_1 ? 26 : 15)) : var_1))) ? (min((arr_6 [i_0] [i_1]), 127)) : (((max(6, (arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_3] [i_2] [12] [i_0] = (max(-1, 32127));
                                arr_18 [i_2] [i_2] [7] [i_3 - 1] [i_4] [i_4] = ((127 ? 8191 : ((((~8714224048083081110) & (~1))))));
                            }
                        }
                    }
                    arr_19 [i_0] [7] [0] [i_1] = (((!var_9) + (((((max(6, 1))) && -1943804402)))));
                }
            }
        }
        arr_20 [8] = var_11;
        arr_21 [i_0] [4] = (arr_14 [7] [3] [7] [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_25 [9] = ((-4974600065189927275 == (((~((((arr_2 [i_5]) != -6700846167312108812))))))));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_30 [4] [i_6] [i_7] = ((((((arr_2 [i_6 + 1]) << (((arr_2 [i_6 - 2]) - 3450716095))))) && (((var_8 ? (arr_29 [i_5] [5]) : (arr_29 [i_6 - 2] [i_6]))))));
                    arr_31 [i_5] [9] [i_5] = (min(((((arr_4 [i_5] [i_6 + 1] [i_7]) ? (arr_4 [i_7] [i_6] [i_5]) : (arr_7 [12] [12] [i_7] [i_7])))), (((arr_7 [i_5] [i_5] [i_7] [i_6 - 3]) ? (arr_7 [i_7] [10] [i_6 - 4] [i_5]) : var_4))));
                    arr_32 [i_7] [8] [8] = -1563764989;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 8;i_8 += 1)
    {
        arr_35 [i_8] [3] = ((var_11 ? (arr_6 [i_8 + 2] [i_8 + 2]) : (arr_6 [i_8 - 2] [i_8 - 1])));
        arr_36 [i_8 - 2] [i_8] = ((var_11 ? ((-86 ? 18446744073709551615 : 9223372036854775807)) : (arr_23 [i_8 - 1])));
        arr_37 [i_8] = ((~(255 | -1)));
        arr_38 [0] [5] = ((-(arr_24 [i_8 + 2])));
    }
    var_15 = ((((var_4 ? var_1 : (min(var_8, var_12)))) <= var_2));
    var_16 = -var_6;
    var_17 = var_9;
    var_18 = 17536;
    #pragma endscop
}
