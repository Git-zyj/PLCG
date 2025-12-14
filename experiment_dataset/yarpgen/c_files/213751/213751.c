/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [1] = (arr_1 [i_0]);
        var_13 = (min((((1734661776 && var_2) ? 1 : -1)), ((1 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = (~(max((((arr_1 [i_0]) + (arr_1 [i_0]))), (((2560305520 && (arr_1 [i_0])))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_10 [i_4 - 1] [i_1]);
                            var_14 = (max(105, (min(1, (18446744073709551612 > -106)))));
                            var_15 = (((max(var_3, (((!(arr_12 [i_0] [14] [i_1] [2] [i_0])))))) + (((max((arr_6 [i_0] [i_0] [i_0]), 0)) + (!10)))));
                        }
                    }
                }
            }
            arr_17 [i_0] [i_1] [i_1] = (((~1) + ((max(var_12, (arr_4 [18] [i_1]))))));
        }
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
            {
                var_16 = (max((((arr_10 [i_0] [i_5]) ? (arr_10 [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_5 + 2]))), (arr_7 [i_6] [i_5 + 2] [i_5 - 1] [i_6])));
                var_17 &= (min(1, ((!(arr_4 [i_5 + 2] [i_5 - 1])))));
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
            {
                var_18 += ((((max((arr_19 [12] [12] [i_7]), var_7)) > (~var_3))));
                var_19 ^= (arr_23 [i_7] [i_0] [i_0] [i_0]);
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_28 [i_0] [i_5] [i_0] [i_0] = (max((~1), var_3));
                var_20 ^= (((arr_8 [i_8]) - (arr_26 [i_5] [i_8])));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    arr_33 [i_0] [i_0] [i_5] [9] [i_8] [9] = 1;
                    var_21 -= ((((arr_10 [i_0] [i_5]) ? var_8 : (arr_13 [i_9]))) + (arr_21 [i_8]));
                }
                var_22 = (arr_29 [i_0] [i_0] [i_0] [i_8]);
            }
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                var_23 += var_5;
                arr_36 [i_10] [i_5 + 2] [i_10] [i_10] = (arr_10 [i_0] [i_0]);
            }
            var_24 -= (max((max((arr_15 [i_0]), var_2)), 26));
        }
    }
    var_25 = (1 && 1);
    #pragma endscop
}
