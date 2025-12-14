/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [0] [0] = (min(((var_2 ? var_3 : (arr_0 [i_0] [i_0]))), (+-13)));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [10] [12] &= (min(65533, var_1));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                arr_11 [i_1] = (arr_1 [1]);

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_15 [3] [i_1] [i_1] [i_1] = (arr_2 [i_0] [i_0]);
                    var_12 = (((arr_4 [i_0] [i_1]) - 9223372036854775807));
                }

                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    arr_19 [i_1] [i_1] [i_1] = (((arr_17 [i_1 + 1] [i_4 - 1] [i_4 - 1] [i_1 + 1]) & (arr_7 [i_1 + 1] [i_2 - 1] [i_2 + 1] [i_4 + 2])));
                    var_13 = (min(var_13, (arr_7 [i_0] [16] [i_0] [i_0])));
                    var_14 = (((arr_8 [i_0]) ? ((-(arr_12 [i_0]))) : (arr_2 [i_2] [i_4])));
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_15 = (max(var_15, (arr_18 [1] [i_5] [4] [i_0])));
            arr_22 [i_0] = ((((min(14231, (arr_8 [i_5])))) ? ((max(2, (arr_8 [i_0])))) : (arr_8 [i_5])));
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_16 &= arr_20 [i_6] [i_6] [11];
        arr_26 [0] = (((((min((min((arr_21 [i_6] [10] [i_6]), var_1)), var_6)))) <= -9223372036854775807));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_17 = arr_2 [i_6] [i_7];
            arr_31 [i_6] [i_6] = var_10;
            var_18 = 6;
            var_19 = (((!var_0) ? (arr_25 [i_6]) : ((((arr_23 [i_6]) ? var_4 : (arr_10 [i_6] [i_6] [i_7]))))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_20 *= (min((arr_0 [i_6] [i_8]), (min((arr_25 [i_8]), (((var_9 ? (arr_25 [i_6]) : 22593)))))));
            arr_34 [i_6] = var_2;
            var_21 &= ((((((var_1 ? (arr_23 [i_6]) : var_1)))) ? ((7 >> (((max(var_7, (arr_1 [i_6]))) + 8558)))) : var_7));
        }
        arr_35 [i_6] = ((((min((~1), (arr_28 [i_6] [i_6])))) ? (((((arr_16 [6] [i_6] [i_6] [i_6]) || var_2)))) : (max((((arr_28 [i_6] [i_6]) << (((arr_23 [i_6]) + 16744)))), -58))));
    }
    var_22 = 12;
    #pragma endscop
}
