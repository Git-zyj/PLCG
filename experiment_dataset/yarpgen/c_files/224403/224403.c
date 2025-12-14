/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = ((arr_0 [i_0]) - (arr_0 [i_0]));
        var_18 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_19 = (arr_3 [i_2 - 1] [i_2]);
            var_20 = (arr_5 [10] [i_2] [i_2 - 1]);
            var_21 = (10560714714328594086 + 1);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_22 = var_14;
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((-1043144057930221950 % (arr_5 [i_1] [i_1] [i_1])))));
                            arr_20 [3] [i_3] [i_5 - 1] [i_5] = (!-var_3);
                            var_24 |= 177;
                        }
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            var_25 = ((!(arr_19 [i_1] [i_1])));
            arr_24 [i_7] = (65535 % -1648662088);
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_26 = (arr_9 [i_7 - 2] [i_8 + 2]);
                        var_27 = var_10;
                        var_28 = ((0 ? -1 : (~1)));
                        var_29 += (var_1 > 1);
                    }
                }
            }
        }
        var_30 = (0 && -387900491);
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_31 ^= 1;

                            for (int i_14 = 0; i_14 < 25;i_14 += 1)
                            {
                                var_32 = ((((min((arr_37 [i_10] [i_11 + 1] [i_12 + 2] [i_12 - 2]), var_4))) ? (min(var_12, 1)) : ((((arr_37 [i_10] [i_11 + 1] [i_12 + 2] [i_12 - 2]) ? (arr_37 [i_10] [i_11 + 1] [i_12 + 2] [i_12 - 2]) : (arr_37 [i_10] [i_11 + 1] [i_12 + 2] [i_12 - 2]))))));
                                var_33 = ((var_2 % ((var_2 ? (((arr_39 [i_10] [i_10] [1] [i_13]) ? 23 : (arr_30 [i_10]))) : (arr_34 [i_10] [i_12 - 1] [i_12])))));
                                var_34 = (max(var_34, (arr_34 [i_14] [i_11 - 2] [i_14])));
                            }
                            /* vectorizable */
                            for (int i_15 = 1; i_15 < 24;i_15 += 1)
                            {
                                var_35 = ((112 != var_16) && (~0));
                                var_36 = (arr_34 [i_10] [i_12 + 2] [i_15 + 1]);
                                var_37 = (((743672988068799047 == 1648662087) ? (((-1648662081 + 2147483647) << (((arr_43 [1] [i_11] [i_10] [1] [i_13] [i_15]) - 4)))) : var_15));
                            }
                            for (int i_16 = 3; i_16 < 21;i_16 += 1)
                            {
                                var_38 = 0;
                                var_39 *= (min(((min(var_1, 1))), var_15));
                            }
                            for (int i_17 = 2; i_17 < 22;i_17 += 1)
                            {
                                var_40 *= 1;
                                var_41 = ((((3083849206 ? 1 : -9223372036854775776)) | var_0));
                            }
                            arr_50 [i_11] [i_10] [i_13] = (arr_32 [i_10]);
                        }
                    }
                }
                var_42 = 1;
            }
        }
    }

    /* vectorizable */
    for (int i_18 = 3; i_18 < 18;i_18 += 1)
    {
        /* LoopNest 2 */
        for (int i_19 = 2; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                {
                    var_43 = var_8;
                    arr_59 [i_18] [i_18] = (((((3083849210 ? 0 : 1))) ? var_0 : var_15));
                }
            }
        }

        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            var_44 *= (arr_58 [i_18] [i_21] [i_21]);

            for (int i_22 = 1; i_22 < 21;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    var_45 += ((62952 ? 1 : 67));
                    var_46 = 3059814753;
                }
                var_47 = (max(var_47, -14049));
                var_48 = arr_60 [i_21] [i_18];
                var_49 = ((var_0 + (arr_42 [i_18 + 4] [i_22] [i_18 + 4] [i_22] [i_18 + 4])));
            }
            /* LoopNest 2 */
            for (int i_24 = 3; i_24 < 20;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    {
                        var_50 = ((-(arr_70 [i_25] [i_21])));
                        var_51 &= ((arr_45 [i_24 - 1] [i_21]) != (arr_31 [i_21]));
                    }
                }
            }
        }
        for (int i_26 = 0; i_26 < 22;i_26 += 1)
        {
            var_52 = (~1);
            var_53 = -1648662084;
            var_54 = ((-(arr_71 [i_18 - 3] [i_18] [i_18 - 1])));
            /* LoopNest 2 */
            for (int i_27 = 2; i_27 < 20;i_27 += 1)
            {
                for (int i_28 = 2; i_28 < 20;i_28 += 1)
                {
                    {
                        var_55 += (31 || 9007199254740991);
                        arr_82 [i_18 - 3] [i_26] [i_18 + 2] [i_28] [i_26] = ((-98 >= (arr_65 [i_18 + 1] [i_18] [i_26] [i_18] [i_28])));
                        var_56 = var_9;
                    }
                }
            }
        }
        for (int i_29 = 0; i_29 < 22;i_29 += 1)
        {
            arr_85 [i_29] &= (((arr_48 [i_18 + 2] [i_18 + 1] [i_18 - 1] [i_18] [i_18]) >= var_8));
            /* LoopNest 3 */
            for (int i_30 = 2; i_30 < 20;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 22;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 1;i_32 += 1)
                    {
                        {
                            var_57 = var_2;
                            var_58 |= var_8;
                            var_59 = (min(var_59, ((((-31 + 2147483647) >> var_15)))));
                        }
                    }
                }
            }
        }
        var_60 = 23;
    }
    #pragma endscop
}
