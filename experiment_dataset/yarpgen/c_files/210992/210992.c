/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [5] [5] = var_12;
        arr_3 [10] = 44;
        arr_4 [i_0] = ((var_9 & (var_17 / -8994010094383423148)));
        arr_5 [i_0] [i_0] = (((var_16 != var_10) << (var_13 == var_9)));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = ((((212 ^ (0 & var_6))) >= 44));
        arr_9 [i_1] = 44;

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_13 [i_1] [i_1] [i_1] = (((212 <= var_3) || -16));
            arr_14 [i_1 - 1] [i_2] = 28;
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_18 = var_6;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_23 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] = var_15;
                        var_19 = (24 || 150);
                    }
                }
            }
            arr_24 [i_3] [i_3] = (((var_7 <= 0) << (112 - 93)));
            arr_25 [i_3] [i_3] = 0;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_30 [i_7] [i_3] [i_3] [i_1 + 2] = -1;
                        arr_31 [i_3] [i_1 + 1] [i_3 - 1] [i_3] = (((17 % var_14) && var_4));
                    }
                }
            }
        }
    }
    var_20 = (var_16 ^ var_10);
    var_21 = var_7;
    var_22 = 2080374784;
    #pragma endscop
}
