/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(var_15, var_12))) ? (!153) : ((939 ^ (~var_13)))));
    var_18 = 3357377912;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (~1);
                    var_20 = (((!var_12) & var_1));
                    var_21 = (max(var_21, (((-((~(((arr_3 [8] [i_1]) ? var_5 : 2806127212)))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_17 [i_3] [i_3] [i_3] [i_5] = var_16;
                    var_22 -= (!(!var_14));

                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        var_23 *= ((-(!2147483647)));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_24 = 0;
                            var_25 = ((1 - var_12) - (var_13 - 1));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_26 [i_8] = (var_12 ^ (arr_0 [i_3]));
                            var_26 = var_11;
                            arr_27 [i_3] [i_8] [i_8] [i_6] [i_8] = ((var_8 ? (((var_9 ? 124 : -102))) : var_6));
                        }
                        var_27 = (max(var_27, var_10));
                        var_28 ^= var_8;
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_31 [i_3 + 4] [i_9] [12] [i_5] [i_5] [i_9] = var_7;

                        for (int i_10 = 4; i_10 < 11;i_10 += 1)
                        {
                            var_29 = (arr_12 [i_3] [i_3] [i_3]);
                            var_30 = var_5;
                            arr_34 [i_9] = var_16;
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_38 [i_9] = (-((var_8 ? var_1 : var_9)));
                            arr_39 [2] [i_4] [i_9] [i_9] [i_9] = var_2;
                            var_31 |= var_13;
                        }
                        var_32 = var_11;
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_33 = (((arr_6 [i_3] [i_3]) ? var_11 : var_1));
                            var_34 = 59686;
                            var_35 = -26875;
                        }
                        for (int i_14 = 1; i_14 < 1;i_14 += 1)
                        {
                            arr_48 [i_3] [i_14] = 17851;
                            var_36 = (max(var_36, -var_13));
                        }
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            var_37 = (min(var_37, var_6));
                            var_38 = (var_10 * var_13);
                        }

                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_39 = (758492041 <= 29222);
                            var_40 -= var_1;
                            var_41 = 1;
                        }
                    }
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    var_42 *= -var_9;
                    /* LoopNest 2 */
                    for (int i_18 = 2; i_18 < 11;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            {
                                var_43 &= (!var_9);
                                var_44 = var_2;
                                arr_61 [i_3] [i_4] [i_17] [i_17] [i_18] [i_18] [i_19] = (((var_6 ? 7716770789905765618 : var_12)) / (~1));
                            }
                        }
                    }
                }
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    var_45 = (-2142238169 | (arr_28 [i_4] [i_3] [8] [4]));
                    arr_64 [i_3] [i_3] [i_4] [i_20] = (!var_5);
                }
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    var_46 = var_10;

                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        var_47 = (!-25);

                        /* vectorizable */
                        for (int i_23 = 3; i_23 < 11;i_23 += 1)
                        {
                            var_48 = (!2897748595);
                            arr_71 [i_3] [i_3] [i_23] [i_3] [i_23] [i_23] [i_3] = var_6;
                            var_49 *= var_8;
                        }
                        arr_72 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 2] = var_9;
                        var_50 = (max(var_50, (arr_11 [i_3 + 1] [i_21])));
                    }
                    for (int i_24 = 3; i_24 < 11;i_24 += 1)
                    {
                        var_51 = var_3;
                        arr_75 [i_3] [i_4] [i_24] [12] [i_4] [12] |= var_5;
                        var_52 = ((((var_2 <= (59694 <= 48))) ? (((var_12 / var_6) ? var_16 : -9079480844525212361)) : (((~(~var_3))))));
                        var_53 |= var_3;
                        arr_76 [i_24 + 2] [i_21] [i_3] [i_3] = ((~(~var_13)));
                    }
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        arr_81 [i_25] [i_21] [i_4] [i_3] = (min(var_12, var_12));
                        var_54 += (((!var_10) * (((17253365171398389250 ? var_7 : (arr_11 [i_25] [i_21]))))));
                        arr_82 [i_3] [i_3] [i_3 + 3] [i_3 + 3] [i_3] = var_8;
                    }
                    arr_83 [0] [i_4] [i_21] = 1060863384;
                }
                var_55 = (~var_14);
            }
        }
    }
    var_56 = (var_11 - 821916291339559980);
    #pragma endscop
}
