/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [i_0] = (((var_0 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))));

                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    arr_10 [i_0] [i_0] [i_3] [i_0] = ((-(arr_3 [i_1] [i_1] [i_1])));
                    var_12 = var_2;

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_13 = (arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 3]);
                        arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = (!var_0);
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((-(arr_3 [i_2] [i_2] [i_2])));
                        var_14 = (max(var_14, (arr_1 [i_0 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_21 [i_3] [i_0] [i_0] [i_0] [i_0] [i_3] = var_4;
                        arr_22 [i_0] [i_0] [i_3] [i_0] [i_0] = (arr_15 [i_3] [i_3]);
                        var_15 = (min(var_15, ((((arr_3 [i_0] [i_0 - 1] [i_3 - 2]) ? ((var_8 ? var_7 : (arr_4 [i_1] [i_1]))) : (arr_15 [i_1] [i_1]))))));
                        var_16 = (min(var_16, var_7));
                        var_17 = (min(var_17, (arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2])));
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((var_4 ? var_11 : (arr_6 [i_0] [i_0] [i_0] [i_0])))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_7 ? (arr_15 [i_1] [i_1]) : (arr_25 [i_0])));
                        }
                    }
                }
                var_18 = (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]);

                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    var_19 = (arr_34 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3]);
                    arr_35 [i_0] [i_9] [i_0] = (arr_2 [i_1]);
                    var_20 = (((((~(arr_19 [i_9] [i_9])))) ? var_6 : -var_3));
                    arr_36 [i_0] [i_0] [i_9] [i_0] = -var_8;
                }
            }

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_21 = (~var_0);
                arr_40 [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                var_22 = (max(var_22, ((((~var_10) ? (((arr_25 [i_0]) ? var_8 : var_5)) : (arr_1 [i_0]))))));
                arr_41 [i_0] = ((-(arr_37 [i_0] [i_0] [i_0] [i_0])));
                arr_42 [i_0] [i_0] [i_0] = (((arr_9 [i_0 + 2] [i_1] [i_0] [i_1] [i_0]) ? var_9 : (arr_9 [i_0 + 3] [i_1] [i_1] [i_1] [i_0])));
            }
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_51 [i_1] [i_11] [i_1] = var_2;
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_11] = (arr_11 [i_0 + 2] [i_0 + 2] [i_11] [i_0 + 2] [i_11]);
                        }
                    }
                }
                var_23 = (min(var_23, (arr_1 [i_11])));
            }
            for (int i_14 = 3; i_14 < 16;i_14 += 1)
            {
                arr_56 [i_14] [i_14] [i_14] [i_14] = (arr_3 [i_14] [i_14] [i_14]);
                var_24 = (max(var_24, (((-(arr_14 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_14 + 1]))))));
                arr_57 [i_14] [i_14] = var_9;
            }
        }
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            arr_60 [i_0] [i_0] = (arr_31 [i_15]);
            var_25 = ((-(arr_48 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0 - 1] [0])));
            arr_61 [i_0] [i_0] [i_0] = ((~(arr_46 [i_0])));
            var_26 = var_2;
        }
        var_27 &= (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);

        for (int i_16 = 3; i_16 < 16;i_16 += 1) /* same iter space */
        {
            var_28 = var_6;

            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                var_29 -= (arr_11 [i_0] [i_0] [0] [0] [0]);
                var_30 = (min(var_30, -var_6));
                var_31 = (max(var_31, (((~(((arr_33 [12]) ? var_7 : var_7)))))));
                var_32 = (max(var_32, (((!(arr_43 [i_0 + 4] [i_0 + 4] [i_16 + 1] [i_16 - 1]))))));
            }
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        {
                            arr_77 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_16] = (~var_3);
                            arr_78 [i_0] [i_0] [i_0] [i_0] [i_16] = (~11768803134729534068);
                        }
                    }
                }
            }
        }
        for (int i_21 = 3; i_21 < 16;i_21 += 1) /* same iter space */
        {
            var_33 = (max(var_33, ((((((var_5 ? var_11 : (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_4 [i_21] [i_21 - 3]) : var_3)))));
            arr_81 [i_0] = (arr_62 [i_21]);
        }
        for (int i_22 = 3; i_22 < 16;i_22 += 1) /* same iter space */
        {
            var_34 = 5;

            for (int i_23 = 4; i_23 < 16;i_23 += 1)
            {
                arr_88 [i_0] [i_0] [i_0] [i_0] = -var_1;
                arr_89 [i_0] [i_0] [i_0] = (~var_9);
                var_35 = (min(var_35, (((~var_8) ? var_8 : (~6677940938980017547)))));
                arr_90 [i_0] [i_0] [i_0] = var_6;
            }
        }
        var_36 *= (!var_6);
    }
    var_37 = (!var_4);
    var_38 = -var_2;
    #pragma endscop
}
