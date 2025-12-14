/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, var_0));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (((var_8 & 28099) ? 1 : var_2));
                    arr_8 [i_0 - 1] [6] [7] = (((-(arr_5 [i_0] [i_1]))));
                    var_14 = (arr_6 [i_2]);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_14 [i_3] [1] [9] |= ((((((arr_7 [i_3] [i_3 - 1] [i_4] [i_4]) ? var_2 : (arr_7 [i_3] [i_3 - 1] [i_4] [i_3])))) ? (((arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_4]) / -16)) : var_4));
            arr_15 [i_3] [7] = (arr_7 [0] [i_4] [i_3 - 1] [i_3 - 1]);
            var_15 = ((!((min(var_11, var_8)))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_18 [i_3] [4] = (((var_10 ? 1 : (arr_1 [i_3]))));
            arr_19 [i_3 - 1] [8] [i_5] = (355772555 / -1);
            var_16 = 6717;

            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_24 [i_3] [i_5] [i_6] [i_6] = ((52854 & (((((var_1 ? var_4 : var_6))) ? (max((arr_6 [i_3]), var_8)) : 1))));
                    var_17 -= ((var_3 ? var_0 : (var_6 < -20860)));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    arr_27 [i_3] [i_5] [i_6] [i_8] = arr_20 [i_3] [i_3] [i_3 - 1];
                    var_18 = (~var_0);
                }
                var_19 += ((((~((max(var_5, var_1))))) & (((((((arr_13 [i_3] [5] [i_3]) + 2147483647)) >> (37430 - 37406))) / var_0))));
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
            {
                arr_32 [i_3] [3] [i_9] [i_5] = (max(15690, 1));
                var_20 = (min(var_20, ((max((arr_6 [i_3 - 1]), ((((arr_10 [i_3 - 1] [i_5]) ? var_7 : var_2))))))));
                var_21 = (((((arr_26 [i_3] [i_3] [4] [i_3 - 1]) + 2147483647)) << ((((((max((arr_31 [i_3] [i_3 - 1]), -1))) + 10)) - 9))));
                var_22 = (((((~((~(arr_0 [i_3])))))) ? (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (var_4 / 4294967295)));
            }
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            arr_37 [i_10] [i_3] = (((!(arr_35 [i_3] [i_10]))));
            var_23 ^= var_8;
            arr_38 [2] = (min((arr_22 [i_3] [i_3 - 1] [i_3 - 1]), 1));
            var_24 = (arr_22 [i_3] [i_3] [i_3 - 1]);
        }
        var_25 *= (((((-(arr_28 [i_3 - 1] [i_3 - 1] [i_3 - 1])))) ? ((min(var_6, ((max((arr_4 [i_3] [i_3] [i_3]), var_0)))))) : (arr_6 [i_3 - 1])));

        for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
            {

                for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
                {

                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        arr_49 [i_3] [8] = 1100484407;
                        arr_50 [i_3] [i_12] [i_13] [i_14] = ((-(arr_9 [i_3 - 1])));
                    }
                    var_26 = 0;
                    arr_51 [i_3] [i_11] [i_12] [i_12] [i_13 + 1] = ((-(var_9 - 965287483)));
                }
                for (int i_15 = 2; i_15 < 8;i_15 += 1) /* same iter space */
                {
                    var_27 = (min(var_27, ((((-1 ? var_3 : 144213928))))));
                    var_28 = ((7 ? var_2 : var_3));
                }

                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    var_29 = ((var_2 > (arr_35 [8] [i_11 + 1])));
                    var_30 = (max(var_30, (arr_53 [i_16] [i_12] [i_3])));
                    var_31 = (!var_7);
                }
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    var_32 = (min(var_32, (((arr_12 [i_11 + 1] [i_11]) ? var_4 : var_0))));
                    var_33 += -13866;
                }
                var_34 = (arr_57 [i_12] [i_11 - 1] [i_3]);
                arr_59 [1] [i_11] [i_12] [i_12] = (!var_5);
            }
            for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
            {
                var_35 = (max(var_35, ((min(((~(var_11 || var_8))), (((((~(arr_34 [i_3] [i_3])))) ? (((arr_16 [i_3] [i_3]) ^ -1223748164)) : (((arr_44 [i_11] [i_18]) ? 1 : var_11)))))))));
                var_36 = (~0);
                var_37 = ((-(((!-3540) >> (var_3 - 631789847)))));
            }
            var_38 = ((arr_11 [i_3] [i_11] [i_3 - 1]) ? (max(((var_9 ? (arr_29 [i_3] [i_3] [i_11 - 1] [i_11 - 1]) : (arr_54 [i_3] [i_3] [i_3] [i_3] [i_11 - 1] [i_3]))), (((arr_7 [i_3 - 1] [i_3] [i_3] [i_11 + 1]) & (arr_26 [i_3] [i_11] [i_3] [i_11 - 1]))))) : 490850058);
            arr_62 [i_3] = 2147483634;
            arr_63 [i_3] [i_3] [i_3] = var_8;
        }
        /* vectorizable */
        for (int i_19 = 1; i_19 < 9;i_19 += 1) /* same iter space */
        {
            arr_66 [i_3] [i_19] [i_19 + 1] = ((~(((!(arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_19 + 1]))))));
            arr_67 [i_3 - 1] [i_3] [i_19 - 1] = 12;
        }
    }
    var_39 = (max((0 | var_3), 91));
    var_40 = ((!(((var_10 ? (max(var_10, var_11)) : ((-1 ? var_4 : 19575)))))));
    #pragma endscop
}
