/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(2, ((((var_9 ? (arr_2 [i_0]) : var_10)) >> (var_7 + 5864)))));
                var_13 = var_4;
                arr_4 [i_0] [i_1] = ((~((min(3, var_5)))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_14 = arr_1 [i_2 - 2];
        var_15 = (min(var_15, ((min((arr_8 [i_2 - 1] [i_2]), (17 > 18446744073709551603))))));
        arr_9 [i_2] [i_2] = (!var_9);
        arr_10 [i_2] = (min((!var_7), (min((arr_3 [i_2 - 1] [i_2 - 1]), (arr_5 [i_2 - 2])))));
        var_16 = 7;
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        var_17 = (min(var_17, (max(((-(6 && 65530))), var_10))));
        var_18 = var_10;
        arr_14 [i_3] = ((~(arr_11 [i_3 + 1])));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_25 [16] [i_6] [i_6] = (((((var_6 ? (arr_22 [i_5]) : -46))) || 12));
                        var_19 = arr_23 [i_4] [i_4] [i_4 + 1] [i_4 + 1];
                    }
                }
            }
        }
        arr_26 [i_4] = 4;
        arr_27 [i_4 - 3] [i_4] = (!1);
    }
    var_20 *= (!-3);
    #pragma endscop
}
