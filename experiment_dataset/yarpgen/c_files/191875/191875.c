/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = (arr_1 [i_0 - 2] [i_0 - 2]);
        var_12 = ((~(~var_5)));
        arr_3 [i_0 - 2] = (~var_1);
        arr_4 [i_0] = (arr_0 [i_0 - 2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [1] [i_1] |= (max(var_0, ((var_9 % (((arr_8 [i_1 + 1] [i_2]) ? (arr_8 [i_1 + 1] [i_1 + 1]) : (arr_8 [i_0] [i_2])))))));
                    arr_10 [i_0] [i_2] [i_1 + 1] [i_2 + 3] = (384 && 389);
                    arr_11 [i_0] [i_2] = ((+((~(min((arr_1 [i_0] [i_1]), var_3))))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_13 = (((min((((arr_0 [i_3 + 1]) << (var_8 - 204))), -var_4)) < ((var_0 << (var_3 - 35086)))));
            arr_17 [i_3 - 2] [i_4] |= ((((~(((-9223372036854775807 - 1) ? -406 : 31744)))) | (arr_7 [i_3] [i_3 + 1] [i_4] [i_3])));
            var_14 = (-(arr_8 [i_4] [i_4]));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_15 = ((-var_9 / ((~((var_0 >> (((arr_16 [i_3 - 1]) - 6351123584071301750))))))));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_16 += var_8;
                        var_17 = var_3;
                        var_18 |= (max((((arr_6 [i_3] [i_5]) ? ((min(var_4, var_3))) : (arr_23 [i_3 + 1] [i_3 + 1] [i_5] [i_3 + 1] [i_3 + 1]))), (arr_24 [i_3 - 1] [i_5] [i_6] [i_5] [i_6])));
                        arr_26 [i_3 - 1] [i_5] [i_3 - 1] [i_7] = arr_20 [i_7] [i_6 - 1] [i_5] [i_3 - 1];
                    }
                }
            }
            var_19 = (((max(var_0, (405 | -4171830228212545722)))) && var_0);
            arr_27 [i_5] = (arr_23 [i_3 + 1] [i_5] [i_5] [i_3 + 1] [i_5]);
        }
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            var_20 = (((((var_11 + 9223372036854775807) >> (((~var_0) + 26346)))) | ((max(((max(var_7, var_8))), (arr_28 [i_3] [i_8 + 1] [i_8 + 1]))))));
            var_21 = (min(var_21, ((min(1, 4171830228212545722)))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    {
                        var_22 = ((!((((min(9025, 12))) || -384))));
                        arr_38 [i_3] [i_8] [i_9] [i_10] [i_10 + 3] = ((~(((var_6 | var_10) | (((min(var_7, var_0))))))));
                        arr_39 [i_10 + 1] [i_9] [i_9] [i_9] [i_8 - 2] [i_3 + 1] = (~(arr_30 [i_3]));
                        arr_40 [i_3 - 2] [i_8] [i_8] [i_8] [i_9] [i_8] = (((!-1) >= 60254));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 23;i_13 += 1)
                {
                    {
                        var_23 = (max(var_23, (arr_42 [i_3])));
                        arr_49 [i_11] [i_11] = (max(60254, (max(-389, -1))));
                        var_24 += var_8;
                        var_25 = (var_1 >= var_8);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    arr_54 [i_15] [i_3] = (-32767 / (arr_16 [i_15]));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 22;i_17 += 1)
                        {
                            {
                                arr_60 [i_17] [i_14] [i_14] [i_14] = ((-(((var_7 || var_9) ? var_9 : (((!(arr_58 [i_3] [i_14] [i_3] [i_16] [i_14]))))))));
                                arr_61 [i_17] [i_14] [i_17] = (((-(arr_22 [i_16] [i_15]))));
                                arr_62 [i_3] [i_14] [i_17] [i_16] [i_17 + 1] = (max((max((arr_58 [i_17] [i_16] [i_15] [i_14] [i_3 - 2]), (((arr_56 [i_17] [i_16] [i_14] [i_3 - 2]) ? var_6 : (arr_14 [i_15] [i_17]))))), (((var_10 ? (((arr_23 [i_3] [i_14] [i_3] [i_16] [i_14]) ? (arr_53 [i_3] [i_14]) : var_10)) : ((max(var_7, var_0))))))));
                                var_26 = var_3;
                                var_27 = (!1);
                            }
                        }
                    }
                }
            }
        }
        var_28 = var_1;
        var_29 = (max(var_29, (((-((((((-430400682 ? 2080374784 : 14))) || 2834597813))))))));
    }
    var_30 = (var_6 == var_8);
    var_31 = (var_8 % (((((var_0 ? var_11 : var_10))) ? ((16924501551091100410 ? 32759 : var_10)) : -1)));
    #pragma endscop
}
