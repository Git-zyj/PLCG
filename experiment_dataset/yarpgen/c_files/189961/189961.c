/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-(min(89, -var_2)));
        var_19 -= (~1350797174);
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 ^= var_6;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_9 [i_2] = -var_17;
                    var_21 = (((arr_0 [i_2 + 1] [i_2 - 1]) ? (((arr_0 [i_2] [i_2 + 2]) ? 6076036421343506263 : var_11)) : (var_14 ^ var_5)));
                }
            }
        }
        var_22 = ((!((!(arr_8 [i_1] [i_1])))));
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_23 += ((~(((arr_12 [i_4]) ? ((8017 ? -8017 : -8017)) : (arr_11 [i_4])))));
        arr_13 [i_4] [i_4] = (min((((arr_11 [i_4]) ? (arr_12 [i_4]) : (arr_12 [i_4]))), (7856905403715563862 & -7156063676393068553)));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_21 [i_6] = ((!((!(arr_12 [i_5 + 1])))));
                    var_24 &= ((~((((max(var_11, 126100789566373888))) ? (arr_14 [i_5 - 1]) : (arr_20 [i_6 - 3] [i_7])))));
                    arr_22 [11] [10] [10] [1] = ((((((!var_1) ? ((((arr_16 [i_5]) ? (arr_11 [i_5 - 1]) : (arr_14 [i_5 - 1])))) : ((-7156063676393068553 + (arr_17 [i_7] [i_7] [i_7])))))) ? ((((arr_20 [i_6 + 2] [i_6 + 2]) && var_0))) : ((((693240726 ? 6379 : 7156063676393068546))))));
                }
            }
        }
        var_25 += ((-(((arr_20 [i_5 + 1] [11]) ? (arr_12 [i_5 - 1]) : (arr_15 [i_5 - 1])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_26 = (min((((~(arr_27 [i_5] [i_5] [i_5] [i_5 - 1])))), (((arr_15 [i_5 - 1]) ? (arr_15 [i_5 + 1]) : -693240726))));
                    var_27 = ((((((((59150 ? var_10 : -7156063676393068553))) ? (arr_27 [9] [i_8] [i_8] [i_8]) : 2960509685))) && (((((max(18446181123756130304, (arr_20 [i_8] [i_8])))) ? (((arr_24 [12] [i_8] [i_9]) ? (arr_10 [i_8]) : (arr_16 [16]))) : (arr_26 [i_5] [i_5] [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
