/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0 + 1] [i_0] = (((((arr_3 [i_0 - 1]) ? (max((arr_2 [i_0] [i_1] [i_2]), 2441)) : -158938137)) > (min(6144, ((var_13 ? -778893171 : -1180520280))))));
                    var_18 -= (50638 ? (~63137) : (((arr_0 [i_0 - 1]) ? var_4 : (arr_0 [i_2]))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_19 |= (1108687989 ? var_12 : (((arr_4 [i_1]) & var_17)));
                        var_20 = 2445;
                        var_21 = min((arr_10 [i_0 + 1] [i_1] [i_2] [i_3]), ((-(arr_2 [11] [i_0 - 1] [i_0 + 1]))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0 + 1] [i_0 + 1] [16] [16] [7] [i_4] = (arr_9 [i_0 + 1] [i_1] [i_2] [19] [i_4]);
                        arr_16 [i_0] [18] [i_4] [i_2] [i_1] [i_0] = 11272396;
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_22 -= var_10;

        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            var_23 = (((-2450 ? var_6 : (!47609))) | (((arr_2 [i_6] [i_6] [i_6]) ? var_17 : ((var_1 ? var_6 : (arr_9 [i_5] [i_5] [i_6] [i_6 + 3] [i_6 + 4]))))));
            arr_22 [i_5] [i_5] = (((max(0, 12443))) / ((((var_1 && (arr_13 [i_5] [i_5] [i_5] [i_5]))) ? ((11272409 ? (arr_9 [i_5] [17] [i_5] [i_6 + 2] [i_5]) : var_3)) : ((var_16 ? 15673 : (arr_14 [i_5] [i_6]))))));

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_25 [i_5] [9] [i_5] = var_6;
                arr_26 [i_5] [i_7] = -6132;
                arr_27 [i_6 + 1] [i_7] = (arr_13 [i_7] [i_6] [i_5] [i_5]);
                arr_28 [i_7] = ((!(~684001126)));
                arr_29 [4] [i_6] [i_6] = 15279;
            }
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                var_24 = ((arr_21 [i_5] [i_6 + 3] [i_8 + 2]) ? ((~(arr_13 [14] [i_6] [i_8 + 1] [18]))) : var_3);
                arr_32 [i_5] [i_6 + 1] [i_8 - 2] &= -var_2;
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    {

                        for (int i_12 = 3; i_12 < 19;i_12 += 1)
                        {
                            var_25 = arr_33 [i_5];
                            arr_45 [i_12] [i_9 - 1] = ((~-177934602) ? ((49854 ? (arr_13 [6] [i_11 + 1] [i_11 + 1] [i_11 + 1]) : (arr_13 [i_11] [i_11] [i_11 + 4] [i_11 + 4]))) : (arr_43 [i_11] [i_11] [i_11] [i_11 - 1] [i_11 + 2]));
                        }
                        arr_46 [i_9] [i_9] [i_9] [i_9] [16] [i_9 + 1] = (((((!var_8) % (1073741824 % var_1)))) ? (arr_1 [i_5] [i_11 + 1]) : (min(((124 ? (arr_6 [i_10] [i_10] [i_9 - 1] [i_5]) : (arr_38 [i_9 + 1]))), var_7)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
