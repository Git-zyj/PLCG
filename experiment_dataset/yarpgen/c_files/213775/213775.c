/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((~var_12) ? (((var_11 ? var_7 : var_3))) : ((var_2 ? var_11 : var_5))))) ? var_9 : var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = arr_2 [i_0];
        var_16 = ((~(arr_2 [i_0])));
        arr_5 [i_0] = ((~(arr_1 [i_0] [1])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_17 = (arr_6 [i_1]);
        arr_9 [5] = (arr_1 [i_1] [i_1]);
        arr_10 [i_1] [i_1] = ((((arr_6 [i_1]) ? ((((arr_7 [i_1] [i_1]) ? (arr_8 [i_1] [i_1]) : 111))) : (max(var_3, -6923911226795744950)))) | (max(((var_0 ? var_13 : var_2)), (arr_2 [2]))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    {
                        var_18 = ((+(((arr_12 [i_1] [i_2] [i_2]) ? (arr_20 [i_2] [i_3] [i_2] [i_2]) : 4130997367916938889))));
                        arr_21 [i_2] [i_2] [i_4] = ((((max(-18014398509481984, (max(var_12, (arr_11 [3] [i_2])))))) ? (arr_1 [i_2 + 1] [i_4 + 1]) : (arr_12 [i_3] [i_3] [i_2])));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            arr_29 [i_5] |= max((max((arr_0 [i_6 + 1]), (arr_15 [i_5] [5]))), (arr_28 [i_5] [i_6 + 1]));
            var_19 -= (((((((max((arr_17 [i_5] [i_6]), var_9))) ? (arr_0 [i_6 + 2]) : var_14))) ? ((var_12 ^ (((min(-89, (arr_23 [i_5]))))))) : var_10));
        }
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                {
                    var_20 = (((min((((arr_23 [i_5]) ? 44 : (arr_19 [i_8] [i_5] [i_8] [3]))), ((((-127 - 1) == (arr_13 [i_8])))))) - (~-89)));
                    var_21 -= min((!var_13), (((arr_19 [i_5] [i_7 - 1] [i_7 + 1] [i_8 - 1]) ? (arr_19 [i_5] [i_7] [i_7 + 2] [i_5]) : -120)));
                    var_22 = 6923911226795744941;
                    arr_36 [i_8 + 1] [i_8] [i_5] = (((max(((-(arr_24 [i_8]))), var_3)) < ((((!((((arr_12 [i_5] [i_5] [i_8]) ? (arr_22 [6]) : 94)))))))));
                    var_23 = ((14 ? ((min(var_4, (arr_7 [i_7 - 1] [8])))) : ((-(arr_17 [i_8 - 1] [5])))));
                }
            }
        }
        var_24 = ((((~(var_12 ^ 111))) >= (((~(!var_2))))));
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_40 [9] = (arr_38 [i_9]);
        var_25 ^= ((((((arr_37 [i_9]) % (arr_39 [1])))) ? var_5 : (arr_39 [i_9])));
    }
    #pragma endscop
}
