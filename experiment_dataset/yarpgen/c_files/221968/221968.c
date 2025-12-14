/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(159, (min(var_5, (var_0 > var_7)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_12 -= (arr_2 [8]);
        var_13 -= ((((((arr_0 [10]) ? (var_4 + var_8) : ((var_6 ? (arr_2 [4]) : 0))))) && (arr_2 [10])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] = var_6;
        var_14 *= -6054481079888858626;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_2] [i_3] [i_4] |= (arr_14 [i_3 + 1] [i_3 + 1] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_15 = (min(var_15, -var_9));
                                arr_22 [i_2] [i_4] [7] [i_4] [7] = (arr_13 [i_2] [i_2]);
                            }
                        }
                    }
                }
            }
        }
        var_16 ^= (((-73 ? 7865496364051890104 : var_2)));
        arr_23 [i_2] [i_2] = (!25407);
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        var_17 = (((((-(arr_24 [i_7] [i_7])))) ? -var_5 : 0));
        var_18 = var_0;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 18;i_9 += 1)
            {
                {
                    arr_31 [i_7] [i_7] [i_9] = (((~(((!(arr_28 [i_7] [i_7] [i_7])))))));
                    var_19 *= ((+(min((arr_25 [i_8]), (max(-263508439952449891, (arr_25 [i_8])))))));
                    arr_32 [i_7] [2] [i_9] [i_7] = ((~(min((min(0, (arr_24 [i_8] [i_9]))), (arr_29 [i_7] [16])))));
                }
            }
        }
        arr_33 [i_7] = arr_26 [i_7 + 1] [i_7 + 1];
        arr_34 [i_7] = (((arr_25 [i_7]) | ((max((!var_0), ((1695452540 - (arr_27 [i_7] [i_7]))))))));
    }
    var_20 = (max(var_20, ((((((var_9 ? var_10 : 21))) > (var_10 <= -7865496364051890088))))));
    var_21 = ((var_10 ^ (!var_6)));
    #pragma endscop
}
