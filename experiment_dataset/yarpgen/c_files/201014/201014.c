/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((-(max(0, var_10)))))));
        var_21 = ((~((var_14 ? ((((var_8 + 2147483647) >> 1))) : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_22 = ((((arr_3 [i_1]) ? var_18 : 1)));
        var_23 -= (((arr_4 [i_1]) ? (arr_2 [i_1] [i_1]) : 1));
        var_24 = var_15;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = (~-6722527695751556375);
        var_25 = (((((var_10 ? (~var_18) : (arr_6 [i_2])))) ^ (min((arr_2 [i_2] [i_2]), ((var_9 ? (arr_5 [i_2]) : (arr_1 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_26 = ((-((var_6 ? ((((arr_13 [i_2] [i_2] [i_4]) == (arr_16 [i_2] [i_3] [i_4] [i_5] [i_6] [i_4])))) : (arr_16 [i_6 - 1] [i_3] [i_4] [i_5] [i_4] [i_4])))));
                                var_27 = ((+(((3323469303 && var_2) + (((arr_0 [i_2]) * 15))))));
                            }
                        }
                    }
                    var_28 = (((arr_15 [i_2] [i_2] [i_3] [i_2]) ? (max((34 - var_11), -6722527695751556356)) : (~var_8)));
                    var_29 |= (((arr_18 [i_2] [i_3] [i_4] [i_2] [i_4] [i_3]) ? ((((arr_18 [i_2] [i_3] [i_3] [i_3] [i_3] [i_4]) ? 1 : 204))) : var_13));
                }
            }
        }
        var_30 = ((1 - ((var_0 - (arr_9 [i_2])))));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_31 = ((max(var_15, var_17)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_32 = ((min(-3495694264040405587, 204)));
                                arr_31 [i_11] = (min((min(var_1, (arr_30 [i_7] [i_8] [i_9] [i_10] [i_11] [i_7] [i_8 + 3]))), ((((arr_29 [i_8 + 2] [i_8 + 3]) < 1)))));
                                var_33 = ((~((var_10 ? var_13 : 216))));
                            }
                        }
                    }
                    var_34 = (((min((arr_19 [i_8 - 1] [i_8 + 2]), (arr_19 [i_8 - 1] [i_8 + 2]))) ? 14590640809713225496 : ((((arr_25 [i_7] [i_8] [i_7] [i_7]) * var_10)))));
                }
            }
        }
    }
    #pragma endscop
}
