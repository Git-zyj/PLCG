/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 ? var_4 : (((63 * var_0) | var_0))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 = (!(arr_1 [i_0 + 1] [i_0]));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 = ((((((((-64 || (arr_1 [i_0 + 1] [i_1])))) >> (((47721 ^ 18446744073709551615) - 18446744073709503892))))) ^ (((18446744073709551601 * 0) * (arr_2 [i_0 - 3] [i_0])))));
            arr_4 [i_0] = min(((~((min(86, (arr_3 [i_0] [i_1])))))), (max((var_6 & 17790), (~var_2))));
            var_13 = ((17814 ? (((((-9223372036854775807 - 1) % -64)))) : ((-47752 ? var_7 : var_1))));
            var_14 = (((((((~(arr_2 [i_0] [i_1])))) ? (var_7 & var_3) : ((((arr_3 [i_0] [i_1]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_1])))))) ^ (((min((arr_1 [i_0] [i_0 + 2]), (arr_1 [i_0 + 1] [i_1])))))));
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = (arr_6 [i_0]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] = ((((((max(var_1, (arr_2 [3] [i_0 - 1])))) >= ((var_8 ? (arr_8 [i_0]) : 47752)))) && (((((min((arr_6 [i_4]), 47699))) ? (((((arr_13 [i_3] [i_4] [2]) && -63)))) : ((var_5 ? var_8 : (arr_0 [i_5]))))))));
                            arr_18 [i_0] [i_2] [i_3] [i_0] [i_5] = (~171);
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] [i_6] = arr_15 [i_6] [0];
        arr_23 [i_6] = var_2;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_33 [i_6 + 2] [i_7] [i_6] [i_9 - 1] = -31782;
                        arr_34 [i_6] [i_6] [i_6 + 2] [i_6 + 2] [i_6] = var_5;

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_15 = 32746;
                            var_16 = (((arr_11 [i_6 - 2] [i_6] [13] [i_9 - 1]) > (arr_11 [i_6 + 1] [i_6] [i_6 + 1] [i_9 - 1])));
                            var_17 = (arr_0 [i_6 + 2]);
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 15;i_11 += 1) /* same iter space */
    {
        var_18 ^= (-(arr_38 [i_11 + 1]));
        var_19 = (((arr_32 [i_11 - 2]) ? (arr_1 [i_11 - 3] [i_11]) : var_7));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 16;i_13 += 1)
            {
                {
                    var_20 = (min(var_20, (~56)));
                    arr_46 [i_13] [i_11] [i_11] = ((-75 ? 43 : 11));
                }
            }
        }
        var_21 = (18446744073709551615 ^ 15);
    }
    var_22 = var_6;
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {
                    var_23 = ((((((var_8 ? var_1 : -5748)))) ? (((min((arr_27 [i_15 + 2] [i_15 + 1] [i_16]), (arr_41 [i_15 + 2]))))) : var_7));
                    arr_55 [i_14] [9] [i_16] = ((((((arr_51 [i_14] [i_14] [i_15 + 2] [i_15 + 3]) <= (arr_51 [i_15 + 2] [i_15] [i_15 + 2] [i_15 + 3])))) % (((arr_51 [i_15] [i_15] [i_15 + 2] [i_15 + 3]) ? (arr_51 [i_15] [i_15] [i_15 + 2] [i_15 + 3]) : (arr_51 [i_14] [i_14] [i_15 + 2] [i_15 + 3])))));
                    var_24 = (((min(((min(23, (arr_19 [i_15] [i_14])))), (min((arr_15 [i_14] [i_16]), (arr_7 [i_14] [i_15] [i_16])))))) ? ((max(var_9, 72))) : -var_7);
                }
            }
        }
    }
    #pragma endscop
}
