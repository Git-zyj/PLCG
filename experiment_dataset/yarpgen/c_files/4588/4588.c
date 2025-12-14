/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, ((((arr_1 [8]) ? -1790480832 : (min(var_5, (arr_1 [2]))))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_14 &= ((-(arr_4 [i_1] [i_1 + 2])));
            var_15 = ((1790480832 ? 1 : -977865166));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_16 |= ((1790480832 >= ((var_3 ? 1790480850 : -9587))));
                            var_17 = (max(var_17, -9578));
                        }
                    }
                }
            }
            arr_13 [i_0] [i_0] [i_0] = -1871443626;
            var_18 = (!var_7);
        }
    }
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        arr_17 [i_5 + 1] = (((((var_8 ? (arr_15 [i_5 - 2]) : (arr_15 [i_5 - 1])))) ? (((arr_15 [i_5 - 1]) ? 1790480810 : var_0)) : (((min(222, -9582))))));
        var_19 = 69;
        var_20 += ((-1579924703 ? (min((arr_16 [i_5 - 2] [i_5]), 9592)) : ((-(var_1 >= 1790480832)))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_21 += (((((max(var_9, 66))) ? (arr_21 [i_7]) : (arr_20 [i_6] [i_6]))));
            var_22 *= var_5;
            var_23 = (max(var_23, (arr_21 [i_6])));
            var_24 |= (var_8 / -66);
            var_25 = (max(var_25, 20));
        }
        var_26 = (min(var_26, (((((!((min(var_0, var_5))))) ? ((min((arr_20 [i_6] [i_6]), (arr_16 [i_6] [i_6])))) : (98 >= -66))))));
        var_27 *= -8;
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 9;i_8 += 1)
    {
        arr_25 [i_8 - 4] [i_8 - 4] = -113;
        arr_26 [i_8] = var_2;
        var_28 = ((arr_11 [i_8 - 3] [i_8 - 4]) || var_8);
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_29 = (arr_29 [i_9] [i_9]);
        arr_31 [i_9] |= (-948679033 && 1790480832);
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_30 = ((-((var_10 ? (-113 && var_6) : (((arr_2 [i_10]) ? 2847265404582125793 : 9577))))));
        arr_35 [i_10] = ((109 + (max(-var_10, ((max(1, 222)))))));
    }
    var_31 = 1;
    var_32 = ((-109 ^ (!1)));
    #pragma endscop
}
