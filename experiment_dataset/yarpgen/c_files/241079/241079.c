/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 *= ((-13014 ? 13014 : 13014));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_16 = ((-13014 ? -13011 : -13014));
            var_17 += (max((((arr_5 [i_1] [0]) >= var_6)), ((!(!2032)))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_18 += ((((!(var_10 && var_10))) || ((!((((arr_13 [i_4] [i_2] [i_2] [i_3] [i_4] [i_1]) ? -13014 : var_0)))))));
                            var_19 = (min((((arr_8 [i_0] [7] [i_4]) - (arr_4 [i_0] [i_2 + 1] [i_3]))), ((((arr_10 [i_3] [i_2 + 1] [i_2 - 1] [i_2]) ? -13014 : var_4)))));
                            var_20 = 15958;
                            var_21 = ((+(min((arr_9 [i_2 - 1] [i_2 - 1] [i_3] [2]), ((min((arr_1 [i_2]), 49585)))))));
                        }
                    }
                }
            }
            arr_15 [i_0] [i_0] [i_0] = (((arr_11 [2] [i_1]) == ((min((arr_11 [i_0] [i_1]), (arr_11 [i_0] [i_1]))))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_22 = (max(var_22, (((var_5 ? (arr_19 [i_5 - 1] [i_7] [i_7]) : (arr_19 [i_5 + 2] [i_5] [i_6]))))));
                        var_23 = (max(var_23, (arr_2 [i_7] [i_6] [i_0])));
                    }
                }
            }
            var_24 = ((32767 ? 0 : 0));
        }
        var_25 = var_9;
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        var_26 = -var_13;
        var_27 = (min((((arr_27 [i_8]) ? ((((arr_26 [i_8]) ? 0 : 0))) : (arr_27 [i_8 - 2]))), 0));
        arr_28 [1] [i_8] = (arr_26 [i_8]);
        arr_29 [i_8] = -var_8;
        arr_30 [i_8] [i_8] = var_0;
    }

    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        arr_35 [i_9 + 2] = (min(-1, 4294967293));
        var_28 = (~1108307720798208);
        var_29 = ((((max(var_2, (arr_33 [i_9])))) ? (arr_31 [i_9]) : (arr_33 [i_9])));
    }
    #pragma endscop
}
