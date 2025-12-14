/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = var_0;
                var_14 -= var_2;
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_15 = (((var_1 << (var_3 - 1))));
            var_16 += (((!(arr_10 [i_2] [15] [i_3]))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                var_17 = (((arr_6 [i_2 - 1]) ? var_5 : var_5));

                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    var_18 = (min(var_18, (arr_15 [i_5 + 2])));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_19 = (max(var_19, ((var_4 ? ((var_6 ? var_9 : var_2)) : ((241 + (arr_13 [i_2] [i_2 - 1] [1])))))));
                        var_20 = (min(var_20, (((var_1 >> (arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                        arr_23 [20] [1] [i_6] [i_4] [i_5 + 2] [i_6] = var_5;
                        var_21 = (98 == 2957828672);
                        var_22 |= ((106 <= (((var_11 < (arr_12 [13]))))));
                    }
                    var_23 = (((arr_10 [i_2] [i_4] [13]) ? ((var_2 ? var_8 : (arr_8 [i_5] [i_5] [i_5 + 1]))) : var_5));
                    var_24 = var_9;
                }
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_25 = (-1337138618 | var_6);
                var_26 = ((var_5 == ((var_12 ? (arr_19 [i_3] [19] [12] [9] [i_3]) : var_2))));
                var_27 = ((var_8 >= (arr_21 [i_2 - 1] [11] [19] [4] [i_7])));
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_28 += (((((((var_1 < var_5) ? ((var_12 ? var_9 : (arr_25 [20] [i_2] [8] [i_9]))) : (max((arr_21 [1] [1] [6] [i_9] [i_9]), var_9)))) + 9223372036854775807)) << (((((arr_17 [i_2 - 1] [i_8] [i_9]) & (arr_17 [i_2 - 1] [i_2 - 1] [i_2]))) - 209))));
                    var_29 = (((((((var_7 << (var_2 - 56490)))) ? (max(var_8, 0)) : var_0))) ? (((arr_11 [i_2 - 1] [20] [i_2]) ? (arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_11 [i_2 - 1] [i_2 - 1] [i_2]))) : (arr_24 [i_8] [i_8] [i_8 + 1]));
                }
            }
        }
        var_30 = var_3;
        var_31 = (max(var_10, (arr_27 [i_2 - 1] [i_2] [i_2 - 1])));
        var_32 = (min(var_32, 0));
    }
    #pragma endscop
}
