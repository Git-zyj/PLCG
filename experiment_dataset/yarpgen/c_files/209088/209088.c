/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_11;
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (max((((arr_1 [15]) ? (max((arr_1 [i_0]), var_16)) : (arr_0 [i_0] [i_0]))), (0 & 0)));
        arr_2 [i_0] = ((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_21 &= ((((var_10 >= (min(var_4, (arr_3 [i_1] [i_1]))))) ? (max((arr_5 [i_1]), (max((arr_3 [20] [i_1]), (arr_4 [i_1 + 2]))))) : ((max((((var_11 ? (arr_4 [19]) : (arr_5 [i_1])))), (min(var_12, var_7)))))));
        var_22 = (arr_5 [i_1 - 3]);
        arr_6 [i_1] = (min(var_6, var_15));
    }
    var_23 = (min(var_7, ((min(var_9, var_9)))));

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_24 = (max(((max((min((arr_7 [i_2] [i_2]), (arr_8 [i_2]))), (((var_3 >= (arr_7 [i_2] [i_2]))))))), ((((max((arr_8 [i_2]), var_6))) ? (arr_7 [i_2] [i_2]) : ((min((arr_8 [i_2]), (arr_7 [i_2] [i_2]))))))));
        arr_9 [i_2] = (max((arr_8 [i_2]), (arr_7 [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_25 = ((((((arr_8 [i_2]) != (arr_15 [i_2] [i_2] [i_5 + 3])))) ^ (arr_14 [i_3])));
                        var_26 = (((arr_16 [12] [i_3] [i_3] [i_3] [i_3]) ? ((((arr_8 [i_3]) & var_0))) : (((arr_16 [i_5] [i_2] [i_2] [i_2] [i_2]) ? (arr_13 [i_2]) : (arr_14 [i_5 + 3])))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_27 = (min(var_27, (arr_15 [24] [i_3] [i_3])));
                        arr_20 [i_2] [i_2] = (var_2 ? (arr_14 [i_6]) : (arr_15 [i_2] [i_4] [i_6]));
                    }
                    arr_21 [2] |= (arr_14 [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
