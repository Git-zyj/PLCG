/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_1;
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 1] [i_3] [i_0] = (min(var_5, ((max(var_12, (!7978356532239237424))))));
                                arr_14 [0] [i_4] [22] [0] [i_0] [i_4] [i_0] = ((-(max((arr_4 [i_0 + 2] [i_1]), (((-(arr_6 [i_0] [i_1] [12] [i_3]))))))));
                                arr_15 [i_3] [i_3] [i_0] [4] [4] = (var_3 ^ -1);
                                arr_16 [i_1] |= (min((min((arr_8 [i_0 + 2] [i_1] [i_1 - 2] [i_1]), (arr_1 [i_0 - 1]))), ((((~var_0) % (arr_5 [i_2] [i_2] [i_0]))))));
                                arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = (((min(288230376151711743, -103))) ? (((-((var_10 * (arr_11 [i_0 + 2] [22] [22])))))) : (min((arr_0 [i_1]), (var_11 ^ var_0))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_21 [i_1] [i_1] [6] [i_1] |= ((~(18158513697557839873 == 18158513697557839871)));
                        arr_22 [i_0] [i_0] = (arr_2 [18]);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_28 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_0] = 9974;
                                arr_29 [i_2] [i_2] [i_2] [i_2] = var_12;
                                arr_30 [6] [i_7] [i_2] = ((-(~var_4)));
                                arr_31 [i_0] [i_1 - 1] [i_2] [8] = ((18158513697557839897 * (max(18158513697557839867, 3))));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_34 [i_0] [i_0] [i_0] [i_0] = (((((min((min(-8360091736104285412, var_10)), ((min(9975, var_5))))) + 9223372036854775807)) >> ((((min(65533, -14638))) - 50851))));
                    arr_35 [i_8] [i_1] [i_0] = (~var_2);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_38 [i_1 + 1] [i_0] [i_0] [i_0] = var_12;
                    arr_39 [i_0] [13] [i_0] = var_8;
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_44 [i_11] [22] = ((var_2 || (((465810928 ? var_11 : (arr_19 [i_10]))))));
                                arr_45 [i_0] [i_1] [i_9] [i_10] [i_10] [i_0] = (((arr_2 [i_10 - 1]) >= var_0));
                                arr_46 [i_10 - 3] [i_1] [i_9] [i_1] [i_0] &= -19;
                                arr_47 [i_0] [i_0] = -7825578798549452045;
                                arr_48 [i_0] [i_0] [i_10] [i_9] [i_1 - 2] [i_0] [i_0] = (((arr_6 [i_11] [i_10 - 2] [i_0 - 1] [i_0 - 1]) | (arr_9 [i_0 - 1] [i_0 - 1])));
                            }
                        }
                    }
                    arr_49 [i_1] = (arr_11 [i_0] [i_1] [5]);
                }
                arr_50 [i_1] = -3823;
            }
        }
    }
    var_18 = (((min(((-2914540464045996418 ? var_7 : var_6)), var_10)) ^ var_15));
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    arr_59 [i_13] = var_5;
                    arr_60 [i_12] [i_12] [i_12] = ((91536348 ? var_2 : (min(var_11, var_3))));
                }
            }
        }
    }
    #pragma endscop
}
