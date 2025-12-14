/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (min(var_11, ((((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : var_10)))));
        var_12 = ((((((-9223372036854775807 - 1) != var_0))) >> (var_1 - 906767748)));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_13 = (min(var_13, (!18446744073709551615)));
            arr_6 [2] [i_1 + 1] = (~1);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = var_9;
            var_14 += (arr_4 [i_0] [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_12 [i_0] = var_5;
            var_15 ^= (arr_1 [0] [i_3]);
            arr_13 [i_0] [i_3] [i_3] = var_7;
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_16 = (((((arr_8 [i_0]) & var_3)) % (((arr_1 [i_0] [i_4]) ? 18446744073709551615 : var_10))));
                    arr_20 [i_4] = -var_2;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_17 = (min(var_17, var_1));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_7] [1] = var_6;
                    arr_30 [i_6] [i_6] = ((((max(9223372036854775794, (arr_28 [6] [i_8 - 1] [i_8])))) ? ((11656645154636719218 ? 6 : 8)) : var_1));
                    var_18 = (max(((((arr_22 [i_6]) != (arr_22 [i_6])))), (var_2 >= 19324)));
                    arr_31 [i_6] = ((1 ? (((var_4 ? (((arr_28 [8] [14] [i_8 - 1]) ? (arr_26 [i_6] [i_7]) : (arr_28 [i_8] [i_7] [i_8 + 3]))) : (min(1, -1309662506))))) : (max(-37, (min(var_9, (arr_22 [i_6])))))));
                }
            }
        }
        var_19 = ((var_2 ? ((((arr_21 [i_6]) == (arr_21 [3])))) : ((((arr_21 [i_6]) >= (arr_21 [i_6]))))));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        var_20 += (((((var_3 ? var_1 : 5813))) != var_5));
        arr_36 [4] = (arr_1 [i_9 - 1] [i_9 + 2]);
    }
    var_21 = var_9;
    var_22 = var_8;
    #pragma endscop
}
