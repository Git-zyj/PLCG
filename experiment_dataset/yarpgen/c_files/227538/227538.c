/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_17 = (((!(arr_2 [i_1]))));
                        arr_11 [i_3] [i_2] [i_2] [i_1] [14] [i_3] = ((((((arr_0 [13]) - 3922789990))) ? (((arr_4 [i_1] [12] [i_1]) ? (arr_6 [i_2 - 3] [1] [i_2 - 3]) : 204)) : (((~372177305) ? (((arr_2 [i_1]) / (arr_9 [i_3] [i_2] [i_1] [16]))) : ((255 ? (arr_3 [13] [14] [i_2]) : 0))))));
                        arr_12 [7] [i_1] [i_1] [i_1] [5] = ((((372177306 || (((var_11 ? (arr_10 [i_1] [18] [i_2] [i_1] [i_1]) : (arr_10 [8] [i_1] [i_2] [i_3] [i_1])))))) ? -4355016212490174935 : (((0 ? (arr_4 [i_1] [13] [i_2 - 1]) : (arr_6 [i_2] [i_2 - 3] [3]))))));
                        var_18 = (max(var_18, ((max(((((((arr_0 [i_0]) << (3922789990 - 3922789965))) == (arr_2 [18])))), (((arr_1 [i_2 + 2]) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 + 2]))))))));
                    }
                }
            }
        }
        arr_13 [16] = ((min((arr_7 [i_0]), 227)));
    }
    var_19 = var_11;
    #pragma endscop
}
