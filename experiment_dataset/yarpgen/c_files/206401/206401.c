/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 = ((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]));
        var_16 += ((((var_5 < (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_17 = 255;
        var_18 = (((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))) ? (max(255, (arr_3 [i_1] [i_1]))) : (arr_3 [i_1] [i_1]));
        var_19 *= (max(255, var_2));
        var_20 = (min(var_20, 9223372036854775807));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_2] [i_3] [5] [i_2] = (max((arr_8 [i_2]), (arr_7 [i_1] [i_2] [i_3 - 2])));
                        var_21 = (!8);
                        arr_15 [i_2] [i_2] [i_2] [i_2] = (min(((min(-8, (arr_10 [i_1] [i_2] [i_3 - 1] [i_2])))), (max((arr_12 [i_2]), (((arr_4 [14]) | (arr_8 [i_2])))))));
                        var_22 = (!-8);
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_23 = (arr_17 [i_3] [i_2]);
                        var_24 -= (arr_2 [i_5]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_25 = (!255);
                            arr_25 [i_2] [i_2] [i_2] [i_2] = var_7;
                        }
                        var_26 = (((var_14 == var_11) ? (((arr_11 [i_6] [i_2] [i_2] [i_1]) / (arr_7 [i_6] [i_6] [i_6]))) : var_11));
                    }
                    var_27 = (min(var_27, 10198824886718319432));
                    arr_26 [i_3 - 1] [i_1] [i_1] [i_1] &= (!(arr_3 [i_3 - 1] [i_2]));
                    var_28 = (min((max((arr_10 [i_1] [i_1] [i_2] [i_2]), (max((arr_10 [i_2] [i_1] [i_1] [i_2]), (arr_10 [i_3] [5] [5] [i_2]))))), ((((!var_3) & var_3)))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_29 = (((min((!var_10), ((var_9 << (((arr_6 [i_8] [i_8]) + 5777415233413290105)))))) < (((~((7 ? (arr_27 [i_8] [i_8]) : var_12)))))));
        var_30 = 7;
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            {
                var_31 = (min(var_31, (max(((((min(1, 8))) ? ((min(var_13, (arr_35 [i_9])))) : ((max(-8, var_12))))), (arr_35 [i_9])))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_32 = ((1 ? (max(10428806370549783958, 1)) : ((max((arr_43 [i_9] [i_9] [i_10 - 2] [i_12 - 1]), (arr_40 [i_12 - 1] [i_10 - 2] [i_9]))))));
                            arr_44 [i_9] [10] [i_11] [i_12 - 1] [i_12] = (arr_35 [i_10]);
                            var_33 -= (arr_40 [i_9] [i_9] [i_12]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
