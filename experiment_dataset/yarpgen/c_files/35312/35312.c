/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 10783;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_0] = ((((((-(arr_2 [i_1] [i_0]))))) ? var_7 : (arr_4 [i_1 - 2] [i_1] [i_1])));
            var_19 = ((((-45 || (((54753 ? (arr_3 [i_0]) : var_15))))) ? (max((min(2554109296292632659, -2739578266462961269)), (((2739578266462961289 ? 1472628107 : var_14))))) : -1472628107));
            var_20 ^= ((((min((arr_3 [i_1]), var_6))) ? ((var_8 ? var_10 : (arr_3 [i_1 + 1]))) : var_11));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_21 = (min(var_21, ((var_10 << (4223841499 - 4223841497)))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_22 = (((arr_4 [i_0] [19] [i_3]) ? 15 : (arr_4 [i_0] [i_2] [i_0])));
                            var_23 = (((arr_7 [i_0]) | (((var_3 ? 54753 : var_16)))));
                        }
                    }
                }
            }

            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                arr_22 [i_0] = (((arr_0 [i_6 + 1]) ? (arr_0 [i_6 + 1]) : (arr_0 [i_6 + 1])));
                var_24 = (min(var_24, ((((arr_17 [1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [1]) && (arr_17 [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 1] [10]))))));
                arr_23 [i_2] = ((-(arr_18 [i_6] [i_6 + 1] [i_6])));
                arr_24 [i_0] [i_2] [16] [15] = (((arr_10 [13] [i_2] [i_6 + 1]) >= (arr_10 [14] [i_2] [i_6 + 1])));
            }
            var_25 -= (((arr_19 [8]) ? -2355680998627513690 : 14014));
        }
        var_26 = (arr_11 [i_0] [i_0] [i_0] [i_0]);
        arr_25 [14] [14] = (min(((-(1 + var_2))), (((!(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_27 = (!922789392);
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_28 [i_7] = ((max((arr_27 [i_7]), ((var_16 >> (var_12 - 2070918068))))));
        arr_29 [i_7] = ((-2739578266462961278 ? (arr_26 [i_7] [i_7]) : 32767));
    }
    #pragma endscop
}
