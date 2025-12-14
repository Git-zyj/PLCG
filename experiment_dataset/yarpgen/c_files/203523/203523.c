/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = (var_7 * -var_2);
    var_12 = (~var_2);
    var_13 = (min(var_5, 192));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 = (arr_8 [i_0] [i_1]);
                        var_15 = (arr_9 [i_3] [i_2]);
                    }
                }
            }
            arr_11 [i_1] = (((arr_2 [i_1]) > (arr_2 [i_1])));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_16 += ((2147483647 < (arr_1 [i_0 - 2] [i_4])));
            var_17 = (arr_13 [i_0] [i_4]);
            arr_16 [1] [1] [i_0] = (((~((var_3 & (arr_0 [i_0 - 4] [i_4]))))));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_18 = ((var_4 ? (arr_18 [i_0 - 3] [i_0 - 1]) : (arr_18 [i_0 - 1] [i_0 - 4])));
            var_19 = (max(var_19, (arr_12 [i_0] [i_0] [i_5])));
            var_20 += (((arr_1 [i_0 - 3] [i_5]) / (arr_7 [i_0 - 4] [i_0] [i_0 - 2] [i_0 - 1])));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_21 = (((var_1 & var_2) ^ var_4));
                        arr_28 [i_6] = (((((max((arr_17 [i_0 - 1] [i_0 - 3]), (arr_17 [i_0 - 3] [i_0 - 1]))))) % (((min(var_2, (arr_4 [i_0] [i_6] [i_8]))) + (arr_15 [i_0] [i_0] [i_0 - 3])))));
                    }
                }
            }
            var_22 = ((~(((arr_18 [i_0] [i_6]) ? ((max((arr_2 [i_6]), (arr_22 [i_0] [i_0] [i_0])))) : (arr_19 [i_0 - 4])))));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            var_23 += (arr_12 [i_0] [i_0 - 1] [1]);
            arr_31 [i_9] = (((((arr_1 [i_0] [i_0 - 3]) * (arr_1 [i_0] [i_0 + 1]))) >> (((arr_1 [i_0] [i_0 - 1]) - 107))));
        }
        arr_32 [i_0] = ((-76 ? (((max((arr_18 [i_0 - 4] [i_0]), (arr_12 [i_0 - 2] [i_0 + 1] [i_0 - 1]))))) : (((max(var_7, var_1)) - (arr_25 [i_0] [i_0 - 2] [i_0])))));
        arr_33 [i_0] = (arr_5 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
