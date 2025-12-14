/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] = 22;
                    var_15 = ((arr_5 [i_0]) ? (max((arr_4 [i_1 + 2] [i_1 + 1]), (arr_4 [i_1 - 1] [i_1 + 4]))) : (max((arr_5 [i_1 + 3]), (min((arr_5 [i_0]), (arr_7 [i_1]))))));
                    var_16 = (((((min(235, 123)))) & ((1125899906838528 ? (arr_6 [i_0] [i_0] [i_1] [i_1]) : (arr_0 [i_0] [i_0])))));
                    var_17 -= (((arr_1 [i_0] [i_0]) ? ((((((arr_5 [i_0]) ? (arr_5 [i_2]) : (arr_1 [i_0] [i_1]))) >> (((max(43, (arr_7 [i_0]))) - 29))))) : (var_10 & var_7)));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_11 [i_3] &= ((((!(arr_4 [i_3] [i_3]))) ? (((arr_4 [i_3] [i_3]) ? (arr_4 [i_3] [i_3]) : (arr_4 [i_3] [i_3]))) : (max((arr_4 [i_3] [i_3]), (arr_4 [i_3] [i_3])))));
        var_18 = (min(((0 ? (arr_0 [0] [i_3]) : 39)), (arr_1 [i_3] [i_3])));
    }
    #pragma endscop
}
