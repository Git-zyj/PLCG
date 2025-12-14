/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = (((((-(arr_0 [i_0])))) ? (arr_1 [i_1] [i_1]) : (((-(arr_0 [i_0]))))));
                    var_16 -= (((((-(arr_5 [i_1] [i_2])))) ? ((~(arr_6 [i_2 - 1] [i_2 + 1] [i_1] [i_0]))) : (((!(arr_5 [i_2] [i_2 - 1]))))));
                    var_17 = ((((((6 ? (arr_3 [i_0] [9] [8]) : (arr_0 [i_0])))) ? var_3 : ((65530 ? (arr_5 [i_1] [i_1]) : (arr_6 [i_0] [i_0] [i_1] [i_0]))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_12 [i_3] = var_12;
        arr_13 [i_3] = var_1;
        var_18 = var_7;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_19 = 3342048840526513376;
                    var_20 = (max(var_20, (((((!(arr_3 [i_5] [i_4] [i_3]))) ? (arr_1 [i_4] [i_5]) : (((-(arr_14 [i_5])))))))));
                }
            }
        }
    }
    #pragma endscop
}
