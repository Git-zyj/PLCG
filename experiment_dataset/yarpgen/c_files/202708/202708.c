/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = ((-(--1491142776)));
                    arr_10 [i_1] [i_0] [i_1] |= ((var_9 ? (max((max(1566361820, (arr_0 [3]))), ((max(var_13, var_3))))) : ((max((arr_1 [i_0]), var_9)))));
                    arr_11 [i_1] [i_1] [i_0] = (max(4, -1491142785));
                }
            }
        }
        arr_12 [i_0] = (((((arr_1 [i_0 - 1]) ? (max(-1, (arr_1 [i_0]))) : (arr_8 [i_0]))) | ((var_11 ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 - 1])))));
        var_18 = (max(var_18, ((max((((((max((arr_2 [i_0] [i_0]), var_7))) ? var_7 : 0))), (var_12 ^ -532753473))))));
    }
    #pragma endscop
}
