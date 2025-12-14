/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_15 ? var_16 : var_5))) && var_2)) ? (min(((var_13 ? var_11 : var_19)), (((var_18 ? var_16 : var_0))))) : (((var_11 ? var_7 : var_3))));
    var_21 = (var_2 ? (var_11 - 15) : ((8852340082346257200 ? (12 == 228) : var_4)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_22 = ((5324257383930361283 ? 56 : -30));
                        var_23 = (max((min(((var_11 ? var_3 : var_8)), (arr_4 [i_0] [i_2] [i_3]))), (max(((((arr_5 [i_0] [5]) ? 1 : var_0))), (min(var_14, (arr_8 [i_1] [i_0])))))));
                        var_24 |= ((+(min((arr_3 [i_1] [i_1] [i_3]), var_8))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_13 [i_0] = ((var_3 ? (((max(14, 1)))) : (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0]) : ((max(255, var_18)))))));
            arr_14 [i_0] [i_4] = (min(var_11, var_13));
            var_25 = ((~(max((~645671260), var_3))));
        }
        arr_15 [i_0] = min(0, (2355750202317826184 || -12));
        var_26 -= (((max((((arr_3 [1] [i_0] [1]) ? var_13 : (arr_2 [16] [16]))), var_3)) / -var_10));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
            {
                var_27 = var_17;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_29 [i_9] [i_9 - 2] [17] [i_6] [21] [i_6] [1] = 243;
                            var_28 -= ((64 ? (arr_23 [i_5] [i_6] [i_7]) : var_17));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
            {
                arr_32 [i_10] [i_6] [i_10] = (arr_27 [i_5] [i_5] [i_6] [i_10] [i_10]);
                arr_33 [i_10] [i_10] [i_6] [18] = 4294967295;
            }
            var_29 = (((arr_1 [i_5] [i_6]) / (((-(arr_18 [i_5]))))));
            arr_34 [i_5] = ((~(arr_9 [i_5] [i_5] [i_6] [i_6] [i_6] [i_5])));

            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
            {
                arr_37 [i_5] = (((((var_11 | (arr_28 [i_5] [i_5] [i_6] [i_5])))) ? (arr_2 [i_6] [i_6]) : var_8));
                var_30 = ((var_8 > (arr_9 [i_11] [i_6] [i_6] [i_6] [i_5] [i_5])));

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_44 [3] [i_12] [i_13] [i_13] [1] [i_5] = (arr_5 [i_13] [i_13]);
                        arr_45 [i_5] [i_5] [i_13] [i_5] [i_13] [i_11] = ((var_1 >= (arr_19 [i_5])));
                        arr_46 [i_5] [i_5] [i_11] [i_12] [i_13] = (var_7 == var_10);
                        var_31 = (((arr_9 [i_5] [i_5] [i_13] [i_11] [19] [i_13]) ? var_12 : (arr_38 [i_5] [i_6] [i_11] [i_12])));
                    }
                    var_32 = (min(var_32, (((24542 / (arr_8 [i_6] [i_6]))))));
                    var_33 = (arr_31 [i_12] [i_6] [i_6] [i_5]);
                    var_34 += (((arr_39 [i_5] [i_6]) ? (!645671260) : ((var_1 ? var_16 : (arr_8 [i_6] [i_6])))));
                    var_35 = -7;
                }
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
            {
                var_36 = (min(var_36, (arr_12 [i_5] [i_6] [i_6])));
                var_37 = (((var_11 || var_7) ? var_16 : ((var_15 % (arr_30 [i_6] [i_14])))));
            }
            for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        {
                            arr_58 [i_5] [i_17] [1] [i_17] [i_5] = (((arr_20 [14] [i_6]) ? 116 : (arr_56 [i_17] [i_16] [i_15] [i_15] [i_6] [i_6] [i_17])));
                            var_38 += (var_11 + var_1);
                        }
                    }
                }
                var_39 = (((arr_36 [i_5] [i_6] [i_15]) >> (((arr_17 [i_5]) - 158))));
                var_40 = ((var_19 * (arr_2 [i_6] [i_15])));

                for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                {
                    var_41 = (min(var_41, (((1 ? ((var_4 ? var_17 : var_4)) : (arr_55 [i_6]))))));
                    var_42 = (max(var_42, (!1)));
                    var_43 = (((((442277060 ? var_12 : 1))) ? ((-2641925655017435432 ? (arr_47 [1] [1] [1] [8]) : (arr_30 [i_6] [i_6]))) : (arr_11 [i_6])));

                    for (int i_19 = 3; i_19 < 20;i_19 += 1) /* same iter space */
                    {
                        arr_64 [i_5] [i_5] [i_15] [2] = ((var_15 | (arr_12 [i_19 - 2] [8] [i_6])));
                        arr_65 [i_5] [i_5] [i_15] [i_5] [i_19] = (!(arr_61 [i_19 - 3] [i_19 + 3] [i_19] [i_19 + 3] [i_19]));
                        var_44 = ((var_9 ? -var_11 : ((var_18 ? (arr_20 [i_5] [19]) : var_7))));
                        var_45 = (arr_38 [i_5] [5] [i_18] [i_5]);
                        arr_66 [i_19 - 3] [i_18] [i_15] = (((arr_59 [i_15] [i_18] [i_19]) ? var_10 : ((-(arr_30 [i_6] [i_6])))));
                    }
                    for (int i_20 = 3; i_20 < 20;i_20 += 1) /* same iter space */
                    {
                        arr_70 [i_20] [i_18] [i_15] [i_6] [i_5] = ((((((arr_62 [i_5] [i_15] [i_15]) ? var_11 : (arr_52 [i_5] [i_5] [i_18] [i_20])))) ? (arr_60 [i_20 - 3] [i_18] [i_15] [i_6] [i_5]) : (arr_69 [i_20 - 2] [i_18] [i_15] [i_6] [i_5])));
                        var_46 = (min(var_46, (arr_69 [i_20 - 2] [i_20] [i_20 + 2] [i_20 + 2] [i_20 - 3])));
                        var_47 = (max(var_47, -var_17));
                        arr_71 [20] [i_6] [20] [i_18] [20] |= 70;
                    }
                    var_48 += (((((0 ? -116 : -40))) ? (arr_52 [i_5] [i_15] [i_15] [i_5]) : (arr_11 [i_6])));
                }
                for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
                {
                    arr_74 [i_21] [i_21] [i_21] [i_21] [i_21] = (((arr_69 [i_5] [i_21] [i_15] [i_21] [i_5]) ? 0 : (arr_62 [i_21] [i_6] [i_5])));
                    arr_75 [i_21] = (((((var_16 | (arr_60 [i_21] [i_15] [i_6] [i_6] [i_5])))) ? (117 > var_13) : (((var_5 > (arr_12 [i_6] [i_15] [i_21]))))));
                    arr_76 [i_5] [i_6] [i_6] [i_15] [i_6] &= ((-(arr_9 [i_15] [i_6] [i_6] [i_6] [i_6] [i_21])));
                }
            }
        }
        var_49 ^= ((!(arr_9 [i_5] [4] [1] [1] [i_5] [i_5])));
        var_50 = ((90 ? (arr_62 [i_5] [i_5] [i_5]) : (arr_62 [i_5] [i_5] [i_5])));
    }
    var_51 = var_5;
    #pragma endscop
}
