/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max((((((8623 >> (-46260508 + 46260532)))) ? (((2905874004 ? var_10 : var_0))) : ((14449564672306678235 ? var_1 : 7736677313748773548)))), (min(10710066759960778067, ((var_0 ? 3997179401402873379 : 2265044895)))))))));
    var_13 ^= ((((max(var_3, (!var_10)))) ? ((var_1 | (max(3997179401402873380, 8)))) : ((((((max(8, var_7))) && (((var_3 ? var_4 : 253)))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0 + 4] [i_0 + 2])))) ? (arr_1 [i_0 - 2]) : var_6));
        var_14 = (min(var_14, (-14776840164330921526 || var_7)));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_15 ^= (((arr_3 [i_0 + 4] [i_0 - 2] [i_1]) <= (((arr_1 [i_1]) ? (arr_4 [i_0] [i_0 + 1] [i_1]) : (arr_3 [i_0 + 3] [i_1] [i_1])))));
            var_16 = ((var_1 ? (arr_3 [i_0 + 3] [i_1] [i_1]) : 12));
            var_17 = (arr_1 [i_0 + 1]);
            arr_5 [i_0] [i_1] |= (((arr_4 [i_0 + 2] [i_0 - 2] [i_1]) + var_3));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_18 -= ((((((arr_4 [i_0 + 2] [i_0 + 1] [i_2]) ? var_2 : 8))) ? (((arr_0 [i_0] [i_2]) ? var_10 : (arr_0 [i_0] [i_0 + 3]))) : (arr_6 [i_0 + 2] [i_0 + 1])));
            var_19 -= var_1;
            var_20 = (!var_9);
        }
        arr_8 [i_0] = (var_2 > var_6);
    }
    for (int i_3 = 4; i_3 < 7;i_3 += 1)
    {
        var_21 = (min(var_21, ((max((arr_4 [i_3] [i_3] [6]), (((((3997179401402873380 ? var_9 : var_9))) ? var_0 : ((10710066759960778077 ? var_2 : var_11)))))))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_22 = ((!((min(169, (max(var_6, 10710066759960778070)))))));
                    arr_15 [i_3] [i_4] [3] [i_4] = (max(var_11, var_1));
                    arr_16 [i_3] = (((((~(101 | 61912)))) ? 10710066759960778067 : 10710066759960778068));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_20 [i_6] [i_6] &= (((arr_7 [i_6] [i_6]) ? (arr_1 [i_6]) : (((arr_6 [i_6] [i_6]) + (arr_3 [i_6] [2] [i_6])))));
        var_23 |= 7736677313748773530;
    }
    var_24 = (min(var_24, var_5));
    var_25 = ((var_1 + (max(var_7, (var_1 / -6)))));
    #pragma endscop
}
