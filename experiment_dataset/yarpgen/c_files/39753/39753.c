/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 && -6962398547651731968) | (((((min(-19634, var_6))) ? var_1 : (((6962398547651731966 ? var_4 : 91)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_12 = (((arr_2 [i_0] [i_0]) - (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_13 = (min((min((arr_0 [i_1]), var_10)), ((var_2 / ((0 ? var_7 : (arr_1 [0] [i_1])))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_14 = (arr_7 [6] [i_1] [i_2]);
            var_15 = var_7;
            arr_10 [i_1] [i_1] = (arr_1 [i_1] [i_1]);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_16 = ((+(((((arr_15 [i_1] [i_1] [i_1] [i_1]) < 5222523636716947840)) ? (max(102, 16008937264260223191)) : var_8))));
                arr_16 [i_1] [i_1] [i_3] [i_4] = (((((max((arr_11 [i_1] [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_1]))))) | 9223372036854775807));
                arr_17 [i_1] [i_3] [i_4] = (((91 && 109) ? 47287 : (((6962398547651731967 && ((var_7 || (arr_6 [i_1] [i_3]))))))));
                arr_18 [i_1] [i_3] = (min(((max(241, (max(169, (arr_11 [i_4] [i_3] [i_1])))))), (arr_7 [i_4] [i_3] [i_1])));
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_17 ^= max((min((arr_2 [i_1] [i_3]), (arr_19 [i_1] [i_3] [i_3]))), ((((arr_2 [i_1] [i_5]) ? (arr_2 [i_3] [i_5]) : var_6))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_28 [i_3] [10] = 83;
                            var_18 = (max((((((1562283960 ? (arr_14 [i_1] [i_1] [11] [i_1]) : 1382170796398289377))) ? (arr_27 [7] [i_6] [i_5] [i_3] [i_1]) : (((arr_0 [i_3]) ^ var_2)))), -2114953398));
                        }
                    }
                }
                var_19 = (arr_11 [i_1] [i_3] [i_5]);
                var_20 = (((max((arr_1 [i_1] [i_3]), (((arr_0 [i_1]) ? var_1 : 41785)))) + (((((var_0 + (arr_24 [i_1] [i_3] [i_5])))) - 243))));
            }
            var_21 = -104;
            arr_29 [i_1] [i_1] [i_3] = (((arr_20 [i_3] [i_1] [i_1] [i_1]) ? (arr_14 [i_3] [i_3] [12] [i_3]) : ((max(((((arr_0 [i_1]) >> (((arr_2 [i_1] [i_1]) - 160))))), (arr_1 [i_1] [i_3]))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_22 = (arr_25 [i_8] [i_8] [i_8] [i_8] [i_8]);
        arr_33 [i_8] [13] = ((var_3 / (arr_1 [i_8] [i_8])));
        var_23 = (((((var_1 ? var_5 : var_2))) ? (((((arr_30 [i_8]) <= var_5)))) : var_9));
        var_24 = (arr_15 [i_8] [i_8] [i_8] [i_8]);
    }
    var_25 = var_9;
    #pragma endscop
}
