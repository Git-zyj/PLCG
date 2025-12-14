/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = 0;
    var_22 = ((-((~(!var_6)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        var_23 = (min(var_23, -var_12));
        var_24 = -46;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_25 = (arr_0 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] = max(var_15, var_10);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_26 = var_10;
                            arr_16 [i_1] [i_2] [i_2] [i_2] [i_5] = (((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? ((1 ? (arr_1 [i_1] [i_1]) : -14250)) : ((((arr_5 [i_1]) | (arr_9 [i_3] [i_3] [i_3]))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            arr_19 [i_6] [i_6] [i_1] [i_6] [i_1] = (arr_4 [i_1]);
                            var_27 = var_7;
                        }
                    }
                }
            }
        }
        var_28 -= -5055856858337474081;
        var_29 -= (arr_6 [i_1] [i_1]);

        /* vectorizable */
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            var_30 = ((var_6 && var_17) || (((var_10 ? var_11 : var_16))));
            var_31 -= (98 ? 13709333282207260440 : 2991511328599699882);
            var_32 ^= (((9762667306851545635 ? 608955583 : 10)));
            var_33 = ((var_11 % (arr_14 [i_1] [i_1] [i_1] [i_1] [i_7])));
        }
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_25 [i_8] = (min((((((var_7 ? var_13 : (arr_23 [i_8]))) ^ 60))), (min(((var_7 >> (((arr_0 [i_8] [i_8]) - 78)))), ((((arr_2 [i_8] [i_8]) == 1)))))));
        var_34 = (var_8 <= var_17);
        var_35 = (max(1, -109));
        var_36 = var_19;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_37 = (26 && 0);
        arr_28 [i_9] = (arr_21 [i_9] [i_9]);
        var_38 = var_5;
    }
    #pragma endscop
}
