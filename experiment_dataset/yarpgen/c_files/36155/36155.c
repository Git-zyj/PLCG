/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = ((~(max((arr_1 [i_0]), (arr_7 [i_0] [i_1] [i_2])))));
                    var_14 = ((((arr_3 [i_0] [i_2]) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_1] [i_2]))));
                    arr_9 [i_0] [i_0] [i_2] = ((((min((arr_1 [i_1]), ((((arr_6 [i_0] [15] [i_2]) ? var_8 : var_1)))))) && ((max((~1), (arr_4 [i_0] [i_0] [i_0]))))));
                    var_15 = (min(var_15, (((+(min((arr_7 [i_0] [i_1] [i_2]), (arr_5 [12]))))))));
                    arr_10 [i_0] [i_1] [i_2] [i_1] = (((min(var_1, 1))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] = (arr_11 [i_3]);
        var_16 = (max(var_16, ((max((arr_12 [i_3]), (((arr_12 [i_3]) - (arr_12 [i_3]))))))));
        arr_14 [i_3] = (min((min(var_1, (arr_11 [i_3]))), var_13));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    {
                        var_17 = (arr_24 [i_7] [i_6] [i_7 + 1] [i_7] [i_7 - 1]);
                        arr_26 [i_4] [i_6] [i_6] [1] [i_7] = -19;
                    }
                }
            }
        }
        arr_27 [i_4] = (~1);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_18 = (max(var_18, (((((((arr_30 [i_9]) ? (arr_12 [i_8]) : (arr_30 [i_9])))) * 1)))));
            var_19 = (arr_29 [i_8] [i_8]);
            var_20 = (arr_31 [i_8] [i_9] [i_8]);

            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                arr_35 [i_8] [i_9] [i_9] [i_8] = (!var_3);
                var_21 = (arr_31 [i_10] [i_10] [i_10]);
                var_22 = (min(var_22, 1));
                arr_36 [i_8] [i_9] [i_10] = (arr_34 [i_8] [i_9] [i_10]);
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                var_23 = (min(var_23, (arr_34 [i_9] [i_9] [i_9])));

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_24 = ((var_1 ? (arr_38 [i_8]) : (arr_38 [i_9])));
                    var_25 = (min(var_25, (arr_37 [i_9] [i_9] [i_9] [i_12])));
                }
            }
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_26 = (min(var_26, var_8));
                            arr_49 [i_8] [i_8] [i_8] [i_14] [i_8] = (1 ? -var_6 : 1);
                            arr_50 [i_8] [i_9] [i_13] [i_14] [i_8] = (i_8 % 2 == zero) ? ((((arr_43 [i_15] [i_14] [i_13] [i_9]) << (((arr_30 [i_8]) - 129))))) : ((((arr_43 [i_15] [i_14] [i_13] [i_9]) << (((((arr_30 [i_8]) - 129)) + 47)))));
                        }
                    }
                }

                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    var_27 = (min(var_27, ((((arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (((67108863 >> (((arr_34 [i_9] [i_9] [i_9]) + 7718))))) : (arr_31 [i_8] [i_9] [i_16]))))));
                    var_28 = (min(var_28, ((((arr_40 [i_8] [i_9]) == (arr_53 [i_8] [i_8] [13] [i_8]))))));

                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        arr_56 [i_8] [i_8] [i_9] [i_8] [i_16] [i_17] [i_8] = (arr_52 [i_16] [i_9] [i_13] [i_16] [i_8] [i_9]);
                        var_29 = (arr_38 [i_17]);
                    }
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        arr_61 [i_8] [i_13] [i_13] [i_13] [i_9] [i_8] = (((arr_54 [i_8] [i_8] [i_8]) ? (arr_28 [i_8]) : 1));
                        arr_62 [i_9] [i_13] [i_9] [i_8] = (arr_53 [i_8] [i_9] [i_8] [i_16]);
                    }
                    var_30 = (((arr_31 [i_8] [i_8] [i_8]) ? var_4 : var_9));
                }
            }
        }
        for (int i_19 = 0; i_19 < 19;i_19 += 1) /* same iter space */
        {

            for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
            {
                var_31 = ((-(((arr_65 [i_8] [i_20]) << (var_7 - 802308881)))));
                var_32 = arr_12 [i_19];
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 19;i_22 += 1)
                    {
                        {
                            arr_72 [7] [7] [i_20] [10] [i_20] [i_8] = ((var_11 ? var_12 : (var_10 - 1)));
                            arr_73 [i_8] [i_20] [i_8] [i_8] = var_5;
                        }
                    }
                }
                var_33 = var_2;
            }
            for (int i_23 = 0; i_23 < 19;i_23 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 18;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 19;i_25 += 1)
                    {
                        {
                            var_34 = 1;
                            arr_85 [i_8] [i_19] [i_8] [i_19] [i_8] = (arr_83 [i_24 + 1] [i_24] [i_24 + 1] [i_25] [i_24 + 1] [i_24 + 1] [i_25]);
                            arr_86 [i_8] [i_24] [i_23] [i_24 - 1] [i_8] [i_8] [i_23] = (arr_48 [i_23] [i_8]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 19;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 19;i_27 += 1)
                    {
                        {
                            var_35 = (189 ^ 32767);
                            var_36 = (max(var_36, (arr_64 [i_8] [12] [12])));
                            arr_94 [i_8] [i_8] [i_8] [i_26] [i_26] [i_26] [i_26] = (!var_10);
                            var_37 = (min(var_37, (!var_2)));
                            var_38 = (min(var_38, 8388544));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 19;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 19;i_29 += 1)
                    {
                        {
                            arr_101 [i_8] [i_8] [i_8] [i_28] [i_8] = ((0 ? 0 : 1));
                            arr_102 [i_8] [i_8] [i_8] [4] [i_8] = var_7;
                            var_39 = (max(var_39, (arr_29 [i_19] [i_23])));
                            arr_103 [i_8] [i_8] [i_8] [i_8] [4] = (((((var_4 ? (arr_89 [i_8] [i_19] [i_23] [i_19] [i_29]) : 4294967293))) ? (arr_75 [i_8] [i_29] [i_23]) : (((((arr_75 [i_8] [i_8] [i_8]) > 1))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 19;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 19;i_31 += 1)
                {
                    {
                        var_40 = (min(var_40, (((-(arr_46 [i_19] [i_19] [i_19] [i_19]))))));
                        var_41 = (max(var_41, (arr_46 [i_19] [i_19] [i_8] [i_19])));
                        var_42 = var_0;
                    }
                }
            }
            arr_109 [i_8] [i_8] = (arr_70 [i_8] [9] [i_8]);
            var_43 = (min(var_43, (arr_47 [i_19] [i_19] [i_8])));
        }
        for (int i_32 = 0; i_32 < 19;i_32 += 1) /* same iter space */
        {
            var_44 = (max(var_44, ((var_13 ? (arr_69 [i_8] [i_32] [i_32] [i_8] [i_32]) : var_1))));
            var_45 = (max(var_45, var_7));
            var_46 = (min(var_46, (arr_107 [i_8] [i_32] [i_32])));
            var_47 = ((var_12 % (arr_47 [i_8] [i_8] [i_8])));
        }
        for (int i_33 = 0; i_33 < 19;i_33 += 1) /* same iter space */
        {
            var_48 = (arr_37 [i_8] [i_8] [i_8] [i_33]);
            arr_116 [i_8] = var_5;
        }
        var_49 = (arr_88 [i_8] [i_8] [i_8] [i_8]);
        arr_117 [i_8] = (arr_32 [i_8]);
    }
    var_50 = ((min(255, var_10)));
    #pragma endscop
}
