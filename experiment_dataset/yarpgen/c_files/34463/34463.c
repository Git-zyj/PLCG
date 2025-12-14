/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 = (((!var_4) || 22368));

                            for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                            {
                                var_20 = (((((arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1]) - var_9)) | (((arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 3]) - (arr_11 [i_1 - 3] [i_1 + 1] [i_1 - 2])))));
                                arr_15 [i_0] [i_4] [i_2] [i_4] [i_4 + 1] = ((((max(((var_14 ? var_16 : (arr_3 [i_0]))), 448))) ? (((!(arr_10 [i_0] [i_0])))) : ((((arr_6 [i_1 - 3]) < ((max((arr_2 [i_0 + 1]), var_3))))))));
                            }
                            for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                var_21 = ((var_12 ? (arr_7 [i_1 - 2] [i_3 - 2] [i_5 + 1]) : (((!(var_9 % var_5))))));
                                arr_19 [i_0] [11] [i_2] [i_0] [i_0] = (((((17930455153916840613 ? (arr_11 [i_0] [i_1 + 1] [i_2]) : 516288919792711009))) ? 36 : (min(65506, 17930455153916840594))));
                            }
                            for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                var_22 |= ((min((arr_0 [i_0 - 3]), var_13)));
                                arr_22 [i_0] = ((!(arr_21 [i_0] [i_1] [i_2] [i_3] [i_3 - 1] [13])));
                                arr_23 [i_0] [8] [i_2] [8] [14] = (min(((max(var_4, (max(444, 255))))), 17930455153916840613));
                                var_23 = 73;
                                arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] = 37;
                            }
                            for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                            {
                                var_24 |= (((((arr_17 [i_0] [i_0] [i_0] [i_0 - 4] [i_1 - 1] [i_1]) && (arr_2 [i_0 + 1]))) ? (((!516288919792710990) ? var_8 : 60)) : ((((var_0 == 32356) ? var_17 : (max((arr_11 [i_2] [i_3] [i_7]), var_11)))))));
                                var_25 *= ((((max((~-118), ((min((arr_18 [i_0] [i_2] [i_2] [i_3] [i_7] [i_0]), var_4)))))) || (-32767 - 1)));
                            }
                            var_26 *= ((!(arr_11 [i_0 + 2] [7] [i_3])));
                        }
                    }
                }
                arr_27 [i_0] = ((((max((arr_14 [i_0]), var_4))) ? (13423748694035599190 < var_11) : (arr_4 [i_0 + 2])));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_33 [i_1 - 1] [i_1] [i_9] [i_0] [i_1] = arr_20 [i_9];
                            arr_34 [i_0] [i_0] [i_8 - 1] [i_9] = (arr_6 [i_0 + 1]);
                            arr_35 [i_0] [i_0] [i_0] [i_0] = 17930455153916840631;
                            arr_36 [i_0] [i_0] [i_0] [i_8] = ((!(((arr_32 [13] [13] [i_8 - 1]) && (((var_5 + (arr_31 [i_0] [i_0] [i_8] [i_0] [17]))))))));

                            for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
                            {
                                var_27 = 2;
                                var_28 -= ((((((var_14 ^ 0) == -22368))) * (arr_21 [i_0] [i_1 - 3] [0] [i_9] [i_0] [i_10])));
                            }
                            for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                            {
                                arr_41 [i_11] [i_9] [i_0] [i_8] [i_0] [i_1 - 2] [8] = (min((max(4294967277, -683693897)), (((!(arr_31 [i_0] [i_1 - 1] [i_8 - 1] [i_0] [i_11]))))));
                                var_29 = ((((((arr_30 [i_0 + 4] [i_1 - 2] [i_8] [i_8 - 1]) - (arr_2 [i_9])))) || ((min((arr_20 [i_0 - 2]), (arr_12 [i_0] [12] [i_9]))))));
                            }
                            for (int i_12 = 0; i_12 < 21;i_12 += 1)
                            {
                                arr_44 [i_0] [i_9] [i_8] [i_0] [i_0] = ((60 & (((!(arr_43 [i_12] [i_1 - 3] [i_8 + 2] [i_0 + 1] [i_8 + 2]))))));
                                arr_45 [i_0] = arr_42 [i_0 + 3] [10];
                                var_30 = (max(var_30, ((min(65525, ((13423748694035599192 * (arr_31 [i_0] [i_0] [i_0] [i_9] [i_0]))))))));
                                arr_46 [i_0 + 2] [i_0] [i_8] [6] [i_12] [0] = ((!((max((arr_28 [11] [i_9]), (arr_39 [i_0] [i_8 - 1] [1] [16] [i_12]))))));
                            }
                            /* vectorizable */
                            for (int i_13 = 1; i_13 < 17;i_13 += 1)
                            {
                                var_31 = (min(var_31, ((((arr_39 [i_1 - 1] [i_1] [i_8] [i_9] [i_13]) != (arr_10 [i_9] [i_9]))))));
                                arr_51 [i_0 + 2] [i_9] [i_8] [i_9] [i_0] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = (min((max(51406, (max(-9223372036854775798, var_17)))), (112 ^ var_2)));
    #pragma endscop
}
