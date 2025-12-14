/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((var_11 ? -54 : (var_0 || var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_18 *= arr_1 [i_0] [i_1];
                arr_6 [i_0] [i_0] = (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                var_19 = (((arr_1 [i_1] [i_0]) ? (((((((arr_2 [i_1]) && 0)) || ((min((arr_0 [i_0]), -54))))))) : (((((-(arr_1 [i_1] [i_1])))) ? (arr_2 [i_1]) : ((((arr_3 [i_0] [i_1]) ? var_6 : (arr_0 [i_0]))))))));
            }
        }
    }
    var_20 = var_3;
    var_21 = var_10;

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_22 += (~(((!(-60 || 2588719390)))));
        arr_9 [i_2] = 9;
        var_23 = 0;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_24 = (min(var_24, var_14));
                        var_25 = (max(var_25, (((((((-(((var_2 || (arr_16 [16])))))) + 2147483647)) >> (((((arr_7 [i_2]) ? (arr_7 [i_3]) : -11)) + 76)))))));
                    }
                }
            }
        }
        var_26 = (min(var_26, (((-((((arr_12 [i_2]) <= (arr_12 [i_2])))))))));
    }
    #pragma endscop
}
