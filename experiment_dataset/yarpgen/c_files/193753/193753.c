/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 + 1])))) ? (((!(arr_0 [i_1 - 1])))) : (((!(arr_0 [i_1 - 1])))));
                    arr_8 [i_1] = ((~((-(arr_6 [i_1] [i_1 + 1] [i_1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_19 [i_6] [i_6] [i_6] [1] [1] [i_6] = (arr_18 [i_3] [i_4] [i_6]);
                        var_20 = ((((((arr_14 [i_5] [i_5]) / (arr_15 [i_4] [i_4] [i_5])))) ? (arr_15 [i_3] [i_4] [i_5]) : (arr_12 [i_5])));
                        var_21 = (((((-(arr_15 [i_3] [i_4] [i_4])))) ? ((var_17 ? (arr_14 [i_5] [i_5]) : (arr_16 [i_3] [i_4] [i_5] [3]))) : (arr_13 [i_5])));
                        arr_20 [i_3] [i_4] [i_3] [i_6] [i_3] &= var_13;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_23 [i_5] [i_5] = (((arr_11 [i_3]) ? ((((arr_11 [i_4]) || (arr_11 [i_7])))) : var_0));
                        arr_24 [i_7] [i_5] [i_4] [i_4] [i_3] = (min((min((arr_21 [i_3] [i_3] [i_3] [i_4] [i_5] [i_7]), (arr_21 [i_3] [i_3] [i_4] [i_5] [i_7] [i_7]))), (min((((arr_21 [i_7] [i_5] [i_4] [i_4] [i_4] [i_3]) + var_13)), (((var_0 * (arr_9 [i_4]))))))));
                    }
                    var_22 = (arr_14 [i_5] [i_4]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_30 [i_3] [i_4] [2] [i_8] [i_9] [i_9] = (min(((7396571214264548376 ? 11050172859445003247 : 946374824)), (((946374824 ? (arr_16 [i_3] [i_4] [i_8] [i_9]) : 11050172859445003239)))));
                                var_23 = (~(arr_25 [i_3]));
                                var_24 += ((((arr_14 [i_3] [i_9]) ? (arr_13 [i_4]) : (((arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) / (arr_18 [i_5] [i_8] [i_4]))))));
                                var_25 = ((!(arr_25 [i_3])));
                            }
                        }
                    }
                    var_26 += (~(!11050172859445003209));
                }
            }
        }
    }
    var_27 += var_16;
    #pragma endscop
}
