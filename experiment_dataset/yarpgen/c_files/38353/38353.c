/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_10 -= (min((max((((-(arr_0 [i_0])))), (max((arr_0 [i_0]), 9223372036854775798)))), ((-21 ? 4058846634530384831 : (((1 ? -8 : 135644370)))))));
        var_11 = max((max((max(323588692, -6895021303806673297)), (~21))), (((!((min((arr_1 [i_0]), (arr_0 [i_0]))))))));
        var_12 = ((21 ? (max(((116 ? 4081361639471830854 : -6)), ((min((arr_1 [i_0]), (arr_0 [i_0 + 1])))))) : (arr_0 [i_0 - 3])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (min((max(((min((arr_1 [i_0]), -7))), (arr_5 [i_0]))), ((-109 ? ((max((arr_3 [i_0] [i_1]), 4159322940))) : (((arr_0 [i_2]) ? 10 : 127))))));
                    var_14 = (max(var_14, -6794512162535262663));
                }
            }
        }
        var_15 &= (arr_3 [i_0 + 3] [1]);
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_16 = (min(var_16, (arr_7 [i_3])));
        arr_9 [14] |= -8;
    }
    var_17 &= ((var_2 ? ((max(((678337254207671923 ? var_0 : var_7)), ((var_6 ? 113 : 24))))) : var_5));
    var_18 = min((max(((6 ? -2639746748866447678 : -6182704056724116083)), var_5)), ((var_6 ? (min(-116, var_2)) : (min(var_1, 124)))));
    #pragma endscop
}
