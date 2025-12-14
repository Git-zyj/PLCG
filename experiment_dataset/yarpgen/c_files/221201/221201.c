/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_15 = (max(var_15, 2013265920));
                            arr_15 [i_0] [i_2] = (max(var_11, (min(2013265917, -416730596))));
                            arr_16 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] [i_2] = 2047;
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            arr_21 [i_5 - 1] [i_1] [i_2] [i_3] [i_3] = var_6;
                            arr_22 [i_2] [i_3] [i_2] [i_1] [i_2] = ((!(arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3 - 2] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_16 = 27174;
                            arr_25 [i_2] [i_3] [i_3 - 2] [i_3] [i_2] [i_1] [i_2] = ((var_1 ? 7935531212058766377 : -19));
                            var_17 &= (arr_24 [i_3 - 3] [i_1] [i_3 + 3] [i_1] [i_3 + 3]);
                        }
                        var_18 = (min(((min(43, var_12))), -var_3));
                        arr_26 [i_2] = (arr_8 [i_2] [i_2] [i_2]);
                        arr_27 [i_0] [i_2] [i_0] [i_1] [i_3] = max((((!(arr_24 [i_3 + 2] [i_2] [i_3 - 1] [i_3] [i_3 + 3])))), (min(((var_6 & (-127 - 1))), 1)));
                        arr_28 [i_0] [i_1] [i_2] [i_2] = (arr_8 [i_2] [i_1] [i_2]);
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_19 += -12;
                        arr_31 [i_2] = (!((!(arr_17 [i_0] [i_0] [i_0]))));
                        var_20 = (max((((((-(arr_2 [i_0])))) + ((var_8 - (arr_11 [i_7] [i_2] [i_1] [i_1] [i_1] [i_0] [i_0]))))), (((244 + (arr_14 [i_7] [i_7] [i_2] [i_2] [i_2] [i_1] [i_0]))))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_21 = ((-((min((max((arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_8]), var_12)), (arr_23 [i_0] [i_2] [i_1] [i_2] [i_8] [i_8]))))));
                        var_22 = (min(var_22, var_4));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_37 [i_0] [i_1] [i_2] [i_2] [i_9] = var_4;
                            var_23 = (max(0, 119));
                            var_24 &= (max((min(0, ((-(arr_8 [i_0] [i_8] [i_9]))))), var_4));
                            arr_38 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_9] = (((((arr_33 [i_0] [i_1] [i_8] [i_9]) ? (arr_32 [i_0] [i_2] [i_9]) : 12)) * ((((arr_32 [i_9] [i_2] [i_0]) / var_3)))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = (min(14615430210024685038, (min((arr_7 [i_9] [i_8] [i_2] [i_0]), (arr_2 [i_0])))));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            arr_44 [i_10] [i_2] [i_2] [i_2] [i_0] = -1759954967704411466;
                            var_25 = (((arr_32 [i_1] [i_2] [i_10]) / -var_3));
                            arr_45 [i_2] = ((!(((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) != (arr_14 [i_0] [i_1] [i_2] [i_2] [i_10] [i_0] [i_10])))));
                            var_26 = (max(((min((arr_0 [i_10] [i_2]), (arr_6 [i_0] [i_0])))), (min((arr_6 [i_8] [i_1]), var_2))));
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_27 = ((((min((arr_11 [i_0] [i_1] [i_2] [i_8] [i_11] [i_2] [i_8]), (((var_0 ? -1 : (arr_18 [i_0] [i_0] [i_1] [i_1] [i_1] [i_8] [i_0]))))))) ? (((8 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_14 [i_11] [i_8] [i_0] [i_2] [i_0] [i_1] [i_0])))) : (((arr_42 [i_0] [i_1] [i_2] [i_1] [i_11]) + ((var_10 ? 2477795399 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            arr_48 [i_0] [i_1] [i_2] [i_8] [i_2] = ((-(arr_36 [i_0] [i_1] [i_2])));
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_28 ^= var_1;
                            var_29 = ((((((arr_36 [i_0] [i_2] [i_2]) < (arr_11 [i_0] [i_1] [i_1] [i_2] [i_8] [i_8] [i_12])))) & ((((arr_32 [i_2] [i_2] [i_12]) && (arr_32 [i_1] [i_2] [i_2]))))));
                            var_30 = ((!(arr_40 [i_12] [i_2] [i_2] [i_2] [i_0])));
                            var_31 = (min(((min(109, 74))), -41));
                        }
                        arr_53 [i_0] [i_2] [i_2] [i_8] = (arr_49 [i_0] [i_2] [i_0] [i_0] [i_1]);
                    }

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_56 [i_0] [i_2] [i_2] [i_13] [i_0] [i_2] = (min(((max(var_7, (arr_51 [i_0] [i_2] [i_2] [i_13] [i_13])))), var_5));
                        var_32 = (min(var_32, 165));
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            arr_63 [i_0] [i_1] [i_2] [i_14] [i_15] [i_2] = ((((arr_33 [i_15] [i_14] [i_2] [i_1]) ? (arr_17 [i_14] [i_1] [i_2]) : (arr_2 [i_0]))));
                            var_33 = (min(var_33, 416730596));
                            arr_64 [i_0] [i_2] = ((-(arr_62 [i_2] [i_1] [i_2] [i_14] [i_15] [i_15] [i_0])));
                            var_34 = (arr_57 [i_0] [i_14]);
                            var_35 = var_13;
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            var_36 = (min(var_36, (arr_24 [i_0] [i_1] [i_2] [i_14] [i_0])));
                            var_37 = ((!(arr_12 [i_0] [i_1] [i_2] [i_14] [i_16])));
                        }
                        arr_67 [i_0] [i_0] [i_2] = (var_2 - var_12);
                        var_38 &= (min((((arr_10 [i_0] [i_1] [i_2] [i_14] [i_14]) + (min(-4728749820052235049, var_12)))), ((min((arr_3 [i_0]), (0 & 0))))));
                    }
                    arr_68 [i_0] [i_2] [i_2] [i_2] = (((min((arr_43 [i_2] [i_2] [i_1] [i_1] [i_0]), 1)) ? (((max(1543490938, 125)) * (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1]))) : var_10));

                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_39 = -12;
                        arr_71 [i_2] [i_2] [i_1] [i_2] = var_8;
                        var_40 = ((!(arr_62 [i_0] [i_1] [i_2] [i_17] [i_1] [i_17] [i_0])));
                    }
                }
            }
        }
    }
    var_41 = (min(((min((((-1 + 2147483647) >> (65535 - 65534))), 147))), (((min(var_1, -1042643793003374114)) | (var_11 & var_9)))));
    #pragma endscop
}
