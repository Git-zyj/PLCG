/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 ^= ((var_11 ? 47961 : (arr_2 [i_0] [i_0])));
        var_15 |= ((var_3 ? 34248 : (((arr_1 [i_0]) ? var_9 : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1]);
        var_16 = (arr_3 [i_1]);

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = var_1;
            var_18 -= var_4;
            var_19 = ((var_4 ? (arr_7 [i_1] [i_1] [i_2]) : var_6));
            var_20 *= 31298;
            var_21 *= 31276;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_22 = (max(var_22, (34248 - 196)));
                            var_23 = (arr_3 [i_1 + 1]);
                            var_24 = (min(var_24, var_0));
                            var_25 |= (arr_14 [i_1] [i_1 + 1] [i_1] [i_6] [i_4 + 3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_26 += (arr_24 [i_1 + 1] [i_8]);
                            var_27 = (min(var_27, ((((2229804568 * 34245) ? (arr_11 [i_4 - 1] [i_3] [i_4 - 1]) : (arr_18 [i_4]))))));
                            arr_25 [i_1] [i_3] [i_4] [i_1] [i_8] [i_1 - 1] [i_1] = (((34230 ? var_2 : 29235)));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                arr_28 [i_1] [i_1] [i_1] [i_9] = (((arr_13 [i_1] [i_3] [i_9]) ? (((arr_22 [i_1] [i_1] [i_1]) & (arr_27 [i_1] [i_3]))) : 34226));
                var_28 = 8;
                var_29 += var_6;
            }
            var_30 |= 5133321941100936331;
            var_31 = (min(var_31, (arr_3 [i_1 + 1])));
            var_32 += ((((((arr_26 [i_1] [i_3] [i_1] [i_3]) > var_12))) != 34228));
            arr_29 [i_1] [i_1] = (arr_3 [i_1]);
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_33 &= ((arr_22 [i_1 + 1] [i_1 + 1] [i_1]) ? var_0 : 3796128126480244090);
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_34 = (arr_24 [i_1 + 1] [i_1]);
                            arr_39 [i_1] = -5395381399692097630;
                        }
                    }
                }
            }
            var_35 += (((arr_30 [i_1] [i_1 + 1] [i_1]) ? (arr_9 [i_1] [i_1 + 1] [i_10]) : (arr_9 [i_10] [i_1 - 1] [i_10])));
        }
        for (int i_14 = 2; i_14 < 19;i_14 += 1)
        {
            var_36 += (((((var_7 ? (arr_9 [i_1] [i_1] [i_1]) : (arr_14 [i_14] [i_14] [18] [2] [i_14])))) ? (((arr_35 [i_1] [i_1] [i_1] [0]) ? (arr_18 [i_14]) : (arr_34 [i_14] [i_14] [i_1]))) : 104));
            var_37 = (arr_12 [i_1] [i_14] [i_1 - 1] [i_14]);
            var_38 = (((((-98 ? var_12 : var_3))) ? var_10 : (((arr_3 [i_1]) ? 31310 : 34228))));
            arr_42 [i_1] [i_1] [i_1] = (((arr_40 [i_1] [i_1]) ? (arr_30 [i_14] [i_14 - 1] [i_14 - 1]) : (arr_37 [i_14 + 1])));
            var_39 = (min(var_39, (arr_35 [i_1] [i_1] [16] [20])));
        }
        var_40 -= -5395381399692097630;
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 9;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 10;i_18 += 1)
                {
                    {
                        arr_56 [i_15] [i_18] = (((arr_48 [i_15]) + (((arr_48 [i_18]) ? (((arr_15 [i_15] [i_18] [i_17] [i_18 - 3]) ? var_2 : -48)) : 1))));
                        arr_57 [i_18] [i_17] [i_15] [i_18] = var_5;
                        arr_58 [i_15] [i_18] [i_17 + 1] [i_18] [i_15] [i_18] = 2229804568;
                    }
                }
            }
        }
        arr_59 [i_15] |= var_2;

        /* vectorizable */
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            arr_63 [i_19] = ((((((arr_13 [i_15] [i_19] [i_15]) ? 2520 : -104))) ? ((var_9 / (arr_20 [i_19] [i_19] [i_19] [i_19] [i_19]))) : var_7));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 11;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {
                    {
                        arr_70 [i_15] [i_19] [i_19] = (arr_54 [i_19]);
                        arr_71 [i_19] [i_19] [i_20] [i_19] [i_15] |= 7494;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                for (int i_23 = 3; i_23 < 10;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 7;i_24 += 1)
                    {
                        {
                            arr_80 [i_15] [i_15] [i_22] [i_23] [i_24] [i_15] [i_23] = (arr_79 [i_23 + 1] [i_24] [i_23 + 1] [i_24 + 3]);
                            var_41 *= arr_67 [i_15] [i_15] [i_15] [i_15];
                            arr_81 [i_22] [10] [0] [i_19] [i_22] |= (arr_74 [i_15] [i_22] [i_22]);
                        }
                    }
                }
            }
            arr_82 [i_19] = (((arr_44 [i_15] [i_15]) ? (var_8 | var_8) : ((75 ? 38413 : 5))));
        }
        for (int i_25 = 0; i_25 < 11;i_25 += 1)
        {
            var_42 += var_11;
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 11;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 11;i_27 += 1)
                {
                    {
                        var_43 = (max(var_43, (arr_77 [i_25])));
                        var_44 = (max(var_44, ((((-103 ? (arr_48 [i_15]) : (arr_48 [i_25])))))));
                    }
                }
            }
        }
        arr_91 [i_15] [i_15] |= (((((var_4 ? ((var_13 ? (arr_30 [i_15] [i_15] [i_15]) : var_13)) : 90))) ? (arr_27 [8] [i_15]) : ((58061 ? var_6 : -2236663156077626129))));
        var_45 = (((((((var_12 ? (arr_4 [i_15]) : var_12))) ? ((640511393 ? var_12 : var_6)) : (arr_45 [i_15]))) - 4294967289));
    }
    var_46 |= ((var_4 ? -105 : var_2));
    var_47 |= var_4;

    for (int i_28 = 2; i_28 < 9;i_28 += 1) /* same iter space */
    {
        var_48 |= (arr_92 [10]);
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 12;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 12;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 12;i_31 += 1)
                {
                    {
                        arr_104 [i_28] [i_28] [i_28] [i_31] = (2236663156077626143 + 12);
                        arr_105 [i_28] [i_29] [i_29] [i_28] [i_28] &= var_0;
                        var_49 += (arr_102 [i_28] [i_29] [i_30] [i_31]);
                    }
                }
            }
        }
        arr_106 [i_28] = 12;
        var_50 += ((((34227 + var_12) ? (arr_9 [i_28] [i_28] [9]) : var_3)));
    }
    for (int i_32 = 2; i_32 < 9;i_32 += 1) /* same iter space */
    {
        var_51 = (max(var_51, (arr_1 [i_32])));
        arr_109 [i_32] [5] = var_8;
        var_52 = (min(var_52, ((((arr_27 [14] [i_32]) ? (arr_93 [i_32]) : (arr_22 [i_32] [i_32] [i_32]))))));
    }
    #pragma endscop
}
