/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_2, var_6));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        var_18 = (arr_2 [i_0]);
        var_19 = (min(var_19, ((min(((min((arr_0 [2]), (arr_0 [i_0])))), (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (arr_4 [i_1]);

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_11 [i_1] [i_2] = var_10;
            arr_12 [i_1] = ((-(arr_2 [i_1])));
            arr_13 [i_1] = var_2;
            var_20 = (arr_10 [i_1]);
            arr_14 [1] [i_2] = ((-(arr_6 [i_2])));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_21 -= (arr_16 [12] [i_1] [i_1]);
            arr_17 [i_1] [i_3] [i_1] &= -1;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_26 [1] [i_4] [i_4] [i_4] [i_4] [5] [i_4] = ((32767 ? (arr_20 [i_4] [i_5] [i_6]) : var_14));
                            arr_27 [i_4] [i_5] [i_6] = var_0;
                        }
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            arr_30 [i_1] [i_7] [i_1] = arr_18 [i_7 + 1];
            var_22 = (min(var_22, var_7));
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {

        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            arr_37 [i_8] = (-(((arr_0 [i_9 - 1]) ? ((min((arr_32 [i_8]), (arr_31 [i_8] [i_8])))) : ((var_16 ? var_9 : (arr_2 [14]))))));
            var_23 = var_3;
        }
        var_24 = (min((arr_33 [i_8]), ((((arr_34 [i_8]) >= var_1)))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_25 = (arr_38 [i_10]);
        arr_40 [i_10] = ((((arr_1 [i_10] [i_10]) ? var_6 : (arr_39 [17]))));
    }
    #pragma endscop
}
