/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = var_0;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((((max(15872, (arr_3 [i_0 + 1] [i_0]))))) ? 1024 : ((max((arr_0 [14] [i_0 + 2]), (arr_0 [i_0] [i_0 + 1])))));
        arr_5 [i_0] = (arr_1 [i_0 - 1] [i_0 - 1]);
        var_15 = (max(65504, (arr_2 [i_0 + 3])));

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            arr_9 [i_1] [i_0] [i_0] = (min((arr_1 [i_0 + 4] [i_1 - 2]), (arr_1 [i_0 - 1] [i_1 + 4])));
            arr_10 [i_0 - 2] = var_8;
            arr_11 [i_0] = ((max(var_9, (arr_0 [i_0 + 3] [i_0 - 2]))));
            var_16 |= (min((((min(-15869, (arr_6 [i_0]))))), (((arr_7 [i_1 + 4] [i_0]) ? (arr_3 [i_0] [i_0 + 2]) : (arr_0 [i_0] [5])))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_17 += arr_2 [i_0 + 4];
            var_18 |= (arr_0 [i_0 + 3] [i_2 + 2]);
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_19 = (min(var_19, var_3));
            var_20 = (arr_0 [i_0 + 3] [i_0 + 3]);
            arr_16 [i_3] = (arr_3 [i_0] [i_3 + 2]);
            var_21 += (((arr_0 [12] [i_3]) ? (arr_0 [i_0 + 3] [i_3 + 1]) : (((max(var_7, var_0))))));
            arr_17 [i_3] [i_0] = (min((max((arr_12 [i_0 + 3] [i_3]), var_1)), (arr_12 [i_0 + 3] [i_3])));
        }
        arr_18 [i_0] |= (arr_14 [i_0] [i_0 - 1] [i_0 - 1]);
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_22 = ((-(max((arr_1 [i_4 + 1] [i_4 - 1]), var_3))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_23 = (min(var_8, (arr_0 [i_5] [i_5])));
                        var_24 = var_12;
                    }
                }
            }
        }

        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            arr_34 [i_8] [i_8] [i_4] = (arr_32 [i_4]);
            arr_35 [8] |= (arr_31 [14]);
        }
    }
    var_25 = -var_10;
    #pragma endscop
}
