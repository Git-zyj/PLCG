/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_13 = (~var_2);

        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            var_14 = (max(var_14, ((~((~(arr_3 [i_0 - 1] [i_1 - 4])))))));

            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] = (((arr_7 [i_2 + 2] [i_2 - 1]) < (arr_7 [i_2 - 3] [i_2 - 1])));
                var_15 = var_5;
                var_16 = ((var_8 ? var_6 : (arr_5 [i_2])));

                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    var_17 ^= (12 & -1695374402);
                    var_18 = ((((((arr_8 [i_0] [i_0]) & var_3))) ? (((var_8 + 9223372036854775807) >> (var_9 + 4392043521095162371))) : (var_10 == var_10)));
                    var_19 |= (var_11 | -1);
                    var_20 = (min(var_20, var_0));
                }
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    var_21 = (min(var_21, (((((var_4 ? (arr_10 [i_4] [i_2] [i_1] [i_0]) : var_2))) ? (arr_10 [i_0 - 1] [i_1 + 1] [i_4 + 3] [i_4 - 1]) : var_6))));
                    var_22 = (arr_8 [i_1] [i_0 - 2]);
                }
            }

            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                var_23 = ((arr_18 [i_5] [i_1 - 2] [i_1 - 4]) / var_5);
                var_24 = (arr_12 [i_0] [i_1] [i_1] [i_5 - 1]);
                arr_19 [9] [9] [i_5] [i_1 - 2] = ((var_4 ? (-2147483647 - 1) : (arr_6 [i_0 - 2] [i_1 - 4])));

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_25 = (arr_13 [i_0] [i_0] [i_0] [9] [i_0]);

                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        var_26 = -17;
                        var_27 = (((((var_7 ? (arr_2 [i_1 - 1] [i_5] [i_5]) : var_11))) ? (arr_23 [i_5] [i_6] [i_6] [i_5] [i_5] [10] [i_5]) : (((arr_8 [11] [i_1 - 1]) ? var_8 : (arr_15 [i_7] [9] [i_5 - 1] [i_1 - 3])))));
                    }
                    var_28 = ((arr_2 [i_6] [i_5] [i_0]) << (((arr_16 [9] [9]) - 62989)));
                }
            }
            var_29 = ((-7385051078656191308 ? 62 : 120));
            var_30 = ((!((((arr_14 [6]) ? (arr_3 [i_0 - 1] [i_0 - 1]) : var_3)))));
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_31 = (min(var_31, var_10));
                        var_32 = (max(var_32, (((((arr_28 [i_10] [i_10]) ? (arr_32 [i_8] [i_8]) : (min(2064384, var_8))))))));
                        var_33 = (max(var_33, (((2064397 ? 2064384 : 127)))));
                        var_34 = 2147483647;
                    }
                    var_35 = var_8;
                    var_36 = (((min(144, (arr_27 [i_8])))) ? (arr_24 [i_8]) : (arr_25 [i_9 + 1]));
                }
            }
        }
    }
    #pragma endscop
}
