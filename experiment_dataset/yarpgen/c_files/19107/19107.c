/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_2 ? (var_0 - var_4) : ((~((max(var_11, var_3))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_9 [13] [i_1 + 3] [i_2 - 1] [i_0] = ((!(((-((var_1 ? (arr_2 [1] [i_1]) : var_2)))))));
                        var_19 -= (-113 && 12288);
                        arr_10 [i_0] [i_0] [i_0 - 1] [i_3] = min(((((min(var_7, var_14))) ? (var_17 - var_2) : ((((arr_1 [i_0]) && -24))))), ((max((arr_0 [i_0] [i_1 + 2]), (arr_1 [i_0])))));
                        var_20 = (min(var_20, ((((arr_2 [i_0 + 1] [i_0]) ? (arr_4 [i_1 + 4] [i_0 + 1]) : ((max((arr_3 [16] [i_1 - 1] [16]), var_2))))))));
                        var_21 = var_17;
                    }
                }
            }
        }
        var_22 = (min(var_22, (arr_4 [i_0] [i_0])));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_23 |= 42;

            /* vectorizable */
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    var_24 = (arr_17 [i_5 + 1] [i_5] [i_5] [i_6] [i_6]);
                    var_25 += (((((arr_2 [i_6] [i_4]) - var_10)) - 1));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_26 = (arr_13 [i_0]);

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_22 [i_0] = var_9;
                        var_27 += -4095;
                    }
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        arr_26 [i_0] = (((arr_19 [i_0] [16] [i_9 + 2] [i_5 + 1]) ? (arr_19 [i_0] [4] [i_9 - 1] [i_5 + 1]) : (arr_19 [i_0] [2] [i_9 + 2] [i_5 + 1])));
                        var_28 = (min(var_28, (((arr_6 [i_0 - 1] [i_0] [i_0 + 1]) ? (arr_6 [i_0 + 1] [7] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                        var_29 = (max(var_29, -24));
                    }
                }
                arr_27 [i_0] [1] [i_0] = (((arr_25 [i_0] [i_4] [i_5]) == var_4));
                arr_28 [i_0] [i_4] [8] &= (((-1 ? (arr_3 [4] [i_4] [4]) : var_13)));
                var_30 = ((var_12 ? var_15 : var_16));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                var_31 = (min(var_31, (arr_11 [i_0 + 1])));
                arr_31 [i_0] [18] = (((arr_30 [i_0] [i_0 - 1] [i_0] [i_4]) ? (arr_23 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_10] [i_10]) : (arr_30 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])));
                arr_32 [4] &= (((arr_0 [i_0 + 1] [2]) % (arr_0 [i_0 + 1] [i_0 + 1])));
            }
            var_32 = (arr_23 [i_0 - 1] [1] [i_0 - 1] [i_0] [i_4]);
            var_33 -= var_17;
        }
        arr_33 [i_0] [i_0] = (arr_21 [i_0 - 1] [i_0] [18] [i_0 - 1] [i_0]);
    }
    #pragma endscop
}
