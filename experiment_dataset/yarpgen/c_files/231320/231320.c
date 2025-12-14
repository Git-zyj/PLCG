/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((0 ? (var_2 > var_6) : var_11))) ? var_5 : var_2));
    var_15 = (max(((((var_4 ^ var_5) ^ (~var_2)))), (((~var_7) & (min(59, var_7))))));
    var_16 = ((~(min((((var_12 ? var_9 : 1))), ((262144 ? var_13 : var_6))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = var_5;
                    var_18 = var_11;
                }
            }
        }
        var_19 -= 1;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    arr_15 [i_3] [i_4] [i_3] = (arr_9 [i_3]);
                    var_20 = ((-63 ? 3930649713 : ((((!(arr_9 [i_3])))))));
                    arr_16 [i_3] = ((((7631319511762424440 ? (arr_10 [i_4] [i_4]) : var_4)) & ((85 ? (arr_13 [i_3] [i_3] [i_3]) : -4369919550959898835))));
                }
            }
        }
        arr_17 [i_3] = (((((arr_8 [i_3]) - -3))) ? (arr_14 [i_3] [i_3] [i_3]) : (arr_8 [i_3]));
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_21 ^= (((((arr_18 [i_6 - 1]) ? 145 : 3930649713))) ? (((max(var_7, 2047212534)) + (((max(var_4, (arr_18 [i_6]))))))) : ((min(-977614218, var_9))));

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_22 -= (((arr_18 [i_7]) + var_13));
                var_23 = var_2;
                arr_26 [i_8] = (((((min(var_1, 2190766408914579291)) ? (min((arr_24 [i_8]), var_6)) : ((var_10 ? var_6 : -63))))));
            }
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                arr_31 [i_6] [i_9] [1] = ((-(min((arr_22 [i_6] [i_7] [i_7]), (min(var_2, var_3))))));

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_24 = (max(((((((max(var_2, (arr_29 [i_9] [i_7] [i_9]))))) <= (((arr_33 [i_6] [12] [i_10]) ? var_5 : var_13))))), (max((max(var_3, var_6)), ((max(var_8, var_2)))))));
                    var_25 = ((((max(var_11, ((var_3 ? (arr_20 [i_6] [i_6 + 4]) : (arr_29 [i_9] [i_9] [i_9])))))) ? (((((arr_28 [i_9]) != (arr_28 [i_9]))))) : var_8));
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    arr_38 [i_9] [i_9] = ((65408 ? (max(((3059437624628769884 ? 0 : 1)), (arr_18 [i_9 + 2]))) : ((1 ? var_4 : (var_11 - var_1)))));
                    arr_39 [6] [20] [i_11] [i_11] [i_9] [i_11] = (min(((~((var_0 ? 364317568 : var_4)))), -78));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    arr_43 [17] [i_12] [i_12] [i_9] = arr_42 [i_6] [i_7] [i_9] [i_12] [6];
                    var_26 = -1;
                    arr_44 [2] [i_7] [i_7] [i_7] &= (((var_2 << 4) ? (((var_4 >> (var_12 - 10933130626215562319)))) : (var_2 & var_0)));
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_27 = (max(var_27, var_3));
                    var_28 = ((((max((min((arr_45 [i_6] [i_6] [i_9 + 3] [i_13]), var_7)), ((((arr_33 [i_6 + 1] [14] [i_13]) - var_8)))))) || (arr_24 [i_9])));
                }
            }
            for (int i_14 = 2; i_14 < 20;i_14 += 1)
            {
                var_29 = (max(((-(arr_46 [i_6 + 1] [i_14 - 2] [i_14 + 1] [i_6 + 1]))), (arr_46 [i_6 + 2] [i_14 - 2] [i_14 + 1] [i_14])));

                /* vectorizable */
                for (int i_15 = 2; i_15 < 20;i_15 += 1)
                {
                    var_30 = (max(var_30, ((((((arr_25 [i_15] [i_14 + 1] [i_7] [i_15]) - var_5)) | ((var_9 ? (arr_35 [i_15] [i_7]) : 1)))))));
                    var_31 = (((1 / var_0) ? (((~(arr_20 [i_6 + 3] [i_6 + 3])))) : var_10));
                    var_32 *= (((((var_8 & (arr_25 [i_6] [16] [1] [i_15])))) ^ (3930649713 & var_12)));
                }
                var_33 = var_12;
                arr_54 [i_6 + 2] [i_7] [i_14 + 1] = var_10;
            }
        }
        var_34 = ((~(~var_12)));
        arr_55 [i_6] = min((arr_45 [i_6] [i_6 - 1] [i_6] [i_6]), (((((var_1 ? (arr_28 [2]) : var_8)) == (arr_51 [i_6] [i_6] [5] [i_6])))));
    }
    #pragma endscop
}
