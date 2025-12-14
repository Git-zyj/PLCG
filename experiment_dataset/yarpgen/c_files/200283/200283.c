/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = 48;
    var_18 -= (max(var_11, var_12));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_19 = min((arr_2 [i_0]), (min(109, ((max((arr_5 [i_0]), -67))))));
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_4] = var_12;
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = ((min((arr_5 [i_2]), (min((arr_12 [i_1] [i_1 + 1] [i_2] [i_3] [i_4]), 431206603)))));
                        }
                    }
                }
            }
            arr_18 [i_1] [i_0] = (arr_6 [i_0] [i_1]);
            arr_19 [i_0] = (arr_3 [i_0] [i_0]);
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_22 [i_0] = 1;
            arr_23 [i_0] [4] = (arr_15 [10] [i_5 - 1] [i_5] [i_5 - 1] [10] [i_5 - 2]);
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_27 [6] |= (arr_2 [i_0]);
            arr_28 [i_0] = (arr_8 [i_6] [i_0]);
            var_20 = (min(var_20, var_4));
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                arr_36 [i_0] [i_0] = (arr_3 [i_0] [i_8]);

                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    var_21 = (max(var_21, 4385994858623015354));
                    arr_39 [i_0] = var_12;
                    arr_40 [i_0] [5] [i_8] = (arr_35 [i_7] [i_8] [i_9]);
                }
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    arr_43 [10] [i_7] [i_8] [i_0] [i_0] [i_8] = (arr_35 [15] [i_7] [i_7]);
                    arr_44 [i_10] [i_0] [i_0] [i_0] = var_2;
                    arr_45 [i_0] [i_7] [i_0] = (arr_9 [i_0] [i_0] [i_7] [i_0]);
                    var_22 = (arr_29 [1] [i_8] [i_0]);
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_23 = (max(var_23, 232));
                    var_24 = -536870912;
                    arr_49 [i_0] [i_7] [i_7] [i_7] [i_8] [i_0] = (arr_24 [i_7] [i_0]);
                    arr_50 [i_0] [i_0] = (arr_30 [i_7]);
                }
            }
            arr_51 [i_7] [i_0] [i_0] = 1;
            arr_52 [i_0] [12] [i_0] = (arr_6 [i_0] [13]);

            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                arr_55 [i_0] = (arr_34 [9] [i_0] [i_0]);

                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    arr_59 [i_13] [i_0] [i_0] [i_0] = 9103;
                    arr_60 [i_0] [i_0] = var_10;
                    arr_61 [1] [i_0] [i_0] [17] = arr_0 [i_0];
                    arr_62 [i_0] = 32516;
                    var_25 = (max(var_25, (arr_58 [i_12] [i_13] [i_13] [i_12 + 1])));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    arr_66 [i_14] [i_0] [i_0] [i_0] = (arr_64 [i_12 + 2] [14] [i_12 + 1] [i_12]);
                    var_26 = (max(var_26, (arr_21 [1] [0] [1])));
                }
                arr_67 [8] &= (arr_57 [i_12 + 2] [i_12 - 1] [i_12 + 1]);
            }
            arr_68 [i_0] = 56;
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            arr_71 [i_0] = (arr_69 [i_0] [i_15]);
            arr_72 [i_0] [i_15] [i_15] = (arr_7 [i_0] [i_0] [i_15] [i_0]);
            arr_73 [i_0] = var_11;
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            arr_76 [i_0] = (arr_32 [i_0] [3]);
            var_27 = 71;
        }
        var_28 = (arr_21 [i_0] [i_0] [i_0]);
        var_29 = (arr_53 [i_0] [i_0]);
        arr_77 [i_0] = (min(11815, ((max(26447, 1112077180081223426)))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 15;i_17 += 1)
    {
        var_30 = var_6;
        var_31 = var_10;
    }
    for (int i_18 = 0; i_18 < 14;i_18 += 1)
    {
        arr_82 [3] = (arr_5 [i_18]);
        var_32 = (arr_20 [i_18]);
    }
    for (int i_19 = 3; i_19 < 23;i_19 += 1)
    {
        var_33 = 0;
        arr_85 [i_19 - 2] |= 4383866668864628099;
        arr_86 [i_19] [i_19] = 4611686018427387904;
    }
    var_34 = 33292288;
    #pragma endscop
}
