/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_11 = arr_0 [i_1] [i_1];
                                var_12 = ((~((max(3928, -1)))));
                                var_13 = ((min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))));
                            }
                        }
                    }
                    var_14 = ((((((~148) ? (arr_8 [i_2] [i_1] [i_1] [i_0]) : var_0))) ? (arr_6 [i_2]) : (((var_2 ? var_7 : (arr_10 [0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_1] [6] [i_5] [i_5] [i_6 + 1] = 17543503311458104215;
                                var_15 = ((((max(((max((arr_0 [i_0] [i_1]), var_2))), (arr_21 [9] [0] [i_2 + 2] [i_6 - 1])))) ? 2131782389 : ((((~2888) & (arr_20 [i_6] [i_5] [i_2] [i_2] [i_1] [i_0]))))));
                            }
                        }
                    }
                    arr_23 [i_0] = (~var_1);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                var_16 = ((~(~var_4)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_17 &= (min((~1), ((((-12 ? var_0 : 1))))));

                            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                            {
                                var_18 &= ((((((!var_2) ? var_7 : ((min(var_9, var_1)))))) / var_5));
                                var_19 = (arr_27 [i_7 - 1] [i_8] [i_7]);
                            }
                            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                            {
                                arr_39 [1] [i_9] [i_9] [i_8] [i_9] = (min((((max(-450660374, -46)) & ((0 ? -2 : (arr_35 [i_7] [i_7 + 2] [i_7] [i_9] [i_7] [i_12]))))), ((~((16 ? var_2 : 131))))));
                                var_20 = 1;
                                arr_40 [i_9] [i_8] [i_9] [i_10] [i_12] = (~var_10);
                            }
                            /* vectorizable */
                            for (int i_13 = 0; i_13 < 23;i_13 += 1)
                            {
                                var_21 = ((((3 ? 4294967295 : 976451210))) ? (arr_24 [i_8] [i_8]) : ((var_10 ? (arr_38 [i_7] [i_9] [i_9] [i_10]) : 2532435568)));
                                arr_44 [i_13] [i_9] [18] [i_9] [i_7] = var_0;
                                var_22 = (((arr_33 [i_7] [i_8] [i_9]) ? var_9 : (arr_33 [i_7] [i_7] [i_13])));
                            }
                            /* vectorizable */
                            for (int i_14 = 0; i_14 < 23;i_14 += 1)
                            {
                                arr_47 [18] [18] [i_8] [i_10] [i_10] [i_10] |= ((arr_28 [i_7 + 1] [i_7 + 2]) ? (arr_37 [i_7 + 2]) : ((var_0 ? 0 : var_9)));
                                arr_48 [i_9] [i_8] [i_8] [i_8] [i_8] = ((-19960 ? 31 : 28032));
                                var_23 = (((!627124388601978688) ? ((var_3 ? -4241612489281168923 : (arr_26 [i_7]))) : 3272675393));
                                var_24 = ((~(arr_29 [i_9] [i_10] [i_14])));
                                var_25 = (arr_41 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1]);
                            }
                        }
                    }
                }
                var_26 = (((max(12102505766979246377, 24))) ? -1 : (((arr_26 [i_7 + 1]) ? (arr_26 [i_7 + 1]) : (arr_26 [i_7 + 1]))));
            }
        }
    }
    var_27 = var_3;
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_28 = (arr_58 [i_18 + 3] [i_18 + 3] [i_18 + 2] [i_18]);
                            var_29 = (((+-4011216615) == (min(-var_3, -var_5))));
                        }
                    }
                }
                var_30 = (((!-14174) ? (((-(((arr_54 [i_15]) ? 8043 : 118))))) : 2921454721));
                var_31 = (((max(var_0, var_10))) ? ((((arr_45 [i_16] [1] [i_16] [13] [i_15] [i_15]) ? ((873536481924870861 ? var_9 : var_10)) : (arr_37 [i_15])))) : (((min(3272675393, -5)) | var_9)));
            }
        }
    }
    #pragma endscop
}
