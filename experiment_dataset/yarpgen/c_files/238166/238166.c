/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(max((max(var_9, (-127 - 1))), (-127 - 1)))));
    var_14 = ((max(var_4, ((max(var_12, -105))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((((((arr_3 [i_1]) ? (arr_4 [i_0]) : (arr_2 [i_0])))) ? (((-32767 - 1) ? var_8 : (arr_4 [i_0]))) : ((min(244, (arr_5 [i_0] [i_0]))))))) ? (min((((arr_1 [i_0]) - -2132)), (arr_0 [i_0 - 1] [i_0]))) : (min((max(-2922623217086138752, (arr_0 [i_1] [i_0]))), (~var_3)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 - 1] [13] [i_0] [i_3] = (-(min(((max((arr_5 [i_0] [i_0]), -105))), (max((arr_0 [i_2] [i_0]), 0)))));
                            var_15 = var_9;

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_16 = ((~(!-93)));
                                var_17 = (1 * 11169608615475377317);
                                var_18 = (min(1, 7277135458234174297));
                                arr_17 [i_0] [i_1] [i_0] = ((((((14091644896391206405 && ((((arr_11 [i_0]) ? (arr_11 [i_0]) : 2040550862487063803))))))) >= ((110 ? ((18446744073709551608 ? 0 : 3877924585923960430)) : -var_8))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] = (((!905353714217625802) ? ((var_11 ? (-127 - 1) : 3978746239)) : 44315));
                                var_19 = (arr_20 [9] [i_3] [9]);
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_20 = (arr_7 [i_1]);
                                var_21 = ((((((((-1 ? (arr_8 [i_0] [i_1]) : 7))) ? (!1900814937) : (max(11169608615475377319, -1))))) ? (max(((min((arr_0 [i_1] [i_0]), (arr_20 [i_2] [i_3] [i_6])))), (~-29487))) : (arr_20 [11] [2] [i_6])));
                                var_22 &= ((((max(2040550862487063803, 3584)) | (((0 ? (arr_4 [i_3]) : var_8))))));
                                var_23 = (0 == (arr_0 [i_1] [i_0]));
                                var_24 = (arr_3 [i_1]);
                            }

                            for (int i_7 = 1; i_7 < 1;i_7 += 1)
                            {
                                var_25 = (arr_24 [i_0] [i_0] [i_7 - 1] [i_3] [i_0]);
                                arr_28 [i_0] [i_0] [i_7 - 1] = ((-((((min(17541390359491925813, 13660))) ? ((var_0 ? (arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_5 [i_0] [i_1]))) : (arr_8 [i_0] [i_0])))));
                                arr_29 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = 0;
                            }
                            for (int i_8 = 0; i_8 < 18;i_8 += 1)
                            {
                                var_26 = var_3;
                                var_27 *= var_7;
                                var_28 = (min(((max(-782292821691371858, ((max(var_9, var_11)))))), (max((!0), ((7885153109069212984 ? (arr_7 [i_0]) : 905353714217625802))))));
                            }
                            arr_32 [i_0 + 1] [i_0] [i_2] [3] = max((min(((var_8 ? (arr_1 [i_1]) : -114)), 56351)), -93);
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    var_29 = (((-((17499 ? 178202391 : (arr_23 [i_9]))))));
                    arr_36 [i_0] [i_0] [i_0] = (~var_9);
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    var_30 = 11742291448634153221;
                    arr_40 [i_0] [i_0] [i_0] = 5724653407876099603;
                    arr_41 [i_0] [i_10] [i_1] [i_0] = (((-32767 - 1) >= ((3029555992 ? 17541390359491925814 : var_0))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_46 [i_0 + 1] [i_1] [i_0] = (-127 - 1);
                        arr_47 [i_0] [i_0] [i_0] = var_11;
                    }
                    arr_48 [i_0] [i_0] [i_11] = (~(arr_45 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 - 4] [i_0 - 3] [i_0]));
                }
            }
        }
    }
    #pragma endscop
}
