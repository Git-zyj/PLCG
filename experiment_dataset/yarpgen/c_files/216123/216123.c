/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_2] = (arr_0 [i_0 - 4]);
                    var_19 = (max(var_19, var_12));
                }
            }
        }
        var_20 = -6296743544111617686;
        var_21 = ((37 ? 16140901064495857664 : -14));
        var_22 = ((74 ? 65535 : 6296743544111617695));
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        var_23 = (((4553711612270273397 - 59) + ((((!16140901064495857676) ? (arr_8 [15]) : -69)))));
        arr_9 [i_3] [1] = (((((7605337128465171033 ? 0 : 7605337128465171033))) ? (((var_16 ? (arr_8 [i_3 + 2]) : (arr_7 [i_3 + 2])))) : var_17));
        var_24 = (max(var_24, (arr_8 [16])));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            var_25 += ((-(255 / 3)));
            var_26 ^= (((arr_12 [i_5 - 1]) ? (arr_12 [i_4 - 1]) : 20));
            arr_15 [i_4] [18] = (arr_10 [i_5]);
        }
        var_27 = (max(var_27, (arr_13 [i_4])));
        arr_16 [i_4] = var_2;
        var_28 = (max(var_28, (((1 ? 2915678559 : 4294967295)))));
        var_29 += (((((arr_14 [i_4 - 1]) ? (arr_8 [i_4 + 1]) : (arr_8 [i_4 + 2])))) ? (((arr_8 [i_4 + 2]) ? var_18 : (arr_14 [i_4 + 2]))) : 151);
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6 - 1] = (arr_11 [i_6]);
        var_30 ^= 255;

        for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    {

                        for (int i_10 = 2; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_30 [i_6] [i_7 + 1] [i_9] [i_9] [i_10 + 1] = var_11;
                            var_31 = ((var_2 ? 209 : (arr_12 [i_6 + 2])));
                        }
                        for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_32 += 405095745;
                            arr_34 [i_9] [i_7] [i_7] = var_7;
                            var_33 = ((var_16 ? (arr_18 [i_6 - 2]) : (arr_25 [i_6 + 2] [i_7] [i_8])));
                        }
                        arr_35 [i_6] [0] [i_9] [i_8] [i_9 - 2] = var_14;
                        var_34 = -110;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 18;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_44 [i_6] [0] [i_7 + 1] [i_13] [i_14] = 1;
                            arr_45 [i_6] [i_7] [i_12] [i_6] [i_14] = ((arr_25 [i_12 - 1] [i_12 + 1] [5]) ? (((var_10 ? (arr_41 [i_6] [i_6 - 1] [i_7 - 2] [i_12] [i_12 - 1] [i_13 - 2] [i_14]) : var_3))) : var_17);
                        }
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            var_35 = (max(var_35, (((!(((var_3 ? var_16 : var_12))))))));
                            var_36 += (((((-2858007406533332505 ? (arr_8 [i_12]) : 1))) ? (arr_33 [i_6] [i_6] [4] [1] [i_6]) : var_13));
                            var_37 = (max(var_37, 255));
                            arr_50 [i_6] [i_7 - 1] [i_12] [i_13] [i_13] = (((arr_25 [8] [i_12 - 2] [i_12]) ? var_5 : (arr_13 [i_13 - 3])));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            arr_54 [i_6] [0] [i_13 - 3] [i_16] = (arr_29 [i_6] [i_7] [i_7] [i_13 - 2] [i_16]);
                            arr_55 [i_6 - 1] [i_6 - 1] [i_12 - 2] [i_12 - 2] [i_16] [i_16] = var_17;
                        }
                        var_38 = (arr_13 [i_6]);
                    }
                }
            }
        }
        for (int i_17 = 2; i_17 < 18;i_17 += 1) /* same iter space */
        {
            var_39 = (((arr_56 [i_17 - 1]) ? ((var_13 ? var_18 : var_12)) : (arr_57 [i_6] [i_6 + 1] [i_6])));
            var_40 = var_13;

            for (int i_18 = 4; i_18 < 15;i_18 += 1)
            {
                arr_62 [i_18] [i_17 + 1] [i_6] [i_6] = ((var_4 ? var_0 : (arr_28 [i_6])));
                var_41 = ((-((5474733845404495656 ? (arr_29 [i_6] [i_17] [i_17] [i_18 + 4] [i_18 + 4]) : var_8))));
                var_42 = 1;
                var_43 = ((7605337128465171033 ? ((var_6 ? (arr_26 [i_6 + 1] [2] [i_18] [i_18]) : var_17)) : (arr_32 [i_6] [i_6] [i_6 - 1] [i_17] [i_17 - 2] [i_18 + 3] [i_18 + 2])));
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 15;i_19 += 1)
                {
                    for (int i_20 = 4; i_20 < 18;i_20 += 1)
                    {
                        {
                            var_44 = var_13;
                            var_45 = (arr_46 [i_6 - 2] [i_6]);
                        }
                    }
                }
            }
            for (int i_21 = 2; i_21 < 15;i_21 += 1)
            {
                var_46 = (min(var_46, var_3));
                arr_71 [i_6 + 2] [i_17] [3] [i_17 - 1] = (((arr_48 [i_6 + 1] [i_17 - 2] [10]) ? (arr_37 [i_6] [17] [i_17] [i_17]) : 85));
            }
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                arr_75 [i_6] [i_17] [6] [i_6 - 1] = var_7;
                arr_76 [i_22] = (((arr_49 [i_17] [i_17 - 1] [i_17 - 2] [i_17] [i_22] [i_22] [i_22]) < ((var_5 ? var_0 : var_1))));
            }
            var_47 = (arr_66 [1] [1] [1] [i_17 + 1] [i_17 - 1]);
        }
    }
    var_48 = var_11;
    /* LoopNest 2 */
    for (int i_23 = 0; i_23 < 19;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            {
                arr_82 [i_23] [i_23] [i_24] = ((-1 ? -22293 : 4294967295));
                arr_83 [i_23] [8] = 0;
                var_49 = (arr_80 [1] [i_23] [7]);
                arr_84 [i_23] = ((65535 ? -55 : 3));
            }
        }
    }
    #pragma endscop
}
