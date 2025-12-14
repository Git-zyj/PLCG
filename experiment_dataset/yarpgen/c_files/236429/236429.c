/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_7);
    var_16 -= var_5;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_17 = ((((var_6 & (2668276110628444317 & 11945267340778397019))) >= (((var_9 ? var_12 : var_14)))));
        arr_3 [i_0] [i_0 - 1] = ((max((arr_2 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 - 1]))));
        var_18 = (min((((((arr_2 [i_0] [i_0]) & (arr_2 [i_0] [i_0 + 1]))) - (arr_0 [i_0 + 1]))), (((~(var_11 & var_8))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 = min((((arr_5 [i_1]) % (1 ^ var_12))), (((arr_4 [i_1]) ? (arr_5 [i_1]) : (1 - 23573))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_20 += (min((min(1, 1455314676437244124)), (arr_5 [i_2 + 3])));
                    var_21 = (max((arr_9 [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_3]), (max((arr_9 [i_2 - 2] [i_2 + 4] [i_2 + 4] [i_3]), 580226905))));
                    var_22 = (min(((min(((min(var_12, var_4))), -946970966))), (min((arr_7 [i_1] [i_1] [i_1]), ((2668276110628444317 ? -2668276110628444318 : (arr_6 [i_1] [i_3])))))));
                    var_23 = ((((((arr_5 [i_2 + 2]) ? (arr_5 [i_2 - 2]) : (arr_5 [i_2 + 3])))) ? ((var_9 ? var_12 : (arr_5 [i_2 + 2]))) : ((min(((var_11 ? -2668276110628444299 : (arr_6 [i_2] [i_2]))), (arr_4 [i_1]))))));
                }
            }
        }
        var_24 = (((((((min((arr_9 [i_1] [i_1] [i_1] [i_1]), 1))) ? (arr_5 [i_1]) : var_6))) ? var_4 : (arr_9 [i_1] [i_1] [i_1] [i_1])));
    }
    var_25 = 32956;
    #pragma endscop
}
