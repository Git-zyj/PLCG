/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((+(min(((((arr_1 [i_0]) % (arr_1 [i_0])))), (min(var_9, var_4))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (min((max((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_1] [1]))), (((((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) != (arr_3 [i_1]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_2] [i_1] = ((var_12 ? (((-(arr_0 [i_1] [i_2])))) : ((-(max((arr_3 [i_1]), (arr_9 [i_0] [i_1] [i_2] [i_3])))))));
                        arr_12 [i_2] = (((max((max(582259394, 232)), (min(var_13, (arr_7 [i_0] [i_2] [i_0])))))) <= ((((min((arr_6 [i_0] [i_0]), (arr_7 [i_3] [i_1] [i_0])))) ? (((arr_4 [i_3] [1] [7]) & var_15)) : (arr_4 [10] [i_2] [i_3]))));
                        arr_13 [i_1] [i_3] = (arr_8 [i_0] [i_2]);
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = (max(((((arr_10 [i_3] [i_2] [i_1] [i_0]) ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (arr_10 [i_0] [i_1] [i_2] [i_3])))), (max((15709504362159798270 - 19), ((((arr_1 [i_1]) << (var_14 - 1980823834784403649))))))));
                    }
                }
            }
        }
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            var_17 |= (max((min((arr_8 [i_4 - 3] [i_4]), var_14)), ((max((104 ^ 15174), (arr_8 [i_4 + 3] [i_4 + 1]))))));
            var_18 = (max(var_18, (arr_7 [i_0] [i_4] [i_0])));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_19 = (((arr_9 [i_0] [i_5] [i_0] [i_0]) < (arr_3 [i_0])));
            arr_21 [i_0] [i_5] = (arr_8 [i_0] [i_0]);
            var_20 *= (arr_19 [1] [1]);
        }
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {
        arr_25 [i_6] = ((-(arr_22 [i_6])));
        var_21 = (((((arr_22 [i_6]) || (arr_24 [i_6 - 1]))) ? var_6 : (arr_23 [i_6 + 3])));
        var_22 |= (((arr_22 [4]) * (arr_23 [i_6])));
        var_23 |= (((arr_24 [i_6 - 2]) >= (arr_24 [i_6 + 2])));
        var_24 = 1578351272;
    }
    #pragma endscop
}
