/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((0 < 398263416), (~var_4)))) ? (((-((max(var_8, 38380)))))) : (min(var_9, (((27152 ? 27171 : var_12)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_15 = var_6;
                        arr_12 [8] [8] [i_2 + 1] = (arr_4 [i_1 + 2] [i_1 + 1] [i_2 - 1] [i_3 + 1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                {
                    arr_18 [i_5] [11] [i_5] [i_5] = (max((((var_4 ? var_7 : var_13))), ((((arr_9 [7] [i_4]) ? (((arr_2 [i_0]) ? var_1 : 27182)) : ((((arr_11 [i_0] [i_5 - 1]) ? (arr_4 [i_5] [i_4] [i_0] [i_0]) : var_0))))))));
                    var_16 = (((((((max((arr_13 [i_5] [i_4] [i_0]), var_3))) ? var_12 : var_11))) ? ((((min(38380, 16463))) ? var_11 : ((((arr_1 [i_0]) ? (arr_14 [i_0] [i_0]) : (arr_0 [i_5])))))) : (var_5 > 0)));
                }
            }
        }
        arr_19 [i_0] = (((((var_4 ? var_6 : 49070))) ? (((((max((arr_14 [i_0] [i_0]), 0))) ? ((~(arr_0 [i_0]))) : 1))) : (((arr_3 [i_0] [12]) ? (min(var_5, 10247)) : (((~(arr_14 [i_0] [i_0]))))))));
        var_17 = (max((arr_1 [i_0]), (arr_1 [i_0])));
    }
    #pragma endscop
}
