/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] = (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_19 *= (58284 - 63046);
        var_20 = ((!(var_18 - 250)));
    }

    for (int i_1 = 4; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_21 = (((arr_6 [i_1]) ? (min((var_0 & var_4), ((var_13 ? var_16 : 244)))) : (((arr_7 [i_1 - 2] [i_1 - 3]) ? (((!(arr_7 [10] [10])))) : (arr_8 [i_1])))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_5] [i_2] [i_3] [i_4] [i_4] [i_5] |= (((arr_12 [i_3 - 3] [i_3 - 3] [14] [15]) & var_9));
                            var_22 = (max(var_22, -9));
                        }
                    }
                }
            }
            var_23 *= (var_14 | var_10);
            arr_19 [i_1] [i_1] = (((arr_8 [i_1]) * (~var_14)));
            var_24 = (!var_2);
        }
        for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_25 += (((((arr_23 [i_7] [i_6 + 1] [20]) / (arr_9 [i_7] [i_7]))) & ((-(arr_9 [i_7] [i_7])))));
                var_26 += ((((((arr_21 [i_7] [i_6 - 1] [i_7]) - (arr_21 [i_7] [i_6 - 2] [i_7])))) && -var_3));
                var_27 = var_9;
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_34 [i_1] [i_1] [i_1] = (min((~var_18), ((max(var_15, (max((arr_8 [i_1]), var_17)))))));
                            var_28 = ((((((arr_8 [i_1 + 2]) > -var_13))) >= var_11));
                            var_29 = (((((arr_12 [10] [i_6] [i_1 - 1] [i_6 - 2]) > var_3)) ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [12]) : ((min((arr_14 [i_1] [i_1] [i_6 + 1]), (arr_14 [i_1] [i_1] [i_6 - 1]))))));
                            arr_35 [i_1] [i_1] [i_8] [i_8] [i_8] = var_9;
                        }
                    }
                }
                var_30 = var_6;
                var_31 = ((~(var_15 % var_6)));
            }
            arr_36 [i_1] = var_1;
            arr_37 [i_1] [i_1] = (arr_11 [i_1] [i_1] [i_6]);
        }
        var_32 = (((((var_16 ? var_3 : 33171))) ? var_11 : ((var_5 ? 37756 : var_17))));
    }
    for (int i_11 = 4; i_11 < 20;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] = (((-((-(arr_28 [i_11]))))));

        /* vectorizable */
        for (int i_12 = 2; i_12 < 19;i_12 += 1)
        {
            var_33 = (max(var_33, (!var_7)));
            var_34 += ((((58292 >> (14443 - 14431))) | (!var_15)));
        }
        arr_44 [i_11] [i_11] = var_6;
        var_35 += max(var_2, (!var_6));
    }
    var_36 = var_18;
    #pragma endscop
}
