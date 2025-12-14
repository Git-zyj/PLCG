/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_10 = 65535;
                                arr_13 [i_4] [i_3] [i_0] = (((arr_10 [i_0 + 3] [i_0 - 2] [i_3] [i_0 - 2] [i_3] [i_3]) / var_0));
                                var_11 = (max(var_11, ((min(((((arr_9 [i_2]) ? (arr_9 [i_0 - 1]) : 156))), (((var_6 ? var_8 : (arr_0 [i_0 + 1] [i_0 + 1])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] = ((-(((!(((-(arr_4 [i_2])))))))));
                                arr_20 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_6 - 3] [i_2] [i_6 + 1] = ((140 | ((((var_1 ? var_5 : (arr_0 [i_1] [i_5]))) & var_4))));
                                arr_21 [i_0 - 2] [i_2] [i_0 - 2] = (116 / var_7);
                                var_12 = (((~-156) ? -5424 : (((arr_8 [i_0 - 1] [i_1] [i_1] [i_1] [i_6 - 2]) ? (arr_0 [i_6 + 2] [i_2]) : (~var_7)))));
                            }
                        }
                    }
                    arr_22 [i_2] [i_1] [i_1] [i_0] = (max(((((arr_11 [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 3] [i_0]) ? (arr_11 [i_0 - 3] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 3] [i_0]) : (arr_11 [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0] [i_0 + 3] [i_0])))), (min(-5425, 4215423261805503058))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_13 = (max((arr_11 [i_8 + 1] [i_8 - 2] [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_0 - 1] [i_0 - 1]), var_4));
                                arr_31 [i_8] [i_0] [i_7] [i_2] [i_1] [i_0] = (max(var_1, ((((arr_15 [i_2] [i_2] [i_2] [i_0 + 2]) ? (arr_27 [i_7] [i_1] [i_2] [i_8] [i_8] [i_2]) : (arr_30 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 - 1]))))));
                                arr_32 [i_0] [i_1] [i_1] [i_8 + 3] [i_8] [i_8 + 3] = 15;
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            arr_36 [i_0 - 1] [i_9] = ((var_7 ? ((99 << (252 - 245))) : (~4)));
            arr_37 [i_0] [i_0] [i_0 - 3] = (~-1205370876942221153);
        }
        for (int i_10 = 3; i_10 < 21;i_10 += 1)
        {
            var_14 &= (max((!var_3), var_6));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_46 [i_0] [i_12] [i_11] [i_12] = 1;
                        arr_47 [i_0] [i_10] [i_10] [i_12] = -5877761487916047427;
                        var_15 ^= (var_2 && 1);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_56 [i_13] [i_10 - 2] [i_15] [i_15] [i_13] = (((var_5 - -var_2) ^ (arr_39 [i_0 - 3])));
                            arr_57 [i_15] [i_10] = ((((var_4 ? (arr_9 [i_13]) : 18446744073709551615)) == (((-(min((arr_10 [i_0 + 2] [i_0] [i_0 + 2] [i_13] [i_14] [i_15]), var_5)))))));
                        }
                    }
                }
            }
            arr_58 [i_0 - 1] = 27;
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    {
                        arr_63 [i_0] [i_0 - 2] [i_0 + 3] [i_0 + 3] = 14403630837502865613;
                        var_16 = (arr_55 [i_0 + 2] [i_10] [i_16]);
                        var_17 = (arr_34 [i_0] [i_17]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 22;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        arr_74 [i_0 - 2] [i_19] [i_19 - 1] [i_0 - 2] |= ((arr_35 [i_0 + 3]) ^ (arr_35 [i_20]));
                        arr_75 [i_20] [i_19 - 2] = (var_4 ? 3738339058178170489 : (((((arr_71 [i_0 + 3]) != 14708405015531381127)))));
                        arr_76 [i_20] = ((-((((min((arr_50 [i_0 - 1] [i_18]), (arr_27 [i_0] [i_0] [i_19] [i_18] [i_18] [i_18])))) ? ((0 ? (arr_43 [i_0] [i_0 - 2] [i_0]) : (arr_26 [i_20] [i_18] [i_19] [i_18] [i_18] [i_0]))) : (((var_5 ? var_1 : var_2)))))));
                    }
                }
            }
        }
        arr_77 [i_0] = ((-((((arr_48 [i_0 + 3] [i_0 - 2] [i_0 - 2] [i_0]) != (arr_1 [i_0 + 3]))))));
    }
    var_18 = var_3;
    #pragma endscop
}
