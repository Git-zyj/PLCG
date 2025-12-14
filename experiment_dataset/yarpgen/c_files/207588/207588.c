/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_3));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_12 = (min(var_12, 12484882709006834132));
        var_13 = ((var_3 ? var_1 : ((min((!65535), 32765)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((((((((var_0 != (arr_7 [i_0]))))) / (var_9 + var_3))) * (((arr_1 [i_0 + 3]) / var_3)))))));
                            var_15 = ((!((((arr_1 [i_1]) ? 234 : var_9)))));
                        }
                    }
                }
            }
            var_16 = (((max(var_10, 52527))));
            var_17 = ((!(var_2 < -1180783784420763779)));
            var_18 = (min(var_18, ((((!-var_5) | (var_0 > -var_3))))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_18 [i_6] [i_5] [i_0] = ((-((var_8 ? (arr_2 [i_0] [i_5 - 1] [i_6]) : 122))));
                var_19 = var_1;
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((var_0 ^ (var_0 > 83))))));
                            var_21 = var_0;
                            arr_27 [i_0 + 3] [i_0] [i_7] = 52509;
                            arr_28 [i_7] [i_7] = (!var_10);
                            var_22 = (6439190558650032300 < var_9);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_23 -= var_6;
                            arr_35 [i_10] [i_9] [i_6] [i_5] [i_0] = -1;
                        }
                    }
                }
                var_24 = (~var_1);
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 9;i_13 += 1)
                    {
                        {
                            var_25 = ((var_3 ? var_6 : var_10));
                            var_26 = ((!(((var_10 ? 254 : (arr_15 [i_0] [i_0]))))));
                            var_27 = (max(var_27, -1));
                            arr_43 [i_0] [i_5] [i_11] [9] [i_13] [i_13 - 1] = (arr_31 [i_13] [i_13] [i_13]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 6;i_15 += 1)
                    {
                        {
                            var_28 = (((var_4 > var_2) ? (arr_31 [i_0 - 1] [i_5 + 1] [i_5 - 1]) : ((var_1 + (arr_8 [i_11] [i_11])))));
                            arr_50 [i_15] [i_5] [i_11] [i_0] [i_15] = -1;
                            var_29 = (((1 <= var_9) * (!var_9)));
                            var_30 = ((var_9 && (((1 ? var_10 : var_5)))));
                        }
                    }
                }
                arr_51 [i_0] [i_0] [i_0] [i_0] = var_5;
            }
            var_31 = (min(var_31, ((((((0 ? (arr_31 [i_0] [i_0] [i_5 - 1]) : var_10))) ? 1448392532 : -83)))));

            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                var_32 = var_7;
                var_33 = -1;
                var_34 = (max(var_34, var_3));
            }
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        {
                            arr_62 [i_0] [i_0] [i_5] [i_5] [i_5] [i_17] [i_19] = (-var_4 && -0);
                            var_35 = (((((36 ? var_2 : 2441))) ? 1 : (!var_9)));
                            var_36 = (min(var_36, (1 > 63)));
                            var_37 &= (!var_3);
                        }
                    }
                }
                var_38 = var_3;
                var_39 = (min(var_39, (!var_4)));
                var_40 = 13009;
                var_41 = ((arr_48 [i_0 + 1] [2] [i_0] [i_5 - 2] [i_5] [i_5]) ? ((var_0 ? var_6 : var_0)) : var_6);
            }
            for (int i_20 = 3; i_20 < 9;i_20 += 1)
            {
                var_42 = (min(var_42, 1));
                arr_65 [i_20] = (((~var_3) ? ((var_10 ? var_9 : var_1)) : -65055));
                var_43 = (min(var_43, -124));
                arr_66 [i_0] &= ((-(arr_5 [i_0 + 3])));
            }
        }
        for (int i_21 = 0; i_21 < 10;i_21 += 1)
        {
            arr_71 [i_0 + 3] [i_0 + 3] [i_21] = ((-var_4 + (-var_9 ^ var_3)));

            for (int i_22 = 0; i_22 < 10;i_22 += 1)
            {
                arr_76 [i_21] = min(-var_3, (~var_10));
                var_44 = ((-((min((!var_1), (arr_30 [i_0] [3]))))));
            }
            for (int i_23 = 0; i_23 < 10;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 9;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 10;i_25 += 1)
                    {
                        {
                            var_45 = -23963;
                            var_46 += ((!(((18446744073709551615 ? var_8 : var_7)))));
                        }
                    }
                }
                arr_89 [i_23] = (((((65065 ? var_10 : (arr_64 [i_23] [i_21] [i_23])))) && var_3));
            }
        }
    }

    for (int i_26 = 1; i_26 < 13;i_26 += 1)
    {
        var_47 = var_8;
        arr_92 [i_26] [i_26 + 1] = (!var_5);
    }
    #pragma endscop
}
