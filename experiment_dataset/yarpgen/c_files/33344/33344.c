/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = ((var_9 > var_2) ? ((~(var_13 || 1425))) : var_5);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        var_19 = (arr_0 [i_0 - 1]);
        arr_4 [i_0] [i_0] = (((!1425) || (((-6810024431017101226 ? (arr_1 [i_0 - 2] [i_0 + 2]) : 4115440267)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = var_16;
        var_20 -= ((((arr_5 [i_1]) / ((((arr_5 [i_1]) ? 4095 : (arr_8 [i_1] [i_1])))))));
    }

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_14 [i_2] = -24474;
        arr_15 [i_2] = (((arr_11 [i_2]) ? (arr_12 [i_2]) : (min((arr_6 [i_2 - 2]), (~452690129)))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_21 = (!0);

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_22 -= (~var_16);
            var_23 = arr_10 [2];
        }
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            var_24 = (((arr_8 [6] [17]) != (~var_2)));
            arr_22 [i_3] = ((~(arr_7 [i_3] [i_3])));
            arr_23 [3] [i_5] [i_5] = ((arr_19 [i_5 - 2] [i_3 + 1]) / (arr_19 [i_5 + 2] [i_3 - 1]));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_25 ^= (((arr_17 [i_3] [i_3 + 1]) <= -22248));
            var_26 = (arr_11 [i_3 + 2]);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_30 [i_3] [i_7] [i_7] = (((((-452690119 ? 17592186044415 : 6287033534128478924))) || (arr_26 [i_3] [i_3])));
            var_27 = (min(var_27, var_2));
            arr_31 [i_3] [i_7] = (((452690114 ? 3966867581884651608 : 6287033534128478924)));
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_44 [i_8] [i_8] [i_8] [16] [i_8] |= (min(((max(6287033534128478924, 0))), (((arr_5 [i_10 + 2]) ? (((max(-9355, (arr_6 [i_8]))))) : (min(var_6, 7575427053483124116))))));
                                arr_45 [i_8] [i_8] [i_11] [i_11] [i_12] = (((max(452690114, -59407311)) * (9346 & var_13)));
                                var_28 = (((((((9354 - (arr_10 [i_10])))) ? (arr_34 [i_10] [i_10 - 2] [i_10]) : (arr_43 [i_11]))) < (((((arr_33 [i_11 + 1]) && (arr_33 [i_11 + 1])))))));
                            }
                        }
                    }
                    var_29 = (min((arr_34 [i_10 + 3] [i_9] [i_9 - 1]), (((-(arr_37 [i_10 + 1] [i_10 + 3] [i_10 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_30 = ((~((~(((arr_39 [i_8] [i_9] [i_10 + 1] [i_13] [i_14]) ^ (arr_36 [i_8] [i_8] [i_8])))))));
                                arr_51 [i_14] [i_9] [i_9] [i_9] = (((((var_9 - (arr_34 [i_10 + 1] [i_14 + 3] [i_9 - 1])))) / (max((arr_47 [i_14 + 1] [i_14 + 1] [i_9] [i_9 - 1] [i_9 - 1]), (arr_47 [i_9 - 1] [i_14 - 1] [i_13] [i_10] [i_9 - 1])))));
                            }
                        }
                    }
                    var_31 = (((max((arr_40 [i_10 + 2] [i_9 - 1]), -1796714295)) >> (((arr_12 [i_10 + 1]) - 100))));
                    var_32 = (max((arr_33 [1]), -var_11));
                }
            }
        }
        var_33 = (~(max(((-6287033534128478917 ? (arr_10 [i_8]) : -9346)), ((545231203 * (arr_49 [i_8] [i_8]))))));
        var_34 = (arr_50 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
    }
    #pragma endscop
}
