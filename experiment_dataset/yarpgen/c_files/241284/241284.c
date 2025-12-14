/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] |= -9223372036854775805;
                var_20 ^= 243;
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = ((((-39 ? (((arr_3 [i_2]) ? var_13 : var_5)) : (min((arr_0 [i_2]), 3571590173))))) || ((((((var_12 ? var_17 : var_4))) ? ((1 ? var_12 : 2147483621)) : var_15))));
        var_21 = (min(var_21, (((!(((((min(var_11, var_17))) ? var_10 : (~2209994570)))))))));
        var_22 -= (((~(max(324314120, 243)))) / -20027);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    {
                        var_23 *= var_13;

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_18 [7] [7] [7] [i_2] [i_6] = (((+(((arr_8 [i_2] [8] [8]) ? 9223372036854775785 : 1097140466)))));
                            var_24 = (14 && 2775932498);
                            var_25 = (max(var_25, ((min(((((var_18 ? 1 : var_11)) ^ (((min(var_15, 0)))))), (((9223372036854775781 ? ((((arr_14 [i_2] [i_6] [i_4]) ^ var_15))) : ((8387247243218282523 ? (arr_13 [2] [i_6] [i_5]) : var_16))))))))));
                        }
                    }
                }
            }
        }
        arr_19 [i_2] [i_2] = ((max(2169948971, 1)));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_26 = -30;
        var_27 = var_1;
        var_28 |= ((((arr_15 [15] [i_7] [i_7] [i_7]) ? (arr_15 [i_7] [i_7] [i_7] [1]) : (arr_0 [i_7]))) & (arr_15 [i_7] [i_7] [i_7] [10]));
    }
    #pragma endscop
}
