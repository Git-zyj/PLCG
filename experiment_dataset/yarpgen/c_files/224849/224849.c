/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, (arr_1 [i_1] [22])));
                        var_18 = ((((762085514 / (arr_0 [i_1 - 3]))) >> (((max(13216873016216052975, (arr_0 [i_1 - 1]))) - 13216873016216052918))));
                        var_19 = ((!((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
                    }
                }
            }
            arr_10 [10] [8] &= (max((((!(arr_9 [i_1] [i_1 + 1])))), (min((((arr_6 [i_0] [24] [i_0]) / (arr_6 [20] [16] [18]))), (arr_7 [i_0] [16] [i_0] [i_0])))));
            var_20 = (min(var_20, ((min((arr_6 [i_1] [8] [i_1]), (((1 ? -113 : 42925))))))));
            arr_11 [7] [i_0] [i_1] = 5371449542031748390;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_14 [i_0] [i_0] = var_0;
            var_21 |= ((~(arr_1 [i_0] [20])));
        }
        var_22 = (min(var_22, (!var_9)));
        var_23 *= (max(((1 ? (arr_8 [i_0]) : var_5)), (max(39324, (((arr_8 [i_0]) % 39324))))));
        var_24 = (~69);
    }
    var_25 = ((var_5 ? (((((var_2 | var_7) && (!47))))) : (min(var_9, (((var_11 ? var_0 : 112)))))));
    var_26 -= (((max(110, 133955584)) / var_7));
    var_27 = (max(var_27, ((!((((max(var_6, 55600))) && var_14))))));
    #pragma endscop
}
