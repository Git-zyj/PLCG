/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((295969265 ? 2 : -6));
                    var_16 &= (-127 - 1);
                    arr_8 [i_0] [i_1] [i_0] = 15829;
                }
            }
        }
        arr_9 [i_0] = (arr_5 [i_0] [i_0] [i_0]);
        arr_10 [i_0] = (-9 && 295969284);
        arr_11 [i_0] = 16260216283594503756;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_17 = ((((min((((arr_3 [16]) ? 0 : (arr_4 [8]))), ((min((arr_6 [14] [i_3] [i_3]), (arr_3 [8]))))))) ? (min(((var_4 ? 16260216283594503753 : (arr_1 [i_3]))), (arr_4 [12]))) : 16260216283594503745));
        var_18 = (arr_5 [0] [i_3] [0]);
        var_19 = (((((min(692571541, (arr_12 [i_3] [i_3])))) == (arr_5 [6] [i_3] [i_3]))));
        arr_14 [i_3] = (min(18446744073709551594, ((min(31, var_12)))));
    }
    var_20 = (min(((-5 ? -28862 : 75)), var_11));
    var_21 |= (min(((min(12267, 79))), 5787933143404157125));

    /* vectorizable */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_19 [i_4] = 298590320016378226;
        var_22 |= (2 ? -7 : 255);
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_27 [i_4] [i_5] [i_5] [i_6] [i_7] [i_7] = 242;
                        var_23 = ((var_12 ? (arr_24 [i_4] [i_4 - 1] [i_5] [i_7] [i_5] [i_7]) : ((var_2 ? 184 : 562949953421311))));
                        var_24 = (max(var_24, ((((-(arr_16 [i_6])))))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        var_25 = (min(var_25, (((var_6 ? (arr_26 [i_8] [i_8] [i_8] [i_8]) : 15820)))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_26 = (arr_18 [i_8]);
                    var_27 = (-54 / var_5);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_28 = ((((((arr_15 [i_8]) ? -21 : (arr_33 [i_8] [i_10] [i_12])))) ? (arr_28 [i_9 - 3] [i_10]) : (!-5787933143404157115)));
                                arr_39 [i_8] = (arr_21 [i_8 - 1]);
                                var_29 |= (((arr_29 [10]) && (arr_18 [i_9])));
                                arr_40 [i_8] [i_8] = (arr_22 [i_8] [i_8] [i_8 + 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_30 &= (arr_24 [i_14] [1] [i_14] [i_13 - 1] [1] [i_8 - 1]);
                                arr_45 [i_13] [i_8] = (((295969265 ? (arr_43 [i_8] [i_8] [i_8] [i_8] [i_8]) : 43)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
