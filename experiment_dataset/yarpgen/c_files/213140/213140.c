/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_16 += ((-(arr_1 [8])));
        arr_2 [1] = (!var_9);
        var_17 = (max(var_17, ((!(((arr_0 [13]) && 0))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_3 [4] [i_3])));
                    arr_10 [i_3] = (arr_6 [i_1]);
                }
            }
        }
        var_19 = ((!(((+((var_11 ? (arr_1 [i_1]) : (arr_0 [i_1]))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_20 |= (arr_0 [0]);
                    arr_21 [i_4] [i_6] [i_6] = (((arr_17 [i_5 - 2] [i_4] [21]) | 11644));
                    var_21 = ((((((!(arr_19 [22] [i_5] [12] [i_5]))))) / -var_13));
                    var_22 = (min(var_22, 255));

                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_23 = ((-(arr_23 [i_4] [20] [20] [i_4] [20])));
                        var_24 = (arr_19 [12] [12] [i_5 + 1] [i_5 - 2]);
                    }
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        arr_26 [19] [i_6] [i_6] [10] = (((~(arr_11 [21]))));
                        arr_27 [1] [i_6] [20] [i_6] [1] = ((((((arr_18 [i_4] [16] [i_6]) ? 25825 : var_12))) != var_2));
                    }
                }
            }
        }
        var_25 = (min(var_25, var_12));
    }
    var_26 = var_3;
    var_27 = 2;
    #pragma endscop
}
