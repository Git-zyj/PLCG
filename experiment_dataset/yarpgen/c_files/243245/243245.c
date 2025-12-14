/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~((var_1 ? var_18 : 108))))) ? (~-98) : ((var_5 ? (!0) : var_4))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (max((max((max(177, -82)), (31245 != -1813811327))), (((((min((arr_2 [i_0]), 30963))) || ((max((arr_2 [0]), -51))))))));
        var_21 = 2147483647;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_7 [0] |= ((var_0 ^ (arr_3 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    {
                        var_22 = (max(var_22, 21));
                        arr_15 [i_4] [i_4] [i_1] = (((((arr_10 [i_1] [i_1]) ? var_2 : var_5)) >> (((arr_13 [i_1] [i_2] [i_1]) + 4716872871828433831))));
                        var_23 *= ((!(-9223372036854775807 - 1)));
                        var_24 = var_18;

                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_25 = 17473993655486013032;
                            var_26 = arr_13 [i_3 - 1] [i_1] [i_1];
                            arr_18 [i_1] [i_1] [i_3] [i_4 - 2] [i_5] = (((arr_14 [i_1] [i_4 + 2] [i_3 + 1]) ? (((arr_17 [i_2]) ? var_12 : 34290)) : (arr_16 [i_2] [i_3 - 1] [18] [i_3 - 1] [i_4] [i_4 + 2] [i_4])));
                            var_27 = (((((arr_13 [i_1] [15] [i_3 - 1]) + 9223372036854775807)) << (((arr_16 [i_1] [i_3 - 1] [i_3 - 1] [i_4] [i_4 + 2] [i_4 - 1] [i_5]) - 6517))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_28 -= (((((-(arr_17 [i_3 - 1])))) ? (arr_8 [i_1]) : (arr_3 [i_3])));
                            var_29 = -78;
                            var_30 = (min(var_30, (((~((var_10 ? (arr_13 [14] [14] [i_3 - 1]) : 93)))))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_31 |= (arr_13 [i_1] [i_2] [i_2]);
                            arr_26 [i_1] [i_4 - 1] [i_2] [i_7] [i_2] |= (((1 / -98) ? ((var_8 ? 1 : 151)) : (arr_16 [21] [i_1] [i_3 + 2] [i_4 + 1] [i_7] [1] [21])));
                            arr_27 [i_1] [i_2] [i_3 - 1] [i_3 - 1] [i_7] = (((arr_8 [i_3 - 1]) ? ((24472 ? 1 : 15830857463506913795)) : var_13));
                            var_32 = (((arr_17 [i_3 - 1]) ^ (arr_17 [i_3 - 1])));
                        }
                    }
                }
            }
        }
        var_33 = (max(var_33, var_14));
        var_34 = (max(var_34, (arr_23 [i_1] [i_1] [i_1] [i_1] [i_1])));
        arr_28 [i_1] [i_1] = arr_5 [i_1] [i_1];
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        var_35 = ((((max(((1813811336 ? (arr_16 [i_8] [4] [i_8] [7] [i_8] [i_8] [i_8]) : (arr_10 [6] [i_8]))), 1317856749))) ? 32765 : 73));
        var_36 = (min(var_36, (min(104, ((min(80, 1)))))));
        var_37 = (max(((max((arr_9 [i_8]), -var_3))), -1));
        var_38 = (max(var_38, (arr_4 [i_8])));
    }
    var_39 = (!-var_7);
    #pragma endscop
}
