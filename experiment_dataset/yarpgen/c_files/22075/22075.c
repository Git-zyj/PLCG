/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_2 < var_11);
    var_13 = (min(var_13, (((((var_1 ? -111 : var_4)) - (1 * var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [i_1] [i_3] = (min((((arr_10 [i_2]) % var_5)), (max(var_11, (arr_10 [i_3])))));
                                var_14 += ((((max((arr_1 [i_2] [i_1]), var_4))) < (!var_5)));
                                var_15 = (max(var_15, ((((var_9 | var_5) < 0)))));
                            }
                        }
                    }
                }
                var_16 = 2337657756;
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5 - 1] [11] = (((((~(arr_17 [i_5])))) > (arr_16 [i_5 - 1])));
        var_17 = (max(var_17, (-4741 != var_6)));
        var_18 = 71;
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_19 = (((((((var_5 ? var_11 : (arr_21 [i_6 + 1] [i_6]))) & var_7))) ? var_6 : -71));
        var_20 = ((1 ? (((arr_21 [i_6] [i_6]) + (arr_19 [i_6 - 1]))) : (((!(arr_20 [i_6 + 1]))))));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_26 [i_7] = -18216;
            arr_27 [i_6] [i_6] &= (((max((arr_20 [i_6 + 1]), (arr_20 [i_6 + 1]))) << (((arr_22 [i_6] [i_6]) - 2014147658))));
        }
        var_21 = 71;
    }
    for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_22 = 92;
        var_23 = (min(var_23, -101));
        var_24 = (((((((((!(arr_24 [7] [7] [i_8]))))) - (((arr_28 [i_8 - 1] [i_8]) - var_10))))) ? (arr_23 [i_8] [i_8 - 1] [i_8 - 1]) : (arr_28 [i_8 - 1] [i_8 + 1])));
    }
    #pragma endscop
}
