/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [14] [i_2] = var_8;
                    var_15 -= (((((arr_9 [i_1] [i_2 - 1] [i_2]) ? (arr_7 [i_0] [i_0]) : ((160 ? 6518317544325599511 : -8028382431228696114)))) < ((max(var_5, (((arr_4 [i_0] [i_1]) ? var_2 : var_6)))))));
                    arr_11 [i_0] [i_0] [i_0] |= (max(((((((arr_6 [i_1 - 1] [14]) ? (arr_8 [4] [4] [i_0] [16]) : var_11))) && var_12)), ((!((max(121, var_12)))))));
                    var_16 = ((((((((arr_5 [i_0] [i_1]) ? var_7 : (arr_7 [i_2] [i_2])))) && (((arr_1 [i_1] [5]) && var_11)))) ? (arr_5 [i_1 - 2] [i_1 - 2]) : (((!(arr_2 [i_1 + 1]))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = var_11;
        arr_16 [i_3] [i_3] &= ((arr_7 [i_3] [10]) ? (arr_3 [i_3] [i_3] [i_3]) : (var_9 + var_1));
        arr_17 [i_3] = ((((((((arr_7 [i_3] [0]) + 2147483647)) << (((((arr_14 [i_3]) + 10917)) - 8))))) != var_4));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_22 [i_3] = 31494;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_29 [i_3] [i_3] [i_5] [8] = ((!(arr_28 [1] [i_6] [9] [i_3] [i_3])));
                        var_17 = arr_14 [i_3];
                        var_18 &= var_5;
                        var_19 = (!var_4);
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 10;i_7 += 1)
        {
            var_20 *= var_8;
            arr_32 [1] = (!var_0);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_38 [i_3] [i_7 - 1] [i_3] [i_9] [i_3] [i_8] |= (((~var_6) - var_11));
                        var_21 = ((var_7 >> (!32227)));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_41 [i_10] = ((+(((arr_28 [i_10] [i_10] [i_10] [i_10] [i_10]) ? (arr_14 [1]) : (((arr_28 [i_10] [i_10] [i_10] [0] [i_10]) * (arr_36 [i_10] [i_10] [i_10] [i_10] [1] [10])))))));
        var_22 = ((((-var_4 / (((min(var_9, var_12)))))) >= (arr_19 [i_10] [i_10])));
        arr_42 [i_10] [i_10] &= ((((var_12 + (arr_0 [i_10] [i_10]))) / var_12));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 9;i_12 += 1)
            {
                {

                    for (int i_13 = 1; i_13 < 9;i_13 += 1)
                    {
                        arr_49 [i_13] = (min(var_12, (var_3 - var_7)));
                        var_23 = var_12;

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_24 = (arr_35 [9] [i_12 - 1] [i_13] [3]);
                            arr_52 [i_13] [1] [i_12] = (max(var_10, ((~(arr_21 [i_12 - 1] [i_13 + 1] [i_12 - 1])))));
                            arr_53 [i_13] [i_11] [9] [i_11] = -var_13;
                        }
                        arr_54 [i_10] [i_13] [i_12] [i_10] = (-24204 + 8);
                        arr_55 [i_10] [8] [i_11] [i_13] [i_13] [0] = var_12;
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        arr_59 [i_10] [2] = var_13;
                        arr_60 [i_10] [i_10] [i_10] [i_10] = var_0;
                    }
                    for (int i_16 = 1; i_16 < 9;i_16 += 1)
                    {
                        var_25 ^= (((var_5 != (max((arr_2 [i_11]), var_13)))) ? ((-(((arr_30 [i_11]) / var_4)))) : (((min((arr_34 [6] [i_11]), var_4)) / (((var_6 ? var_6 : var_9))))));
                        arr_65 [i_10] [i_10] = ((((+(((arr_35 [i_10] [i_10] [i_10] [i_10]) ? (arr_40 [i_12 - 2]) : var_11)))) - ((((99 == (((3464096716271193062 || (arr_64 [i_10] [i_11] [i_12] [i_10]))))))))));
                        arr_66 [i_12 - 4] = var_9;
                    }
                    arr_67 [8] [i_10] = -32230;
                }
            }
        }
    }
    var_26 = (-5264132617163407871 | var_5);
    #pragma endscop
}
