/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -3824695526308290160;
    var_11 = (max(230, (min(var_8, -var_9))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (min((((!(arr_0 [i_0])))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (max((arr_1 [i_0]), (arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, (((((1 && ((max((arr_3 [i_0] [i_2]), 127))))) || ((max((arr_0 [16]), (arr_0 [6])))))))));
                        arr_9 [3] [i_1] [i_0] [i_3] [i_0] [i_1] = (min(82, 3824695526308290160));
                        var_14 = ((!(((454479488 / (arr_3 [i_0] [i_1]))))));
                    }
                }
            }
        }
        var_15 = (arr_0 [i_0]);
        arr_10 [i_0] = ((~(((((!(arr_2 [i_0] [i_0] [i_0])))) + (arr_2 [i_0] [i_0] [15])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_16 = ((-(arr_19 [3] [i_5])));
                        arr_21 [i_4] [i_6] [i_6] = arr_14 [i_4];
                        var_17 = ((-(arr_13 [i_4])));
                    }
                }
            }
        }
        var_18 = (1170495129 / -1132873454);
        var_19 = (((arr_19 [i_4] [i_4]) * ((((arr_17 [i_4] [5] [i_4] [i_4]) / (arr_5 [i_4] [1] [18] [i_4]))))));
        arr_22 [i_4] = (arr_5 [i_4] [i_4] [i_4] [3]);
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_20 = 1;
        var_21 = (arr_24 [2] [i_8]);
        arr_26 [i_8] [1] = 1170495129;
        var_22 = (min(var_22, (arr_23 [i_8] [i_8])));
    }
    var_23 = var_4;
    #pragma endscop
}
