/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max(var_13, var_6));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_14 &= (-127 - 1);
                    arr_9 [i_2] = ((var_3 ? var_6 : (~33243)));
                    var_15 = ((!(~var_11)));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((min((!var_2), (min(3, var_3)))))));
                            var_17 = 2134657621;
                            var_18 = (max(var_18, ((min((~33275), (~33237))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_19 |= (max(((var_4 ? var_6 : var_2)), (min((max(var_4, var_12)), 32281))));
        arr_19 [i_5] [10] |= 1189730002;
        arr_20 [i_5] = var_8;
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = var_10;

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_20 = (max(var_20, ((min(var_5, (min(14741287943868415806, var_6)))))));
            var_21 = ((((!(((-82 ? var_5 : 32291))))) ? (~-78) : var_12));
            var_22 = (max(16646144, 2170831540));
            var_23 = (max(var_23, (((~((min(var_2, 1))))))));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_24 = (max(var_24, var_8));
            arr_29 [i_6] [i_8] = (max(var_9, var_2));
            arr_30 [i_8] = (min(-62, 3502662935));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_25 = var_4;
            arr_33 [i_6] [i_6] [i_6] |= var_11;

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                var_26 = (max(var_26, (((10303806806254699453 ? (((min((!51), var_7)))) : 2198771469)))));
                arr_36 [i_6] [i_9] = 83;
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    var_27 = (max(var_27, ((min((!17967477681145771677), var_9)))));
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 19;i_14 += 1)
                        {
                            {
                                var_28 = (max(var_28, (((~(max(var_4, var_6)))))));
                                arr_49 [i_6] [i_11] [i_11] [i_13] [i_11] [i_6] = ((!((((!var_0) ? var_3 : (((max(-92, var_1)))))))));
                                var_29 = (max((min(var_11, -127)), ((min(((min(var_0, var_7))), var_10)))));
                            }
                        }
                    }
                    var_30 = var_12;
                }
            }
        }
        var_31 = var_1;

        for (int i_15 = 2; i_15 < 20;i_15 += 1)
        {
            var_32 = min(((max(var_1, 32281))), ((252 ? 33253 : 16646128)));
            var_33 *= ((~((min(var_12, var_12)))));
        }
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            var_34 += (((!var_1) ? (min((min(1122504157, 32297)), (!var_7))) : var_1));
            var_35 *= var_0;
        }
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
            {
                arr_61 [i_6] [i_17] [i_17] = ((!((min(var_5, var_8)))));
                arr_62 [i_6] [i_6] [i_17] [17] = 18446744073709551615;
            }
            for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_20 = 2; i_20 < 19;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 19;i_21 += 1)
                    {
                        {
                            arr_71 [i_6] [i_6] [5] [2] [i_17] [i_17] [i_6] = var_6;
                            var_36 = ((var_1 ? (((3279454041 ? var_1 : var_6))) : (min(var_9, ((32329 ? var_3 : 17087))))));
                            var_37 = (min(((min(var_6, 17087))), ((var_10 ? var_6 : 0))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 21;i_23 += 1)
                    {
                        {
                            arr_78 [i_22] [i_17] [i_19] [i_19] = ((!(((var_6 ? var_4 : 1787974809)))));
                            var_38 = (max(var_38, var_7));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_24 = 0; i_24 < 21;i_24 += 1) /* same iter space */
            {
                var_39 = (~var_4);
                arr_81 [i_6] [i_17] [i_17] [3] = 2620159743930267895;
            }
            for (int i_25 = 2; i_25 < 20;i_25 += 1)
            {
                var_40 &= (max(42, 4503599627370495));
                arr_84 [i_6] [i_17] = (((var_2 ? var_3 : var_6)));
                var_41 = (max(var_41, 3172463138));
                var_42 = (max(var_42, var_2));
                var_43 = ((((min(var_3, 208))) ? var_1 : (min(var_10, 16646158))));
            }
            var_44 = var_4;
            /* LoopNest 2 */
            for (int i_26 = 4; i_26 < 20;i_26 += 1)
            {
                for (int i_27 = 1; i_27 < 19;i_27 += 1)
                {
                    {
                        var_45 = (min(10537084158964189446, var_1));

                        /* vectorizable */
                        for (int i_28 = 1; i_28 < 17;i_28 += 1)
                        {
                            arr_93 [9] [3] [i_26] [i_17] = ((-213019036 ? var_2 : var_12));
                            var_46 = 4975;
                            var_47 = (max(var_47, var_10));
                        }
                    }
                }
            }
            var_48 = (((((min(var_4, 131)))) ? 4994 : ((-((var_5 ? 96 : 75))))));
            var_49 = var_4;
        }
    }
    for (int i_29 = 0; i_29 < 21;i_29 += 1) /* same iter space */
    {
        arr_96 [i_29] = (min((min(var_11, var_3)), var_12));
        arr_97 [i_29] = 38;
        var_50 = ((!((max(16, 29625)))));
        /* LoopNest 2 */
        for (int i_30 = 0; i_30 < 21;i_30 += 1)
        {
            for (int i_31 = 1; i_31 < 20;i_31 += 1)
            {
                {
                    var_51 = var_11;
                    arr_102 [i_31] [i_30] [i_29] = var_7;
                    var_52 = ((((((((var_4 ? 245 : 32704))) ? (((8188 ? 1605827907 : 2170831540))) : (min(65473, var_3))))) ? var_6 : 2785318145));
                    arr_103 [i_29] [i_30] [4] = (~var_4);
                }
            }
        }
        var_53 = (min(-103, (((~10) ? (min(var_9, var_3)) : var_1))));
    }
    #pragma endscop
}
