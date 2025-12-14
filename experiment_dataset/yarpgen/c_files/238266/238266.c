/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_3] [22] |= ((!(arr_7 [i_0] [i_3] [i_3])));
                            arr_16 [i_0] [i_2] [i_2] [i_3] [i_4 - 2] = (!var_1);
                        }
                        for (int i_5 = 4; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_5] |= ((-(max(121, 8636502376722787619))));
                            var_10 = ((var_4 ? (arr_5 [i_2] [i_3]) : (((arr_18 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]) ? (arr_18 [i_5] [i_5 + 1] [i_5 - 4] [i_5 - 1] [i_5]) : (arr_18 [i_3] [i_5 - 4] [i_5 - 3] [i_5 + 1] [i_5])))));
                            arr_20 [i_2] [i_2] [1] [i_5 - 3] [i_5] = ((-(min((arr_17 [i_0] [i_1] [i_2] [i_5 - 1]), var_7))));
                            var_11 = ((-(((!(arr_7 [i_5 + 1] [i_2] [i_5 + 1]))))));
                            var_12 = ((~((~((2746781316204656376 ? (arr_5 [i_2] [i_2]) : var_0))))));
                        }
                        arr_21 [i_2] [i_1] [i_1] [i_2] [18] = (max(-8253123095615798955, (-32767 - 1)));
                    }
                    var_13 = var_8;
                }
            }
        }
    }
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_15 = var_1;
                        var_16 = (min(var_16, ((var_5 ? var_6 : var_2))));
                        var_17 = -8636502376722787636;
                    }

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_18 = (arr_3 [1] [i_7] [i_10 - 1]);
                        var_19 = ((!(((8636502376722787624 ? 1 : -80268373)))));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_41 [i_7] = var_3;
                            var_20 += -10285;
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_21 = var_8;
                            arr_45 [9] [i_7] [i_7] [i_8] [i_12] = -var_6;
                        }
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_22 = (min(var_22, (((var_0 ? var_8 : (arr_9 [i_10] [i_7] [i_8] [13]))))));
                            var_23 -= var_7;
                        }
                        arr_48 [i_6] [i_6] [10] [i_7] = ((!(arr_42 [i_7] [i_10 - 1])));
                        var_24 = ((5642 ? 1 : 130048));
                    }
                    var_25 = 2746781316204656372;
                    var_26 = (((((var_6 ? 8636502376722787624 : var_5))) ? (arr_46 [i_6] [i_7] [i_6] [i_8 - 1]) : (arr_18 [8] [i_8 - 1] [i_7 - 1] [i_6 - 1] [i_6])));
                    var_27 *= ((5620 > (arr_39 [i_8 - 1] [2] [i_8 - 1] [i_7 + 1] [2] [i_6 - 1])));
                }
                /* vectorizable */
                for (int i_14 = 3; i_14 < 10;i_14 += 1)
                {
                    arr_52 [i_7] = (var_9 != var_2);
                    arr_53 [i_7] [i_14] = (arr_17 [i_6] [i_7] [i_6] [i_14 - 2]);
                }
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_28 *= min((max((arr_32 [i_17] [i_16] [i_15] [i_6] [i_6]), ((-(arr_2 [i_6]))))), (!var_9));
                                var_29 = (max(var_29, ((max(1, 121)))));
                            }
                        }
                    }
                    arr_63 [i_7] [10] [i_7 - 1] [7] = ((((~(((-32767 - 1) ? var_1 : var_8))))) ? (min((min(var_7, var_2)), ((min(var_5, var_5))))) : ((min((arr_25 [i_6 - 1]), var_1))));
                }

                /* vectorizable */
                for (int i_18 = 1; i_18 < 9;i_18 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 11;i_20 += 1)
                        {
                            {
                                arr_73 [i_6] [i_6] [i_6] [i_7] [i_6] = var_2;
                                arr_74 [i_6] [i_6] [i_18] [i_19] [i_7] [i_20] = (!var_9);
                            }
                        }
                    }
                    var_30 = (min(var_30, var_2));
                    arr_75 [i_7] = var_4;
                    var_31 = (~var_7);
                }
                arr_76 [i_7] [1] [9] = (arr_64 [i_6] [i_7] [10] [i_7]);
                arr_77 [i_7] [i_7] = (arr_8 [i_7] [i_7] [i_6] [i_7]);
            }
        }
    }
    var_32 = (min(var_32, var_5));
    #pragma endscop
}
