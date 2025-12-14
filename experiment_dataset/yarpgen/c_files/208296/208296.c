/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 &= ((!(arr_1 [i_0])));
        arr_2 [i_0] |= -var_1;
        var_14 = (min(var_14, ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_0] = (!38752);
                            arr_16 [i_0] [i_0] [i_1] [i_3] [i_4] = 36056;
                            arr_17 [i_1] = 96922710;
                            var_15 = (((arr_13 [i_0] [i_3] [i_4]) ? (arr_1 [i_0]) : (arr_13 [i_0] [i_1] [i_2])));
                        }
                        var_16 = (arr_4 [i_1]);
                        var_17 = ((!(arr_12 [5] [i_2] [5] [i_2])));
                    }
                }
            }
        }
        arr_18 [0] [i_0] = (15488582027627103204 & 3191862869);
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_27 [i_7] [1] [i_7] [i_7] = (max(((((arr_25 [i_5] [i_5] [i_5] [i_6]) == (((25 * (arr_23 [i_5]))))))), 8725724278030336));
                    var_18 |= var_4;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_19 = (min(13655122358043858025, (((13 % 124) % 1))));
                    var_20 = ((!((((arr_23 [i_5]) * 1)))));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_21 = ((((((arr_30 [i_10] [i_10]) < (arr_30 [i_10] [i_10])))) | (((arr_30 [i_10] [i_10]) / (arr_30 [i_10] [i_10])))));
        arr_36 [i_10] = ((((max((24 & 53215), (~0)))) ? (((~(arr_20 [i_10])))) : ((((((arr_21 [i_10] [2]) ? 13662 : (arr_21 [i_10] [i_10])))) ? (((arr_34 [i_10]) ? 218 : var_8)) : ((min(1, -1)))))));
        arr_37 [i_10] = (max(19, (arr_22 [i_10] [i_10] [i_10])));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                {
                    arr_47 [i_12] [i_11] [i_12] = (arr_45 [i_11]);
                    var_22 = (((arr_44 [i_13 - 2] [i_12] [i_13] [i_13]) * (((65517 ? (arr_28 [i_12] [1]) : (arr_24 [i_11]))))));
                    var_23 = ((2199023251456 ? 16289 : 18446744073709551599));
                    var_24 = ((!(arr_31 [i_12] [i_13 + 1] [i_13 - 1])));
                    arr_48 [i_11] [i_12] [i_13 - 2] [i_12] = 3001436387;
                }
            }
        }
        var_25 = ((-3425025230426395559 == (arr_31 [0] [i_11] [i_11])));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    {
                        arr_57 [i_11] [i_11] [i_14] [i_15] [i_16] = -32754;
                        arr_58 [i_15] = ((!(arr_40 [i_11])));
                        var_26 -= var_8;
                        var_27 = (((((0 ? (arr_29 [6] [6]) : 6375407283629679824))) ? (arr_38 [i_16]) : ((-2199023251457 ? (arr_35 [i_11]) : (arr_43 [i_11] [i_14])))));
                    }
                }
            }
        }
        arr_59 [i_11] = ((!(arr_50 [i_11] [i_11])));
        var_28 = (arr_23 [i_11]);
    }
    #pragma endscop
}
