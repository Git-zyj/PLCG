/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = var_15;
            var_19 = ((min((arr_6 [i_0] [i_1]), (arr_0 [i_0] [i_1]))));
            arr_8 [i_0] [i_0] = ((~(((min(20547, (arr_1 [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 |= (((((var_16 ? -20556 : ((var_17 ? (arr_0 [i_0] [i_2]) : (arr_3 [i_0])))))) ? (((var_13 ? -28904 : 0))) : (arr_3 [i_0])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_4 + 1] [i_2] [i_4] = (!var_13);
                        var_21 = (min((min((var_1 & 1), (min(28, (arr_0 [i_3] [i_3]))))), (((var_15 == (arr_2 [i_4 + 1]))))));
                    }
                }
            }
            arr_16 [i_2] = (min((((var_18 ? 20545 : 1))), ((((arr_9 [i_0] [i_0] [i_0]) ? -20562 : (max((arr_9 [i_0] [i_0] [i_2]), (arr_0 [i_0] [i_0]))))))));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_2] = var_5;
                            var_22 = min((((arr_9 [i_5 + 1] [i_5 - 2] [i_7 + 1]) ? (arr_9 [i_5 - 1] [i_5 - 1] [i_7 - 1]) : (arr_9 [i_5 - 1] [i_5 - 2] [i_7 + 1]))), 20561);
                            arr_25 [i_0] [i_2] [i_5 + 1] [i_6] [i_7 + 1] = ((+((var_7 ? (arr_12 [i_7 - 1]) : var_15))));
                            arr_26 [i_2] [i_0] [i_5 + 1] [i_2] [i_5 + 1] = (((((-(arr_20 [i_5 - 1] [i_5 - 1] [i_7 - 1] [i_7 + 1])))) ? (min((arr_6 [i_0] [i_2]), -28927)) : (arr_12 [i_0])));
                            var_23 = ((-((-(arr_13 [i_6] [i_2] [i_7 - 1] [i_5 - 1])))));
                        }
                    }
                }
            }
            var_24 *= (arr_20 [i_0] [i_2] [i_0] [i_2]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_25 ^= var_5;
            var_26 = (~var_9);
            var_27 = ((var_1 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_0])));
        }
        arr_29 [i_0] = ((+(((!((min((arr_18 [i_0] [i_0] [i_0]), 1))))))));
        var_28 = (20547 ^ var_15);
        var_29 = (min(var_29, 28925));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_30 = (arr_10 [i_9] [i_9]);
        var_31 = (arr_10 [i_9] [i_9]);
    }
    for (int i_10 = 2; i_10 < 15;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    {
                        var_32 = ((!(arr_41 [i_10 - 2] [i_11] [i_11] [i_12] [i_12] [i_13])));
                        arr_43 [i_10] [i_10] [i_10] [i_10] [i_10] [i_12] = ((-((((((arr_40 [i_10] [i_11] [i_11] [i_11] [i_12] [i_13]) ? 28899 : (arr_34 [i_10])))) ? (!1) : ((var_17 ? (arr_32 [i_10] [i_10]) : var_1))))));
                        arr_44 [i_10 - 2] [i_10] [i_10] [i_12] = var_15;
                        arr_45 [i_10] [i_11] [i_11] [i_13] = 3;

                        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                        {
                            var_33 = ((((var_17 % (arr_32 [i_10 - 2] [i_10 + 1]))) < (((min(96, var_5))))));
                            arr_48 [i_11] = (arr_37 [i_10 + 1] [i_11] [i_10 + 1]);
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                        {
                            var_34 = var_4;
                            var_35 ^= var_3;
                            arr_52 [i_11] [i_11] [i_12] = ((-28926 & ((-(arr_42 [i_12])))));
                            var_36 += var_17;
                        }
                        for (int i_16 = 1; i_16 < 14;i_16 += 1)
                        {
                            var_37 *= (((((max((arr_53 [i_10] [i_11] [i_11] [i_13] [i_16] [i_11] [i_10]), (arr_37 [i_10 - 1] [i_10 - 1] [i_12]))))) ? ((max(-17242, 0))) : (~-1)));
                            var_38 = (min(var_38, (((!((min((arr_41 [i_10 + 1] [i_11] [i_12] [i_16 + 2] [i_16] [i_13]), (arr_41 [i_13] [i_13] [i_12] [i_16 + 1] [i_16 + 2] [i_10 - 1])))))))));
                            var_39 = (max((arr_35 [i_10] [i_10 - 2] [i_10 - 2]), (arr_32 [i_11] [i_16 + 1])));
                            arr_56 [i_10 - 2] [i_10 - 2] [i_10 - 2] [i_13] [i_16 - 1] = (((((32767 ? ((-(arr_46 [i_10] [i_10]))) : (arr_37 [i_13] [i_12] [i_12])))) ? ((((((18 ? (arr_47 [i_10 - 2] [i_16]) : -20548))) ? 4294967291 : ((((!(arr_38 [i_12] [i_11] [i_12])))))))) : (((var_6 || 139) ? ((var_14 ? var_14 : -28912)) : var_3))));
                        }
                    }
                }
            }
        }
        var_40 &= (((-(arr_54 [i_10] [i_10] [i_10 - 1] [i_10] [i_10]))));
        var_41 = (min((((arr_49 [i_10] [i_10] [i_10 + 1] [i_10] [i_10]) ? (arr_51 [i_10 - 2] [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 2] [i_10] [i_10 - 1]) : (arr_37 [i_10 - 2] [i_10 - 2] [i_10]))), -var_8));
    }
    var_42 = (((8191 ? 1269 : 114)));
    var_43 = (~var_12);
    #pragma endscop
}
