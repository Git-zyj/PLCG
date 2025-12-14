/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((~(~var_19))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max((~39950), var_5)))));
                                arr_12 [i_0] [i_3] [i_2] [i_3] [i_4] = (((~var_17) < (((arr_4 [i_0] [i_1]) ? (min((arr_2 [0]), -4940789085303940737)) : var_2))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        var_22 = (max(var_22, (arr_10 [i_5 - 2] [i_5] [7] [i_1 - 2] [3])));
                        arr_15 [i_0] [i_2] [i_2] [i_5] = (~25586);
                        var_23 += ((~(((arr_10 [i_5] [i_5 - 1] [i_2] [i_1] [i_0]) & (arr_2 [i_5 - 3])))));
                        var_24 = (min(var_24, ((((arr_2 [i_5 - 1]) / (arr_1 [i_1 - 1] [i_5 + 1]))))));
                        var_25 = (max(var_25, ((((arr_7 [i_1 + 1] [i_1 - 2]) & -4940789085303940737)))));
                    }
                }
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    var_26 = ((-((((arr_0 [i_6 - 1]) && (var_14 % -24))))));
                    var_27 = (max(var_27, ((min((((var_10 & 7) & (arr_17 [i_1 - 2] [i_1 - 2] [i_6] [3]))), (arr_13 [i_6 + 1] [i_1] [i_6] [i_1] [i_1 - 2] [i_6]))))));
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    var_28 = (arr_3 [i_1]);

                    for (int i_8 = 4; i_8 < 7;i_8 += 1)
                    {
                        var_29 = (max(var_29, 8112223015488215215));
                        var_30 = (min(var_30, var_11));
                        arr_24 [i_8 - 3] [i_8] [i_8] [i_0] = -257651367410496991;
                        var_31 = (((~var_17) ? var_13 : (arr_21 [3] [i_1 - 1] [i_7] [i_8 - 2])));
                    }
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    arr_27 [i_9] [i_1] [i_1 - 1] [i_0] &= 257651367410496991;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_32 [i_11] [i_1 - 2] [i_1 - 1] [i_10] [6] = 257651367410496980;
                                var_32 = 37097;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            {
                                arr_40 [3] = (max(-4216834760861497485, ((-var_1 ? var_4 : (min(50331648, (arr_33 [i_0] [i_1 - 2] [i_14])))))));
                                var_33 = (max(var_33, (arr_6 [i_13 - 1] [i_12] [i_1])));
                            }
                        }
                    }
                }
                arr_41 [i_0] = 25586;
                var_34 = (max(var_34, 6686863144846885610));
            }
        }
    }
    var_35 = (max(var_35, (((8112223015488215215 ? ((min(var_6, (!var_16)))) : (~255))))));
    #pragma endscop
}
