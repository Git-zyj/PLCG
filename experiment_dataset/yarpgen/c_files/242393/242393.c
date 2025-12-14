/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 &= (((min((arr_1 [i_0]), 2147483647))) ? (min(-956176783, (arr_0 [i_0]))) : (((((410360060 ? 410360062 : 410360060))) ? -410360063 : ((var_12 ? (-2147483647 - 1) : -410360063)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 = arr_9 [i_0] [i_0] [i_0] [i_0] [i_0];
                        var_16 = (((((arr_10 [i_1 + 1] [i_1]) ? (arr_9 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1]) : (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]))) > (((arr_9 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_2]) | (arr_10 [i_1 + 1] [3])))));
                    }
                }
            }
        }
        arr_12 [i_0] = (((((max((arr_8 [i_0] [9] [9] [i_0]), (arr_9 [i_0] [i_0] [8] [i_0] [i_0]))) << (((((arr_2 [i_0] [i_0]) + 1637344769)) - 28))))) ? 329921037 : (((!(arr_1 [i_0])))));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_15 [i_4] = ((((min((arr_14 [i_4 - 1]), (arr_13 [i_4] [1]))) + 2147483647)) >> (((((arr_13 [11] [11]) ? (min((arr_14 [i_4]), (arr_13 [i_4] [i_4]))) : 1910277487)) + 73940359)));
        arr_16 [i_4 - 1] = var_7;
        arr_17 [i_4] = max((arr_13 [i_4 - 1] [i_4]), (((arr_13 [i_4 + 1] [i_4]) ? (arr_14 [i_4 + 1]) : (((!(arr_13 [i_4] [4])))))));
        var_17 = (min((arr_14 [i_4 + 1]), (arr_14 [i_4 - 1])));
        var_18 |= min((min((((arr_14 [i_4]) ? (arr_13 [i_4] [i_4]) : (arr_14 [i_4]))), (arr_14 [i_4 - 1]))), (arr_14 [i_4 + 1]));
    }
    var_19 = var_1;
    #pragma endscop
}
