/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_2);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] &= ((((-(arr_0 [i_0]))) <= ((-(arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = arr_6 [i_0] [i_0] [i_1] [i_2];
                    var_14 = ((3086 ? var_10 : (arr_5 [i_2] [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_15 *= (((arr_0 [i_1]) & (((arr_9 [i_0] [i_1] [i_1] [i_3]) & var_10))));
                        arr_10 [i_2] |= (~var_10);
                        var_16 -= (((((arr_6 [i_0] [i_1] [i_1] [i_3]) - (arr_6 [i_0] [1] [1] [i_0]))) <= (arr_2 [i_2] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_17 = (min(var_17, -var_6));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((!(1 != 1)));
                    }
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        var_18 = arr_9 [i_5] [i_0] [i_0] [i_0];
                        arr_17 [i_0] [i_0] = (-5360168986615918224 == 1);
                        arr_18 [i_1] [i_5] [i_2] [i_1] [i_1] [i_0] = (1 == 65522);
                        var_19 *= (arr_13 [i_0] [1] [i_2] [i_2]);
                    }
                }
            }
        }
        var_20 += (((arr_15 [i_0] [i_0] [i_0]) != ((((!(arr_15 [i_0] [i_0] [i_0])))))));
        var_21 = (max(var_21, ((((arr_1 [i_0] [i_0]) ? ((((arr_12 [i_0] [i_0] [i_0] [i_0]) && (arr_7 [i_0])))) : ((var_4 ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : var_7)))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_22 = var_11;
        var_23 ^= ((min((arr_7 [i_6]), (arr_20 [i_6] [i_6]))));
        var_24 = (min(var_24, (((-((((arr_5 [i_6] [i_6] [i_6]) <= ((min(var_9, var_2)))))))))));
        var_25 *= ((11 ? -5360168986615918216 : 0));
        var_26 = (arr_19 [i_6]);
    }
    #pragma endscop
}
