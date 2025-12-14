/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_0 [i_0]) >> (((arr_1 [i_0]) - 4723))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] = (((arr_1 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_4 [i_1] [i_1] [i_1])));
            var_17 = 0;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_1] [i_2] [i_2] = (arr_0 [i_0]);
                        var_18 = ((((arr_8 [i_1] [i_1] [i_2] [i_1]) ? var_3 : var_3)) | (arr_9 [i_3] [i_0] [i_1] [i_0]));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] = ((~(arr_6 [i_0] [i_3 + 1] [i_2] [i_3 + 1])));
                            var_19 += (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
            arr_16 [i_0] [i_0] = (arr_1 [i_0]);
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_5] = ((1 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : 1));
            var_20 = (0 != 42447);
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            arr_22 [i_6] = ((arr_17 [i_0] [i_6]) ? (arr_17 [i_6] [i_0]) : (arr_17 [i_6] [i_6]));
            arr_23 [i_0] [i_6] |= (((arr_6 [i_0] [i_6] [i_6] [i_0]) ? var_0 : (arr_4 [i_0] [i_0] [i_0])));
        }
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    {
                        var_21 ^= (arr_13 [i_9 + 2] [i_9] [i_9 + 2] [i_9] [i_9] [i_9]);
                        arr_30 [i_0] [i_0] [i_8] [i_0] |= ((((arr_10 [i_9] [i_8] [i_7] [i_7] [i_0]) ? (arr_7 [i_7]) : (arr_8 [i_0] [i_7] [i_8] [i_9]))) + (arr_20 [i_8]));
                        var_22 += ((((arr_8 [i_7] [i_9] [i_7] [i_7]) ? (arr_7 [i_7]) : var_9)));
                    }
                }
            }
        }
        var_23 = (max(var_23, (arr_26 [i_0] [i_0] [i_0] [i_0])));

        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_40 [i_0] [i_0] [i_11] [i_0] [i_13] = (arr_10 [i_10] [i_10] [i_10 + 3] [i_12] [i_12]);
                            arr_41 [i_0] [i_10] [i_10] [i_12] [i_11] &= -784018441;
                        }
                    }
                }
            }
            arr_42 [i_0] &= ((arr_31 [i_10 + 1]) ? var_4 : (arr_17 [i_10 + 3] [i_10 - 1]));
        }
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
    {
        arr_46 [i_14] [i_14] = (177 * 1);
        var_24 = (min(((min((max(39577, (arr_31 [i_14]))), (arr_45 [i_14] [i_14])))), -var_13));
        arr_47 [i_14] = (((var_1 ? (arr_6 [i_14] [i_14] [i_14] [i_14]) : (arr_6 [i_14] [i_14] [i_14] [i_14]))) * ((max((arr_6 [i_14] [i_14] [i_14] [i_14]), (arr_6 [i_14] [i_14] [i_14] [i_14])))));
    }
    for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
    {
        var_25 = ((~(min((~var_15), var_3))));
        arr_50 [i_15] [i_15] = ((-((max(119, (arr_20 [i_15]))))));
        var_26 = (max(var_26, ((max(((((max((arr_4 [i_15] [i_15] [i_15]), (arr_43 [i_15])))) ? (((!(arr_24 [i_15] [i_15] [i_15])))) : (arr_38 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))), 12913)))));
        var_27 &= (((((+(((arr_18 [i_15]) / 5550))))) ? -1 : (((!(arr_37 [i_15] [i_15] [i_15]))))));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            arr_55 [i_15] [i_15] [i_15] = ((!var_8) - 5231);
            arr_56 [i_15] = (arr_53 [i_15]);
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            {

                for (int i_19 = 2; i_19 < 19;i_19 += 1)
                {
                    var_28 = (arr_61 [i_19] [i_18] [i_17] [i_17]);
                    var_29 += (((arr_58 [i_18]) && (arr_61 [i_17] [i_17] [i_17] [i_19 + 1])));
                    arr_65 [i_19] [i_18] [i_17] = (arr_61 [i_17] [i_17] [i_19] [i_19]);
                    var_30 += -784018441;
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 21;i_21 += 1)
                    {
                        {

                            for (int i_22 = 0; i_22 < 22;i_22 += 1)
                            {
                                arr_73 [i_20] [i_20] |= var_8;
                                var_31 |= (((1 ? 120 : 1)));
                            }
                            var_32 |= ((-(((arr_67 [i_18]) ? ((-(arr_71 [i_20] [i_17] [i_20] [i_21] [i_21] [i_18]))) : var_8))));
                        }
                    }
                }
            }
        }
    }

    for (int i_23 = 1; i_23 < 15;i_23 += 1)
    {

        for (int i_24 = 2; i_24 < 13;i_24 += 1)
        {
            arr_80 [i_24] = (((((+(max((arr_36 [i_23] [i_24] [i_24] [i_24] [i_23]), var_16))))) ? (((arr_35 [i_23] [i_23]) ? ((max(var_6, var_12))) : ((max(40450, -14))))) : ((min((arr_76 [i_24] [i_24] [i_23 - 1]), (arr_76 [i_24] [i_24] [i_23 + 1]))))));
            var_33 ^= 1;
        }
        var_34 = 0;
    }
    /* vectorizable */
    for (int i_25 = 1; i_25 < 1;i_25 += 1)
    {
        var_35 -= (arr_81 [i_25]);
        var_36 += (arr_81 [i_25]);
        var_37 = (arr_83 [i_25 - 1] [i_25]);
        arr_85 [i_25] = ((-(arr_83 [i_25] [i_25])));
    }
    #pragma endscop
}
