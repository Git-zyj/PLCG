/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = 64318;

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_3] = (((arr_8 [i_0]) ? var_11 : var_18));
                            arr_14 [i_0] = ((~(11413 ^ var_5)));
                            arr_15 [i_0 + 1] [i_0] [i_0] = (((arr_8 [i_0]) ? (arr_10 [i_3 + 1] [i_0] [i_0] [i_2 + 1]) : 4294967284));
                        }
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            arr_18 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = (!(((arr_6 [i_0] [i_0 + 1] [i_0]) != (arr_6 [i_0] [i_0] [i_0]))));
                            arr_19 [i_0] [i_3 - 1] [i_2] [i_0] [i_0] [i_0 - 1] [i_0] = ((min((arr_5 [i_0] [i_0] [i_2] [i_2]), var_18)));
                            arr_20 [i_0] [i_0 - 1] [i_3 + 1] [i_0 - 1] [i_0 - 1] [i_1] [i_0] = (arr_2 [i_0] [i_3]);
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((arr_12 [i_0 - 1] [i_2] [i_2 - 3] [i_2] [i_0] [i_2]), (min((((arr_6 [i_0] [i_2] [i_0]) ? 0 : var_8)), (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_5 + 1])))));
                        }
                        arr_22 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] = (!4294967284);
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        arr_26 [i_0] = 2310383384;
                        arr_27 [14] [1] [i_0] [i_0] [14] [14] = (max(((((((arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 1]) & var_6)) & (3379037760 >= var_14)))), (((arr_12 [i_0 - 1] [i_0] [i_0] [5] [i_0] [i_0 - 1]) ? (arr_12 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_13))));
                    }
                    arr_28 [i_1] [i_1] [0] = ((-(!1)));
                    arr_29 [0] [i_1] [i_2] |= ((~((1 * (arr_5 [i_2] [i_1] [i_1] [i_0])))));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_32 [i_0] [i_0] = (max((max(((((arr_31 [i_0] [i_1] [i_1] [i_7]) ? var_16 : (arr_16 [i_0] [i_1] [i_0])))), 4294967284)), (((~(arr_10 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_38 [i_0] [i_0] = 6830049254768477811;
                                arr_39 [i_0] [i_0] [i_0] [i_8] [9] = (max(var_8, (arr_5 [6] [i_8] [i_7] [i_0])));
                            }
                        }
                    }
                }
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        arr_45 [i_0] [i_0] [i_11 + 2] = (arr_10 [i_0 - 1] [i_0] [i_10 + 3] [i_11 + 3]);
                        arr_46 [i_10] = (((arr_3 [i_10 + 1] [i_11 + 3]) & (arr_30 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1])));
                        arr_47 [13] [i_0] [i_0] [13] [i_0] [i_0 - 1] = (arr_2 [i_11 + 2] [0]);
                        arr_48 [i_0] [i_0] [i_10] &= var_5;
                    }
                    arr_49 [i_0] = ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
                    arr_50 [i_0] [i_1] [i_0] [i_0] = (!4294967284);
                }
                arr_51 [i_0] = ((~(!var_10)));
                arr_52 [i_0] [i_0] [i_1] = ((1 ? (((arr_24 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) % (arr_34 [i_1] [i_1] [i_0] [i_0]))) : ((min((var_4 && var_15), (arr_10 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]))))));
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
