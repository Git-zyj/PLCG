/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (!-787013064827371189);
    var_14 = var_2;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (max(var_15, ((((max(-787013064827371189, (((787013064827371189 ? (arr_1 [18]) : (arr_1 [i_0])))))) == (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] |= var_3;
                    arr_9 [i_0] = var_1;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_16 = (!-817250192);
        arr_14 [i_3] [i_3] = min((arr_0 [i_3] [i_3]), 787013064827371188);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_17 = -1;
        var_18 = (((arr_15 [i_4]) ? ((-(((arr_2 [i_4] [i_4] [i_4]) * (arr_2 [i_4] [i_4] [i_4]))))) : (((arr_2 [i_4] [i_4] [i_4]) ? (arr_4 [i_4] [i_4]) : (arr_2 [i_4] [i_4] [i_4])))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = 787013064827371173;
        var_19 = ((((((var_11 ? (arr_17 [1]) : var_5)))) % ((787013064827371189 + (arr_7 [i_5])))));
        var_20 -= (arr_20 [i_5]);
    }
    #pragma endscop
}
