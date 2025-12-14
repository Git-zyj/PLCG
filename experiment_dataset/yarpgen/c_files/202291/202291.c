/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((((((min(-63, -101))) ? ((max(58, var_13))) : var_7))) ? (((!((max(-84, -46)))))) : (var_15 && var_1)));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        var_17 = ((((max((max((arr_2 [i_0 + 1]), var_11)), (arr_3 [i_1 + 1] [i_3 + 2])))) ? ((((((arr_3 [i_0 - 1] [i_1 + 1]) ? var_2 : 45))) ? var_7 : (arr_0 [i_2 - 1]))) : ((min(var_1, (max((arr_2 [i_0 + 1]), (arr_4 [i_0] [i_1 + 1] [i_1 + 1]))))))));
                        var_18 = (max(((-(arr_1 [i_1 + 1]))), ((max((arr_1 [i_1 - 1]), (arr_5 [i_0 + 2] [i_1 + 1]))))));
                    }
                }
            }
        }
        arr_9 [2] |= ((24 ? (-104 & 12) : 92));
        var_19 = (min(var_19, ((((73 ^ 51) ? (arr_4 [i_0 + 2] [i_0] [14]) : ((((max((arr_6 [i_0] [20] [i_0]), (arr_4 [i_0 - 1] [i_0] [i_0])))) ^ (((arr_7 [i_0] [i_0] [i_0]) & var_11)))))))));
        var_20 = (((((arr_0 [i_0 + 2]) ? (arr_0 [i_0]) : (arr_0 [23]))) | (((((-86 ? (arr_6 [2] [2] [i_0 + 1]) : (arr_1 [22])))) ? ((-100 ? var_15 : (arr_5 [i_0] [i_0]))) : ((max((arr_1 [i_0]), (arr_4 [i_0] [i_0 - 1] [i_0]))))))));
    }
    var_21 |= (42 - 51);
    #pragma endscop
}
