/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0 + 1] = ((((!(((1 ? (arr_3 [2]) : var_1))))) || ((((((-9117979881975618670 ? 2 : -1918769941))) ? ((var_0 ? var_7 : var_15)) : 36028247263150080)))));
        var_17 = ((((((arr_1 [i_0 + 1]) ? (arr_1 [i_0]) : (arr_1 [i_0 + 1])))) & (((arr_1 [i_0 + 1]) ? 0 : var_10))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = 37568718;
        arr_9 [i_1] = (arr_7 [1]);
    }
    for (int i_2 = 4; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_19 = var_3;
        var_20 = (((arr_6 [i_2 - 2]) & (arr_6 [i_2 - 2])));
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = (arr_12 [i_3 - 1]);

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_18 [i_4] = 3;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_24 [i_6] [0] [i_4] [12] [12] = (((((((37568727 ? -416687401 : -8996629884589388136))) ? -1918769918 : (((0 && (arr_13 [i_5])))))) != var_9));
                        var_21 -= ((((max((arr_6 [i_3 - 1]), (arr_6 [i_3 - 1])))) / (((arr_6 [i_3 - 1]) ? 1 : -12346))));
                        arr_25 [i_5] [i_5] [i_5] [7] [i_5] [i_5] = (~var_9);
                        arr_26 [i_6] [i_5] [i_4] [i_3 + 1] = 49152;
                        arr_27 [i_3 - 4] [i_3] [i_3 - 4] [i_5] [i_6] = (max(((~(arr_7 [i_3 + 1]))), (~12346)));
                    }
                }
            }
            var_22 = arr_12 [0];
            arr_28 [i_3] [i_3] = (max(((var_6 ? (arr_19 [3] [i_4] [6]) : ((max(var_0, (arr_20 [i_3] [i_3] [i_4] [i_4])))))), (arr_12 [5])));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_31 [i_3 - 2] [i_3 - 2] [i_3 - 2] &= ((+(((arr_13 [i_3 - 1]) - var_2))));
            arr_32 [i_3] [i_7] = (((arr_19 [12] [12] [i_7]) ? (((!(((-105 ? (arr_5 [8]) : var_2)))))) : (arr_15 [i_3])));
            arr_33 [1] [i_7] [i_3 - 4] = (var_7 >= -24437);
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_23 = ((~((min((arr_5 [i_3 - 1]), var_0)))));
                        var_24 = var_16;
                        var_25 = (((((~(arr_17 [i_3 - 1] [i_3 - 4])))) || var_6));
                        var_26 = (min(var_26, ((((((max(var_16, 1918769928)))) ? -var_11 : (arr_19 [i_3 - 2] [i_3] [i_3 - 2]))))));
                    }
                }
            }
            var_27 = ((((max(-var_13, ((-1918769929 ? -1918769928 : (arr_35 [i_7])))))) ? (((!(arr_8 [i_3 - 1])))) : (!1108658199)));
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_28 -= var_4;
            arr_41 [i_3] = var_3;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {
                        var_29 = (min(var_29, var_7));

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_30 = (arr_17 [i_10] [i_11]);
                            arr_48 [i_13] [i_13] [i_13] = (((((253 ? -1918769941 : 28))) ? (35217 != -12346) : ((((max((arr_17 [i_10] [i_10]), var_5))) ? (var_16 && var_4) : var_12))));
                            var_31 = (min(var_31, var_13));
                        }
                        arr_49 [i_12] [5] [1] [i_3 - 2] = ((790529790 ? -1918769921 : 252));
                        arr_50 [i_3] = (((arr_19 [i_3] [i_11] [5]) & var_9));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            arr_53 [i_3 - 2] = ((152 < (arr_47 [6] [i_3 - 2] [i_14] [6] [0] [6] [i_14])));
            arr_54 [i_14] [i_14] [1] = ((0 ? -1 : (813094793 & 4309)));
            arr_55 [i_3 - 1] [i_14] = var_9;
        }
        arr_56 [2] = var_14;
        arr_57 [i_3 - 2] = (min(25128, ((((-525162815 ? 37568718 : 24111))))));
        arr_58 [i_3 - 2] [i_3 - 1] &= (((((~((var_11 << (((arr_30 [i_3]) - 11809552851612844655))))))) == (max((arr_40 [i_3] [i_3]), (arr_40 [i_3 + 1] [i_3 + 1])))));
    }
    var_32 = (((((min(var_12, var_7)) == (((var_11 ? 3186309096 : 1))))) ? (((((var_11 ? 1 : var_7))) ? -1028236866 : ((1028236866 ? 1 : 2452241837)))) : var_0));
    #pragma endscop
}
