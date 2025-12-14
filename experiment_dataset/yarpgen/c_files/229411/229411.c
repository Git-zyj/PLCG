/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 ? ((var_9 ? -var_10 : var_3)) : var_10));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((((arr_2 [8]) / var_3))) ? (512220286 - 10988354676991411406) : ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0]))))))) ? (((var_3 == (((arr_0 [i_0]) ? var_2 : (arr_1 [i_0 - 2])))))) : ((~(arr_0 [i_0 + 1])))));
        var_12 = 218;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 = ((((min((arr_0 [8]), ((var_8 ? (arr_0 [i_1]) : var_8))))) ? ((var_2 ? ((var_6 ? var_3 : -7591810399652662769)) : ((min((arr_1 [i_1]), var_4))))) : ((min(var_1, var_7)))));
        arr_6 [i_1] [i_1] = (((arr_1 [i_1]) ? (max(var_4, (arr_1 [i_1]))) : (((7458389396718140224 ? 77 : 16)))));
        var_14 = (max((min(var_2, (arr_4 [i_1] [i_1]))), ((min((((arr_2 [i_1]) >= var_4)), (!20))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] [21] = (arr_7 [i_2] [i_2]);
        var_15 = (arr_8 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    var_16 = (arr_7 [15] [20]);
                    arr_14 [15] [15] [i_3] [3] = (arr_8 [i_2]);
                }
            }
        }
        var_17 = (((((((arr_10 [14] [14] [16]) || ((min((arr_13 [i_2] [i_2] [i_2]), (arr_10 [i_2] [i_2] [19])))))))) >= ((-32 | (max(var_10, (arr_10 [11] [i_2] [i_2])))))));
    }
    var_18 = (((1004585226 ? 10988354676991411410 : 16519)));
    var_19 = (((((-(var_5 + var_9)))) ? var_2 : -var_3));
    #pragma endscop
}
