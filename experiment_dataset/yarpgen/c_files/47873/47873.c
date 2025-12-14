/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (((arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 2]) ? (arr_8 [i_3 - 2] [2] [6] [i_3] [i_3 + 1] [i_3 - 1]) : (arr_8 [i_3 + 1] [3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2])));
                                var_21 = (((7 < (min((arr_0 [i_1]), (arr_1 [i_3]))))));
                                var_22 = (max((!-29), (((((var_4 ? 3082711095 : 6))) ? (!var_1) : (arr_0 [i_2])))));
                                var_23 = ((-((-13 ? 9 : 13))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_1] [i_2] [i_1] [i_1] = arr_17 [i_0] [i_5] [i_2] [9] [2] [i_2];
                                var_24 *= (min(-26, -var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_3;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_26 += ((((max((arr_8 [i_7 + 3] [i_7] [i_7] [i_7 + 2] [14] [i_10 - 1]), var_14))) ? -var_4 : (((!(arr_10 [i_7] [i_8] [i_10] [i_8] [i_10] [i_10 - 4]))))));
                                var_27 = (-27 == -1);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            {
                                arr_38 [7] [i_8] [i_12] [i_13] [i_13] [0] = (max((arr_21 [i_7 - 1]), ((((((arr_8 [i_7 - 1] [i_7] [i_7] [12] [i_7] [i_7]) ? (arr_17 [i_7 - 1] [i_12] [i_12] [i_7 - 1] [i_14] [i_13]) : var_18))) ? (max(var_6, var_15)) : (var_6 | var_5)))));
                                var_28 = (min(var_28, (((~((~(((var_19 == (arr_0 [8])))))))))));
                                var_29 = (max((max(var_6, (!-37))), var_0));
                                var_30 = ((65 ^ (arr_25 [i_14] [i_13] [i_8] [i_7 + 2])));
                                var_31 -= max((((-86 ? var_9 : 38))), (arr_23 [i_7] [i_8]));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 11;i_16 += 1)
                    {
                        {
                            var_32 += var_3;
                            var_33 = ((-var_12 ? (((arr_15 [i_7] [i_8]) ? (arr_39 [3] [6] [i_15] [i_16 - 1]) : (arr_37 [i_7] [i_8] [i_15] [i_15] [i_16]))) : (((max(var_1, (arr_4 [i_15] [i_15])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
