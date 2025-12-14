/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 = ((var_9 & (((((arr_2 [i_0]) ? 549755813887 : 1)) & (var_7 < var_2)))));
                                var_12 = var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 6;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [7] [i_2] [i_5] [9] [i_0] [7] = ((-(~-1)));
                                arr_22 [i_0] [i_1] [i_2] [i_0] [7] = 340090330;
                            }
                        }
                    }
                    var_13 = ((59 ^ ((max(18, -14)))));
                }
            }
        }
    }
    var_14 = ((var_4 ^ var_3) ? ((((max(159, 58))) - (4 > 165))) : (((!((min(var_2, 2278757139)))))));
    var_15 = 17391920456545887772;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            {
                var_16 = ((((((min(-120, (arr_24 [i_7])))))) | (min(var_9, var_8))));
                arr_29 [i_7] [i_8] = (min((!-2278757119), (min((arr_28 [i_7] [8] [9]), ((var_0 + (arr_27 [i_7] [i_7] [i_7])))))));
                arr_30 [i_7] [6] = (var_2 ? 33 : ((min((!var_2), var_6))));

                for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                {
                    var_17 = (((~var_4) ? (arr_33 [i_7] [17] [i_7]) : (min((var_3 - -1700922748034576978), ((((arr_31 [i_7] [7] [i_7] [i_7]) & var_1)))))));
                    arr_34 [i_7] = (!((((var_10 & (arr_31 [i_7] [i_8] [i_7] [i_7]))))));
                    arr_35 [i_7] [i_9] = var_1;
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    arr_40 [i_7] [i_7] [i_7] = arr_26 [i_7];

                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {

                        for (int i_12 = 3; i_12 < 20;i_12 += 1)
                        {
                            var_18 = (max(var_18, 0));
                            arr_45 [14] [i_8 - 2] [i_7] [i_11] = (-174168048 && var_1);
                            var_19 = var_0;
                        }
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            var_20 = var_8;
                            var_21 = (arr_24 [i_7]);
                            var_22 = var_2;
                            arr_48 [i_7] [i_8] [i_7] [i_7] [i_11] [i_13] = (((-2 ^ 4081138015) * (((((arr_42 [i_7] [i_8] [i_7]) > (arr_38 [i_7] [11] [i_7])))))));
                            arr_49 [i_7] [i_7] [i_7] [i_7] = (((arr_24 [i_7]) ? (var_9 == var_10) : (arr_43 [i_7] [i_8 - 3] [i_10] [i_11] [i_13 - 2] [i_8] [i_11])));
                        }
                        for (int i_14 = 0; i_14 < 0;i_14 += 1)
                        {
                            var_23 = ((~(((arr_26 [i_7]) + (arr_24 [i_7])))));
                            var_24 = var_3;
                            arr_52 [i_11] [i_7] [i_7] [i_11 + 2] [19] = (((-121 && var_9) + -1));
                            arr_53 [i_7] [i_7] [i_10] [i_11 - 1] [i_14] = ((var_3 ? (arr_27 [i_8 - 3] [i_8 - 3] [i_10]) : (arr_46 [i_7])));
                        }
                        var_25 -= ((-(0 + 863342439942235070)));
                        var_26 += (arr_47 [i_11 + 1]);
                        var_27 = (((((81 >> (85 - 67)))) ? (((1126087440 >> (4795317184748293717 - 4795317184748293699)))) : (arr_37 [i_7] [i_7] [i_11 + 1] [16])));
                    }
                    for (int i_15 = 1; i_15 < 20;i_15 += 1)
                    {
                        var_28 = var_1;
                        var_29 = (min(var_29, var_10));
                    }
                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        arr_60 [i_7] [i_7] [6] [17] [6] = (((((-106 ? 14225975387600498291 : 17483241386335172295))) ? var_2 : ((var_1 ? (arr_42 [7] [0] [i_7]) : (arr_55 [i_7])))));
                        var_30 = (max(var_30, (((var_7 || (arr_33 [i_7] [i_7] [12]))))));
                    }
                    var_31 = ((arr_37 [i_7] [i_8 + 1] [i_8] [i_10]) ? var_10 : (arr_37 [i_7] [i_8 + 1] [i_10] [i_10]));
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            arr_68 [i_7] [i_7] [i_17] [i_7] [8] = (-(79 * var_9));
                            arr_69 [i_7] [18] [6] [6] [i_7] = (((((-(2147483647 - 165)))) ? (~1521574967) : (arr_23 [i_7])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
