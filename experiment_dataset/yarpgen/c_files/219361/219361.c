/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((12244375734469550564 && var_4) == var_3)) ? ((((var_1 ? 97 : 2167675460)) << ((((var_1 ? 2127291848 : -96)) - 2127291830)))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((max((arr_3 [i_1] [i_1] [i_1 - 2]), ((var_9 ? (arr_0 [i_1]) : (arr_2 [i_0])))))) ? ((((arr_2 [i_1 + 2]) ? var_1 : -96))) : ((((((arr_0 [i_1 - 3]) ? (arr_4 [i_0]) : (arr_2 [i_1])))) ? (~var_2) : (((arr_1 [i_0]) ? (arr_4 [i_1]) : var_10))))));
                arr_6 [i_0] [i_1] = (+((-(min((arr_4 [i_0]), var_8)))));
                var_12 = (max(var_12, (arr_1 [i_1])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_13 = var_5;
        arr_11 [i_2] = (arr_8 [i_2]);
        var_14 = ((var_5 ? (arr_10 [i_2]) : (arr_10 [i_2])));
        var_15 = -var_3;
        var_16 *= var_6;
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = 15;
        arr_15 [i_3] [i_3] = (((arr_7 [i_3] [i_3]) ? (((min(81, (arr_10 [i_3]))))) : (arr_2 [i_3])));
        var_17 = max((((arr_12 [i_3] [i_3]) & (arr_4 [i_3]))), (1 && 127));
    }

    for (int i_4 = 4; i_4 < 17;i_4 += 1)
    {
        var_18 = min(15456861688020955076, 2);
        arr_18 [i_4] = (arr_9 [i_4 + 1]);
    }
    #pragma endscop
}
