/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((min(var_5, var_8))) ? var_1 : ((max(-21962, 0))))) + (max(var_1, var_3))));
    var_11 = (((var_7 ? (313262052 + var_8) : var_1)));
    var_12 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 -= ((((1077996886 || (arr_3 [i_0])))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] |= (((arr_0 [i_3] [i_1 + 3]) % ((var_7 ? (arr_4 [i_0] [i_1] [i_1]) : 7))));
                            }
                        }
                    }
                    var_14 = ((arr_2 [i_1 + 2] [i_0]) * (arr_11 [i_0] [i_0] [i_1 + 4] [i_1 + 4]));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [1] [1] |= 65535;
                        var_15 &= (((arr_15 [6] [i_2] [i_2]) == 1077996886));
                    }
                    for (int i_6 = 4; i_6 < 20;i_6 += 1)
                    {
                        var_16 -= var_9;
                        var_17 = (max(var_17, (((!(((0 * (arr_5 [6] [6] [i_2])))))))));
                        arr_20 [i_6] [i_2] = (arr_12 [i_2] [i_2] [i_2] [i_2] [i_6]);
                        var_18 = (max(var_18, (((-(arr_3 [14]))))));
                    }
                    var_19 = (((arr_16 [i_0] [i_0] [i_0] [i_1 + 4]) == (arr_16 [i_1] [i_1] [15] [i_1 + 4])));
                }
            }
        }
        arr_21 [i_0] [i_0] = arr_9 [i_0] [i_0] [i_0] [12];
        var_20 = (arr_2 [i_0] [i_0]);
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_7] [6] [i_7] [2] [i_9] = (arr_31 [i_7] [i_7] [i_7] [i_7] [i_7]);
                            var_21 = (((arr_18 [i_11] [i_11 - 1] [i_11 - 2] [i_11 - 2]) ? var_5 : var_5));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 19;i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_7] [i_7] [i_7] [2] [i_7] |= (((((-1 ? 2051801141 : (arr_8 [i_7])))) != (((arr_28 [18] [i_7] [i_8] [16]) ? (arr_14 [i_7] [1] [i_9] [i_7]) : (arr_27 [i_7])))));
                            var_22 = ((!(arr_12 [17] [i_12 - 2] [i_12 - 2] [8] [i_9])));
                        }
                        arr_42 [i_7] [i_7] &= (max(4156557163, 0));
                    }
                }
            }
        }
        arr_43 [i_7] [5] = ((-(min(1810671234, 1077996886))));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        var_23 -= (!-1);
                        var_24 = (max(var_24, (arr_29 [i_13])));
                        arr_53 [i_13] [i_13] [1] [i_7] &= (arr_32 [i_7] [i_7] [4]);
                        var_25 = (~var_9);

                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            arr_58 [i_7] [i_13] [i_7] [1] [19] [i_7] [i_13] = ((!(arr_9 [i_13] [i_13] [i_13] [i_14 + 3])));
                            var_26 += (arr_30 [i_7] [i_16]);
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_27 = (((((arr_3 [i_7]) == (arr_8 [i_15]))) && (arr_35 [i_14] [6] [i_14 + 2])));
                            var_28 = (max(var_28, (((((((arr_27 [i_7]) || (arr_40 [i_7] [i_14] [i_14] [i_7] [i_17] [i_14] [i_7]))))) >= var_0))));
                            var_29 *= (((arr_51 [17] [i_13] [i_14] [17] [17] [i_13]) == (arr_40 [i_14 + 1] [i_14 + 1] [19] [i_14] [i_14 + 2] [i_15] [i_14])));
                        }
                    }
                }
            }
            var_30 |= (((arr_15 [i_13] [i_13] [i_13]) % (arr_15 [i_7] [i_7] [18])));
            /* LoopNest 3 */
            for (int i_18 = 1; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 20;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            var_31 = (max(var_31, (arr_64 [i_7])));
                            var_32 = (max(var_32, (36277 - -21859)));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 20;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 21;i_23 += 1)
                    {
                        {
                            var_33 = (max(var_33, ((((arr_71 [i_21] [i_22 - 1] [i_22 - 1] [i_22 - 1]) ? (arr_7 [i_7] [i_22 + 1] [i_7]) : (arr_61 [i_7] [1] [i_22 - 1]))))));
                            var_34 -= (!18);
                            arr_82 [20] [8] [i_7] [8] [8] |= (arr_27 [i_22]);
                            var_35 = ((((((arr_51 [i_7] [i_13] [i_7] [11] [i_13] [11]) || (arr_59 [i_7] [1] [9]))))) / (((arr_78 [13]) * (arr_2 [i_7] [8]))));
                            arr_83 [i_7] [i_7] [i_13] [i_13] [i_7] [i_22 - 1] [i_23] &= (((((arr_37 [6] [6] [6] [i_7]) / var_6)) * (arr_44 [i_13])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_24 = 1; i_24 < 20;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 21;i_25 += 1)
                {
                    {
                        var_36 = -5597167133428542912;
                        var_37 = (max(var_37, ((~((((arr_68 [i_25]) && (arr_64 [i_7]))))))));

                        for (int i_26 = 2; i_26 < 20;i_26 += 1)
                        {
                            var_38 = (max(var_38, (arr_37 [i_24] [i_24] [i_24] [i_7])));
                            var_39 = ((+(((arr_73 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_26]) * 3776160444))));
                        }
                        for (int i_27 = 0; i_27 < 21;i_27 += 1)
                        {
                            var_40 = (max(var_40, (((!(arr_12 [14] [i_13] [i_24 - 1] [i_25] [i_7]))))));
                            var_41 = 4294967295;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
