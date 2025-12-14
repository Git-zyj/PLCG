/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (((((arr_2 [i_0] [i_1]) ? var_17 : var_9))) | (arr_0 [i_0]));
                    arr_7 [i_0] = 0;
                }
            }
        }
        arr_8 [i_0] [i_0] = var_7;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, (((var_13 - (arr_13 [i_3] [i_3] [i_3] [i_3]))))));
                            arr_20 [i_6] [i_5] [i_4] [i_3] [i_0] = (((arr_17 [i_5]) ? var_6 : (((arr_9 [i_3] [i_3]) ? var_3 : 0))));
                            var_22 = (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_4])));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_23 = ((var_2 ? (arr_4 [i_4] [i_5] [i_7]) : var_4));
                            var_24 *= (((arr_6 [i_5]) | (arr_6 [i_5])));
                        }
                        var_25 = ((!(arr_11 [i_3] [i_0])));
                        arr_23 [i_5] [i_5] [i_4] [i_3] [i_0] = (((var_10 ? 197 : (arr_15 [i_0] [i_3] [i_4] [i_4] [i_4] [i_0]))));
                        var_26 = var_16;
                        arr_24 [i_5] [i_4] [i_4] [i_3] [i_3] [i_0] = (((arr_4 [i_0] [i_0] [i_0]) < ((var_16 ? var_11 : (arr_21 [i_0] [i_3] [i_3] [i_5] [i_0])))));
                    }
                }
            }
        }
        var_27 = var_8;
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_34 [12] [i_9] [i_10] [i_11] = (((((((arr_18 [i_8] [i_9]) + 2147483647)) << (((var_13 + 6581) - 5)))) - (arr_9 [i_11] [i_8])));
                        var_28 &= (((((var_7 + var_4) || (-321776979 || 321776979))) ? ((1 ? (-7 * 524287) : (arr_1 [i_9]))) : var_7));
                        var_29 = ((((((((var_2 >= (arr_28 [i_8] [i_9] [1])))) ^ var_0))) > (min(1, (min(var_16, var_7))))));
                        arr_35 [i_11] [i_10] [i_9] [i_8] [i_8] = var_2;
                        var_30 = (min(var_30, (((-(((arr_14 [i_11] [i_10] [i_9] [i_9] [i_9] [i_8]) ? (arr_14 [i_8] [i_8] [i_10] [i_8] [i_10] [i_9]) : (arr_14 [i_8] [i_9] [i_10] [i_11] [i_11] [i_11]))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 16;i_15 += 1)
                        {
                            {
                                var_31 ^= (-(min((arr_2 [i_8] [i_8]), var_13)));
                                arr_45 [i_8] [i_12] [i_13] [i_14] [i_15] = var_12;
                            }
                        }
                    }
                    arr_46 [i_13] [i_12] [i_8] = var_5;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                var_32 = min(11697, (((!((min((arr_52 [i_8] [i_12] [i_16] [i_16] [i_17]), (arr_50 [i_8] [i_12] [i_13] [i_8] [i_17] [i_17]))))))));
                                var_33 = (max(var_33, (!var_0)));
                                var_34 = (min((((~(arr_29 [i_8] [i_8] [i_8] [i_17])))), (((var_4 ? var_11 : (arr_49 [i_17] [i_16] [i_16] [i_8]))))));
                                var_35 += (min((min(2650910695441581197, 4294967295)), ((max((arr_37 [i_8] [i_8] [i_8]), (min((arr_3 [i_17]), (arr_29 [i_8] [i_8] [i_8] [i_8]))))))));
                            }
                        }
                    }
                    var_36 = (((arr_21 [i_13] [i_13] [i_12] [i_8] [i_8]) ? 1 : -476883966237142339));
                }
            }
        }
    }
    #pragma endscop
}
