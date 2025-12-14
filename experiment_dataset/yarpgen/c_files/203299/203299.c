/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = arr_3 [i_1];

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_13 = ((!(arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_14 = ((0 ? ((~(arr_1 [i_0]))) : -49));
                            arr_13 [i_4] [i_3] [i_0] [i_1] [i_4] = (arr_2 [1] [i_1]);
                            arr_14 [i_4] [i_4] [i_3] [8] [2] [i_4] [i_0] = (!2964189105);
                            arr_15 [i_4] [i_3] [i_2] [i_0] [i_4] = ((!(arr_11 [1] [i_1 + 1] [i_2] [13] [i_1 - 1] [i_1 + 1])));
                        }
                    }
                }
                arr_16 [i_1] = var_12;
                arr_17 [i_2] [i_0] [i_0] = (var_3 + ((var_11 ? 1 : var_0)));
            }
            var_15 = ((1 ? (arr_3 [i_1 + 1]) : (arr_4 [i_1 - 1])));
            var_16 = (min(var_16, ((2155 > (arr_1 [i_0])))));
            var_17 += (((~-1) ? var_4 : var_8));
        }
        arr_18 [i_0] = (((((-(arr_2 [i_0] [i_0])))) ? 49701 : var_8));
        arr_19 [i_0] = ((~((27201 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [13]) : (arr_1 [i_0])))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = 1;
        var_18 = arr_21 [3];
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        var_19 = ((((arr_21 [i_6]) ? (arr_24 [i_6] [i_6]) : (arr_21 [i_6]))));
        var_20 -= (((arr_21 [i_6]) ? (var_4 && var_2) : (arr_21 [i_6])));
        arr_25 [i_6] = 27188;
        arr_26 [i_6] = 0;
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_21 = (min(var_21, ((((arr_3 [i_7]) % ((1128281569 ? 9 : 1152919305583591424)))))));
        var_22 = arr_1 [i_7];
    }
    for (int i_8 = 2; i_8 < 13;i_8 += 1)
    {
        arr_32 [i_8] = (((!36450) ? (-11340 || 1029652149) : (max(var_3, (1003654030 / -1636973248)))));
        var_23 = ((+(((arr_31 [i_8]) & var_4))));
        arr_33 [1] = arr_23 [24];
        arr_34 [i_8] [i_8] = ((((1623541074 && (arr_20 [i_8 + 1] [i_8 - 1]))) ? (((arr_20 [i_8 + 1] [i_8 + 1]) & (arr_20 [i_8 - 1] [i_8 - 2]))) : ((~(arr_20 [i_8 + 2] [i_8 - 2])))));
        var_24 = ((~(max((((arr_3 [i_8]) ? var_9 : 27974)), 2047))));
    }
    #pragma endscop
}
