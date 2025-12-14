/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_14, var_1))) ? (2052364593 | var_8) : ((14316870394466298743 << (-5532946937870636382 + 5532946937870636382)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_3] = -11667;
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] &= (((((((!(arr_8 [2] [i_2] [3])))) << (((arr_1 [i_0]) - 18342964734238048719)))) ^ ((((1 ? -34 : 3496018877))))));
                        arr_11 [i_3] = (((((~((1 ? -11667 : (arr_7 [i_0] [i_3] [i_0] [i_3])))))) ? (arr_0 [i_1]) : (((((arr_7 [i_0] [i_3] [i_2] [i_3]) ? var_13 : var_7)) + (!10284)))));
                        arr_12 [i_0] [i_3] [i_2] [14] = 18446744073709551615;
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = ((-181047695 ? (((var_12 || (arr_0 [i_0])))) : 65535));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = 17;
        arr_19 [i_4] [i_4] = (arr_17 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_29 [i_4] [i_5] [i_8] [i_6] [i_5] [i_8] [i_4] = ((~(((-32767 - 1) ? (-127 - 1) : var_8))));
                                arr_30 [3] [13] [i_6] [i_4] [i_8] [i_6] = (((!6831) < ((~(arr_24 [i_4] [i_5] [i_4])))));
                                arr_31 [i_4] [20] [17] [i_4] [i_4] [i_7] = (arr_26 [i_4] [i_5] [i_6] [i_8]);
                                arr_32 [i_7] = var_12;
                            }
                        }
                    }
                    arr_33 [i_4] [i_4] [i_4] = ((-99 ? 1693450027 : var_15));
                    arr_34 [i_4] = ((2242602702 ? var_0 : (((arr_17 [i_4] [i_5]) ^ (arr_20 [i_4] [i_4])))));
                    arr_35 [i_4] = ((var_11 == (((arr_15 [i_5] [i_5]) ? var_5 : (arr_16 [i_4])))));
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 9;i_9 += 1)
    {
        arr_40 [i_9] = ((~(((!(arr_21 [i_9 - 1] [16]))))));
        arr_41 [i_9] = (((min((arr_2 [i_9 + 1]), (arr_2 [i_9 - 1]))) ? ((~(arr_2 [i_9 + 1]))) : -var_3));
    }
    var_17 = var_2;
    var_18 = var_15;
    #pragma endscop
}
