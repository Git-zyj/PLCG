/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1024526301;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 *= var_8;
                arr_6 [i_1] [i_1] [i_0] = (min(1, var_3));
                arr_7 [1] [i_0] = var_6;
            }
        }
    }

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = 0;
        var_13 = (65535 <= 65535);
        var_14 = var_7;

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_15 = (max(var_15, (((((((min(39111, var_2))) ? (max(2, 2901897094526150371)) : var_1)) >= 135)))));
            var_16 *= (min(65535, 21));
            arr_14 [9] [i_3] = (min(((min((min((arr_12 [i_2] [i_3]), -16522)), (arr_9 [i_3] [i_2])))), (max(var_1, var_7))));
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_17 = (((-((23 ? 22 : (arr_11 [i_5] [i_5]))))));
                            var_18 &= var_4;
                            var_19 = ((-16361 ? 214 : 65518));
                        }
                    }
                }
            }
            arr_28 [i_4] = (((1 ? (max(var_7, var_4) : (arr_2 [1] [1])))));
            var_20 = (min(var_20, (((min(18446744073709551615, (((48013 ? 17 : 1)))))))));
        }
        arr_29 [5] &= (((max(var_1, (arr_11 [i_4] [8])))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 9;i_10 += 1)
            {
                {

                    for (int i_11 = 3; i_11 < 10;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_21 = var_6;
                            var_22 = var_0;
                            var_23 = 132;
                            arr_42 [i_4] [2] [2] [6] [i_11] [i_11] [i_12] = (arr_23 [i_11 - 3] [i_11] [i_9 - 4]);
                        }
                        var_24 &= ((-(65378 || 9223372036854775797)));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {

                        /* vectorizable */
                        for (int i_14 = 2; i_14 < 8;i_14 += 1)
                        {
                            var_25 = 3098;
                            var_26 = (min(var_26, ((~(((arr_38 [0] [i_10 - 3] [i_9]) ? var_9 : 19))))));
                            var_27 = ((arr_39 [i_14 + 2] [i_13] [i_13] [i_13] [i_9 + 1] [i_4]) != var_2);
                        }
                        var_28 = (arr_32 [i_10] [i_4]);
                        var_29 *= (arr_5 [i_4] [i_9] [i_10]);
                    }
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        arr_51 [i_15] [i_10] = -44;
                        var_30 = var_3;
                        var_31 = ((!(arr_50 [i_15] [i_4] [i_4] [i_4])));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_57 [i_4] [i_4] [7] [1] [i_10] [7] [10] = (max((((((-27 ? 71 : 65535)) ^ (arr_39 [i_17] [4] [1] [1] [i_9] [i_4])))), (min((~var_0), (0 & var_6)))));
                                var_32 *= ((-((max(var_5, var_1)))));
                                arr_58 [i_9] [10] [i_9] = (((max((arr_0 [i_10 + 2]), (arr_35 [i_10] [i_10] [i_10 + 2] [i_9 - 4]))) == (((min(17534, (var_6 < 4050605964)))))));
                                arr_59 [i_4] [i_9] [i_9] [i_16] [i_17] = (max((max(((max(var_7, 4219926183))), 9937283181284499360)), (((arr_46 [0] [i_10 - 3] [i_10 - 3] [i_16 + 1] [i_17]) ? (var_3 && 55897) : 18446744073709551615))));
                            }
                        }
                    }
                    arr_60 [i_10 - 3] &= var_3;
                    arr_61 [i_4] = 7;
                }
            }
        }
    }
    for (int i_18 = 3; i_18 < 9;i_18 += 1)
    {
        arr_64 [i_18] = var_6;
        arr_65 [i_18] [7] = arr_38 [i_18] [i_18 - 1] [i_18];
    }
    for (int i_19 = 4; i_19 < 17;i_19 += 1)
    {
        arr_68 [i_19] [i_19] = (((arr_11 [i_19 - 3] [i_19 - 3]) + ((min(22369, (arr_11 [i_19 - 4] [i_19 - 1]))))));
        /* LoopNest 3 */
        for (int i_20 = 2; i_20 < 17;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 16;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 16;i_22 += 1)
                {
                    {
                        var_33 = (~75041112);
                        arr_81 [i_19] [i_19] [i_22] = ((-var_9 ? ((max(4445, (~1)))) : ((+((var_2 ? (arr_69 [i_21 - 1] [i_19]) : 4018289066))))));
                        arr_82 [i_19] [i_19] [i_19] = ((((((((max(var_2, (arr_72 [i_21] [i_21] [4]))))) ^ (min(0, var_1))))) ? var_10 : (((56017 ^ var_3) ? (var_4 & var_1) : (arr_70 [13])))));
                    }
                }
            }
        }
        arr_83 [i_19] [i_19] = (max((min((arr_79 [i_19 - 3] [i_19 - 1] [i_19 - 4] [i_19 - 1]), ((-3697117893682357940 + (arr_66 [4]))))), (min(((var_7 ? var_3 : (arr_12 [i_19] [i_19]))), var_0))));
    }
    #pragma endscop
}
