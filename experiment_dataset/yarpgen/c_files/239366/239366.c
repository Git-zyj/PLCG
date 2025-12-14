/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_10 && var_11);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 |= (((~var_5) ? var_14 : ((((min(var_13, var_1))) ? var_0 : ((var_0 ? var_2 : var_2))))));
        arr_4 [i_0] = ((+(((arr_3 [i_0]) >> (var_4 - 199)))));
        var_21 = (min(var_21, ((((arr_2 [i_0] [i_0]) / var_16)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    var_22 = (min((arr_11 [i_3 + 2]), ((-(arr_11 [i_3 - 1])))));
                    arr_13 [i_3] = var_16;
                    arr_14 [i_1] [i_3] = ((((((~(arr_7 [i_2 + 3] [i_2 + 2] [i_2]))) + 2147483647)) >> (arr_6 [i_1])));
                    var_23 += ((var_10 ? ((-((-(arr_9 [i_1] [i_2] [i_3]))))) : (var_6 == var_15)));
                }
            }
        }
        var_24 = ((2 ? ((((arr_5 [i_1]) || var_5))) : (((arr_11 [i_1]) ? ((max(87, var_7))) : ((min((arr_6 [i_1]), var_14)))))));
        var_25 = (((((230 ? 62 : (arr_8 [i_1] [i_1])))) ? (arr_9 [i_1] [i_1] [i_1]) : ((~(arr_5 [i_1])))));
        arr_15 [i_1] = var_13;
    }
    var_26 = ((!(((var_10 << (var_10 - 33))))));
    var_27 = (max(var_27, var_1));
    var_28 = var_7;
    #pragma endscop
}
