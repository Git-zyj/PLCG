/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = -23352;
        arr_4 [i_0] = ((~((var_5 ? 342902736 : var_6))));

        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            var_19 = ((!(arr_1 [i_1 - 1] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_20 = (max(var_20, (arr_0 [i_0])));
                            var_21 = 174;
                            var_22 = (((-12589 ? -28248 : 491417047)));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_23 = ((var_2 ? 242034467 : 1));
                            var_24 = ((114 ? 63 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_17 [i_0] [i_0] [i_0] [i_3 + 4] [i_5] [i_5] = 141;
                            var_25 = -0;
                        }
                        var_26 += ((1 ? (((var_12 ? var_7 : 449))) : (arr_7 [i_1] [i_3 + 3] [i_3 + 3] [i_1])));
                    }
                }
            }
            var_27 = var_0;
            var_28 = (-242034460 ? -28248 : 90918970);
            var_29 -= (~var_12);
        }
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_30 = (!-7639065402178090917);
                            var_31 -= ((~((-28714 ? 511 : var_16))));
                        }
                    }
                }
                var_32 = var_16;
                arr_33 [i_0] [6] [i_0] = ((-(((var_8 < (arr_27 [i_0] [i_6 - 1] [i_0]))))));
                var_33 += -242034432;
            }

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_34 = (!var_10);
                arr_37 [i_0] [i_0] = -1240859349;

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_35 += ((arr_19 [0] [i_6 - 1] [i_6 - 1]) ? -8885 : (arr_19 [i_6] [i_6 - 3] [i_6 - 3]));
                    var_36 = (min(var_36, -var_14));
                }
                var_37 = (arr_38 [i_0] [i_0] [i_6 - 3] [i_6] [i_6] [i_10]);
                arr_41 [i_0] = 1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 20;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 20;i_16 += 1)
                        {
                            {
                                var_38 += (min((arr_52 [i_12] [i_12] [i_12] [0] [i_12] [i_12]), 1));
                                var_39 ^= ((!((min(290806126, 3)))));
                            }
                        }
                    }
                    arr_54 [i_13] [16] [i_14] [i_12] = (max(((((((arr_49 [i_13] [i_13] [i_13]) ? 2193507677 : 0))) ? (arr_42 [i_14 + 1]) : (min(5073799977387570807, (arr_47 [i_13] [i_13] [i_13] [i_13]))))), 5073799977387570829));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 21;i_18 += 1)
                        {
                            {
                                var_40 = (775555755346161808 != 0);
                                var_41 = 5027758676395207499;
                                arr_59 [i_13] [i_17] [i_14 - 2] [i_13] [i_13] = ((((((((13372944096321980805 ? (arr_58 [i_12] [i_13] [i_13] [i_17] [i_18]) : (arr_47 [7] [i_13] [i_17] [7]))) != ((min((arr_51 [i_18] [i_17] [i_13] [i_13] [i_13] [i_12]), 207))))))) ^ (min(0, ((((arr_42 [i_12]) ? 26128 : var_12)))))));
                                var_42 |= (-1 * -1838512000);
                                arr_60 [i_12] [i_13] [12] [i_13] [i_18 - 2] [i_17] [12] = (0 % 28236);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 20;i_20 += 1)
                        {
                            {
                                arr_67 [i_13] = 2598;
                                arr_68 [i_20] [5] [i_13] [5] [i_12] = ((-(((-17350 ? var_0 : var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
