/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = ((min((((arr_0 [i_0]) > (arr_1 [i_0] [18]))), (!56))));

        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((!(((((max((arr_4 [i_0]), (arr_1 [i_0] [i_0])))) % var_1)))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_14 = (((max((min((arr_3 [i_0] [i_0] [i_0]), var_0)), ((var_11 | (arr_9 [i_0] [i_0] [i_1] [i_2]))))) > (arr_7 [6] [i_1] [6] [i_1])));
                var_15 = var_5;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_16 = (var_3 == ((0 ? -2678851636230549584 : 33)));
                            arr_16 [i_0] [18] [i_2] [18] [i_0 - 1] [i_0] = (((max(var_7, (33 / -57))) > ((min(var_9, -38)))));
                            arr_17 [i_1] [i_0] [9] [i_0] = -34;
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_17 = (arr_0 [i_0]);
                arr_20 [1] [i_0] [i_0] [i_0] = (max(((max(12668593578165017801, 56))), -10119));
            }

            /* vectorizable */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_18 = var_3;
                var_19 = arr_10 [i_0] [i_1] [i_0];
            }
            arr_24 [i_0] [i_1] = min((arr_9 [i_0] [i_0] [i_0] [16]), var_8);
            var_20 = ((var_11 ? -1 : (((min(var_12, 22703)) & ((1 ? (arr_11 [i_0] [i_1] [i_1]) : (arr_4 [i_0])))))));
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_21 = (arr_15 [i_0] [2]);
            var_22 = (arr_8 [i_0 + 2] [i_0]);
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_23 = var_7;
                    arr_34 [i_8] [i_8] [i_8] [i_8] = (min(((((min((arr_19 [i_8]), var_4))) ? (arr_18 [i_9] [i_9] [i_8] [i_8]) : (!202))), ((((arr_21 [i_8] [15] [i_10] [i_10]) && ((((arr_3 [i_8] [i_9] [i_10]) ? var_10 : (arr_9 [i_9] [i_8] [i_8] [i_10])))))))));
                    var_24 = (((((((min((arr_9 [i_8] [i_8] [1] [7]), var_5))) ? ((max((arr_8 [i_8] [i_9]), (arr_32 [18] [i_9] [15])))) : (arr_3 [i_8] [i_9] [i_10])))) ? (min(((min(var_5, (arr_19 [i_8])))), (min(var_0, -1)))) : ((min(((((arr_12 [i_8] [14] [i_10] [i_10]) >= var_7))), ((~(arr_25 [i_8]))))))));
                }
            }
        }
    }
    #pragma endscop
}
