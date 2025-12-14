/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_16 = (max((arr_2 [i_0] [i_0]), (((var_14 | var_1) ? var_2 : (arr_2 [i_0] [10])))));
            var_17 = (min(var_17, ((max((((arr_2 [i_1 + 1] [i_0]) ? (arr_2 [i_1 - 1] [i_0]) : (arr_2 [i_1 - 1] [i_0]))), (arr_2 [i_1 - 1] [i_0]))))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            var_18 = (min(var_18, ((((arr_2 [i_2 - 2] [i_2]) % -80)))));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_19 *= ((var_7 - (arr_0 [i_2 + 1] [i_2 + 1])));
                            var_20 = (max(var_20, ((((!var_2) == (arr_5 [i_2] [i_3] [i_2 + 2]))))));
                        }
                    }
                }
                var_21 &= (((arr_7 [i_0] [i_2 + 1] [i_2 - 2]) ? (arr_2 [i_0] [18]) : (arr_2 [i_0] [i_0])));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_22 &= (((arr_0 [i_0] [i_2]) ? var_1 : (arr_7 [8] [4] [4])));
                var_23 = (max(var_23, (((!(((~(arr_8 [i_0] [i_2] [i_6] [i_6])))))))));
                var_24 = (arr_4 [i_0] [i_2]);
                var_25 = (arr_0 [i_0] [i_2 + 1]);
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_26 ^= (arr_15 [i_2 + 2] [i_2] [5] [i_7]);
                var_27 |= (arr_10 [12] [22] [22] [i_0] [i_2]);
                var_28 = (arr_7 [i_2 - 3] [i_2] [i_2]);
                var_29 = (var_11 / var_0);
            }
            var_30 += ((-var_4 || (arr_2 [i_2 - 3] [i_2 - 1])));
        }

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            arr_22 [i_8] = (((((-(min((arr_20 [i_0] [i_8]), var_3))))) ? ((~(arr_3 [21] [i_8] [i_8]))) : -113));
            var_31 = ((var_5 ? (((-(!var_7)))) : (max((arr_16 [i_0] [i_0]), (arr_16 [i_0] [1])))));
            var_32 = (min(var_32, var_4));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_33 = (((arr_23 [i_0] [i_9]) ? (arr_23 [i_0] [i_9]) : var_10));
            var_34 = var_1;
            arr_27 [i_0] [i_0] = var_10;
        }
    }
    var_35 = var_5;
    var_36 &= var_1;
    #pragma endscop
}
