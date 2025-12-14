/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0]) <= (((arr_1 [1]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_17 = var_1;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = -1;
        var_18 = (arr_0 [i_1]);
        arr_7 [i_1] = -54;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_11 [8] = ((((arr_10 [i_2]) ^ ((var_15 * (arr_1 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_3] [i_3 + 2] [i_2] = (arr_2 [i_3 + 2]);
                    arr_18 [i_2] = -30741;
                    arr_19 [11] [i_3 + 1] [i_2] = ((-((((arr_0 [10]) ? var_0 : 24160)))));
                }
            }
        }
    }
    var_19 = 30741;

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_20 = (arr_3 [23] [i_5]);
        var_21 = (((~(min((arr_2 [i_5]), (arr_1 [i_5]))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_29 [i_5] [i_5] [i_6] [i_7] = (arr_26 [i_5]);
                    arr_30 [i_5] = ((min(-91, (arr_20 [i_5] [i_6]))));
                }
            }
        }
    }
    var_22 = -8;
    #pragma endscop
}
