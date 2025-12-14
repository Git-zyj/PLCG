/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 |= (~(min(var_6, (arr_1 [i_0 - 1]))));
        arr_3 [i_0] = (max((arr_0 [i_0 + 1]), ((((((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? (arr_2 [i_0 - 2]) : (min(var_17, var_17))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_21 = min(-106, (-9223372036854775807 - 1));
                        arr_12 [i_3] [13] [i_2] [i_3] [i_2] = ((((max((((var_8 ? var_15 : (arr_6 [i_2])))), ((-2279458545071977464 ? var_4 : var_13))))) ? (((((min(var_11, var_2)))) ^ (arr_7 [i_1] [i_1]))) : ((max(((min((arr_2 [9]), (arr_0 [i_0])))), ((~(arr_6 [i_1]))))))));
                        var_22 ^= ((-1 ? 112 : ((var_11 + (max((arr_8 [i_0] [1] [i_2] [i_3]), -124))))));
                    }
                }
            }
        }
        arr_13 [2] = ((max(-122, (max(5937, var_15)))));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((((127 + (arr_14 [0] [i_4]))) + ((((min((arr_8 [i_4] [i_4] [i_4] [0]), (arr_5 [13])))) ? ((max(var_16, (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4])))) : ((var_13 ? 106 : (arr_14 [i_4] [i_4])))))));
        arr_17 [i_4] [i_4] = (((arr_0 [i_4 - 1]) * (~4)));
        var_23 = ((((max(-var_17, var_8))) ? (((arr_2 [i_4 - 1]) ? (arr_15 [i_4 - 1] [6]) : (arr_2 [i_4 + 1]))) : (!-1496076829)));
        var_24 = (~(!var_10));
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_25 += ((((((arr_18 [i_5] [i_5 - 1]) ? (min(7, var_4)) : ((min((arr_9 [i_5] [i_5] [i_5] [i_5] [9]), var_19)))))) ? (((((arr_8 [i_5] [i_5] [i_5] [7]) ? (arr_10 [i_5] [i_5] [i_5]) : var_2)))) : (max((max(var_8, -891434282)), ((max((arr_0 [i_5]), var_6)))))));
        var_26 |= ((-(((!((min((arr_8 [i_5] [i_5] [i_5] [4]), (arr_10 [i_5] [i_5] [i_5])))))))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_27 = var_1;
        var_28 = (max((arr_20 [i_6]), ((((var_14 ? (arr_22 [4]) : var_15)) + (arr_20 [i_6])))));
        var_29 = (((((arr_21 [i_6]) ? 52 : (arr_22 [i_6])))) ? (arr_22 [i_6]) : (((0 ? 250 : 106))));
        arr_23 [16] [15] = -10964;
    }
    var_30 |= var_5;
    #pragma endscop
}
