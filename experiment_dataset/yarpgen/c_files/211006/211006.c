/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((((var_14 ? var_7 : var_8)) + 9223372036854775807)) << (var_3 - 5632)))) ? (var_7 - var_8) : var_13);
    var_18 = (max(-19409, var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 ^= (max(((~(((arr_0 [i_0]) ? var_7 : 1)))), ((var_16 ? (min((arr_0 [i_0]), var_7)) : (((((arr_1 [1] [i_0]) <= var_0))))))));
        var_20 = (min(var_20, (max((((((min(1, (arr_0 [i_0])))) <= var_16))), (((var_3 == 26892) ? var_11 : (arr_0 [i_0])))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = min((max((arr_3 [i_0]), var_0)), (((((max((arr_0 [i_0]), 1))) < ((8870 ? var_15 : var_13))))));
            var_21 += ((-(((max((arr_2 [6]), 26905)) / (arr_1 [i_0] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = (min(var_22, (arr_5 [i_2] [i_0] [0])));
            arr_9 [i_0] = var_16;
            arr_10 [i_0] [i_2] [i_2] = (((((min(var_11, (arr_7 [i_2] [i_2] [i_0]))) * ((((arr_6 [i_0] [i_0]) > (arr_6 [i_2] [i_2]))))))) & (((arr_2 [i_0]) ? (arr_5 [i_0] [i_2] [10]) : (arr_2 [i_0]))));
        }

        /* vectorizable */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            arr_14 [i_3] [i_0] [i_0] = ((var_6 ^ (((arr_0 [i_0]) & (arr_8 [i_0] [i_3])))));
            var_23 |= (((((arr_11 [1]) / -1882359816285239302)) < (((((arr_11 [i_0]) != (arr_11 [i_0])))))));
            arr_15 [i_0] [7] &= (arr_8 [i_0] [i_0]);
            var_24 = (max(var_24, ((((0 != 1) ? -1261835489190393325 : var_0)))));
        }
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_25 = (max(var_25, ((min((arr_16 [i_4]), (min((arr_16 [i_4 + 1]), (1882359816285239309 > 32512))))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_20 [i_4] = -1;
            arr_21 [i_4] = arr_18 [i_4 - 1] [i_4] [14];
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_26 = arr_23 [i_4] [i_6];
            var_27 = (max(var_27, ((((arr_16 [i_4 + 1]) ? (((arr_17 [6]) ? var_8 : (arr_19 [0] [i_4] [i_6 + 3]))) : (((var_9 > (arr_18 [i_6] [i_4] [i_4 - 1])))))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_27 [15] [i_7] [i_4] = (-(arr_23 [i_4] [i_4]));

            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                arr_30 [i_4] [i_4] [i_7] [1] = (arr_29 [i_4] [i_4] [i_4]);
                var_28 = ((24696 == var_13) >= (arr_25 [i_4 + 1] [i_4 - 1] [i_8 - 2]));
                arr_31 [i_4] = -32767;
                var_29 = (((arr_24 [i_4 + 1] [i_8 - 1]) && (arr_24 [i_4 - 1] [i_8 + 1])));
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                arr_35 [i_4] [i_7] [i_7] = (((((55941 ? (arr_16 [16]) : var_7))) || ((((arr_25 [1] [i_7] [i_4 - 1]) ? var_16 : (arr_18 [i_4] [i_4] [i_4]))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_42 [i_4] [i_7] [3] [i_4] [i_11] = ((251925837764716030 ? (-426115159 < 47404) : (arr_17 [i_4])));
                            arr_43 [i_4] [i_4] [i_9] [i_4] [i_11] = (1 | (arr_26 [i_4 + 1] [i_9 + 1]));
                            var_30 -= (((((~(arr_24 [i_7] [i_7])))) ? (arr_16 [i_9 + 1]) : (var_5 == var_5)));
                        }
                    }
                }
            }
            for (int i_12 = 4; i_12 < 23;i_12 += 1) /* same iter space */
            {
                var_31 = (arr_33 [i_4] [i_7] [i_12] [i_12]);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            arr_52 [i_4] [i_4] [i_4 - 1] [i_4] [i_4] = (arr_32 [i_12 + 1] [i_13] [i_14]);
                            arr_53 [i_14] [18] [i_4] [i_4] [i_4] [i_4] = ((((var_6 ? var_10 : 19900)) != (arr_29 [i_4] [i_4 - 1] [i_4 + 1])));
                            arr_54 [i_4] [i_4] [i_4] [4] [i_4 + 1] [i_12 - 4] [4] = ((var_6 | (arr_29 [i_4 - 1] [i_4 + 1] [i_4])));
                        }
                    }
                }
                var_32 = ((-var_3 ? var_3 : var_12));
            }
            for (int i_15 = 4; i_15 < 23;i_15 += 1) /* same iter space */
            {
                var_33 = (max(var_33, var_11));

                for (int i_16 = 1; i_16 < 20;i_16 += 1)
                {
                    var_34 = (var_10 * (arr_45 [i_15 - 4] [i_15 - 4] [i_4 + 1]));
                    arr_61 [i_4] [1] [i_15 - 2] [i_16 - 1] = arr_33 [i_4] [i_15 - 3] [i_4 - 1] [i_4];
                    arr_62 [i_4] [i_7] [i_4] = 0;
                    arr_63 [i_16] [i_4] [i_4] [i_4] = (arr_34 [i_4] [18] [i_15] [i_15]);
                    arr_64 [i_4] [i_4] [i_4] [i_4] = (arr_59 [21]);
                }
                for (int i_17 = 3; i_17 < 21;i_17 += 1) /* same iter space */
                {
                    arr_67 [i_4 + 1] [i_4] [i_4 + 1] [i_17 + 3] = 0;
                    arr_68 [i_4] [i_15] [i_4] = (-((-(arr_40 [i_17 + 3] [i_7] [i_7] [i_4] [i_4 + 1]))));
                    var_35 = (min(var_35, ((((arr_66 [i_17 + 2] [i_15 + 1] [i_15] [i_15] [i_15] [i_15]) / (arr_18 [i_15] [i_15] [i_15]))))));
                }
                for (int i_18 = 3; i_18 < 21;i_18 += 1) /* same iter space */
                {
                    var_36 = (max(var_36, (arr_32 [i_18] [1] [5])));
                    var_37 &= (((arr_65 [i_18 - 3] [i_18] [i_18] [i_18]) <= (arr_65 [i_18 - 3] [i_18] [i_18] [i_18])));
                    arr_71 [i_4 + 1] [i_4 + 1] [i_15] [i_4] [i_4 + 1] = (arr_38 [i_18] [i_15 - 3] [i_4 - 1]);
                    arr_72 [i_15] [i_7] [i_15] &= var_1;
                }
            }
        }
        arr_73 [i_4] = var_9;
    }
    for (int i_19 = 1; i_19 < 23;i_19 += 1) /* same iter space */
    {
        arr_78 [10] [0] |= (14 - 65535);
        arr_79 [i_19] = var_3;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 23;i_21 += 1)
            {
                {
                    var_38 = (max(var_10, (1 && var_6)));
                    var_39 = ((1321624795 ? ((((((arr_57 [i_20] [i_19]) ? 14533 : (-2147483647 - 1)))) ? (min((arr_33 [i_19] [i_20] [i_20] [i_20]), (arr_51 [i_19] [i_20] [i_21 + 1] [i_19] [i_20] [i_19 - 1] [i_20]))) : var_8)) : 1));
                    arr_86 [i_20] [i_19] [i_20] = ((((((var_14 != var_5) <= (min((-2147483647 - 1), -19900))))) < ((min((arr_70 [i_19] [i_20] [i_19]), 1)))));
                }
            }
        }
    }
    var_40 = max((((((-6148509001524320888 ? -1887521138 : 2961866447733146765))) ? var_1 : var_12)), var_4);
    #pragma endscop
}
