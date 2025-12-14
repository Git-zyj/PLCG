/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_15 ^= (max(((var_1 ? (arr_0 [i_0]) : (arr_0 [i_1]))), ((var_3 % (arr_0 [i_0])))));
                        var_16 = (max(var_16, ((max((max((arr_1 [i_0]), (arr_3 [i_1] [i_2] [i_3]))), (max(var_7, (arr_5 [i_1]))))))));
                        var_17 -= (max((-9223372036854775807 - 1), (2 / 1)));
                    }
                    var_18 = (((((((min((arr_0 [i_0]), (arr_6 [i_0] [i_0] [i_0])))) ? var_5 : (((1 ? var_7 : -16290)))))) ? (((3 ? 2752 : 960))) : (((arr_5 [i_1]) / var_12))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_19 -= ((16259 * (arr_11 [i_0] [i_1] [i_4] [i_4])));
                        var_20 = ((!(arr_8 [i_0] [i_1])));
                        var_21 = ((arr_8 [i_0] [i_1]) ? (arr_8 [i_0] [i_1]) : (arr_8 [i_1] [i_1]));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_22 = (16 && 2);
                            var_23 = var_9;
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_24 = (min(var_24, ((var_5 + (((~-2) ? ((var_2 ? (arr_5 [i_0]) : var_8)) : (arr_7 [i_0] [i_1] [i_2] [i_5] [i_5])))))));
                            arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] = arr_10 [i_0] [i_1] [i_0] [i_5];
                        }
                        var_25 = var_7;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        var_26 = ((var_8 >> (var_6 - 213)));
                        arr_25 [i_1] = (1 < 1);
                        arr_26 [i_0] [i_0] [i_0] [i_8] [i_0] &= var_4;
                        var_27 = ((~(arr_12 [i_0] [i_1] [i_2] [i_8] [i_8] [i_1])));
                        var_28 ^= (var_2 ? (arr_21 [i_8] [i_1]) : ((var_0 ? var_2 : (arr_10 [i_8] [i_8] [i_8] [i_0]))));
                    }
                    arr_27 [i_1] = (((((-((max(var_6, var_6)))))) ? (arr_17 [i_0] [i_0] [i_0]) : var_6));
                }
            }
        }
        var_29 = (max(((var_2 ^ (max(var_8, (arr_5 [i_0]))))), ((((min(var_11, var_4))) ? (((arr_17 [i_0] [i_0] [i_0]) | var_2)) : (var_8 & var_1)))));
        var_30 = ((-(arr_11 [i_0] [i_0] [10] [i_0])));
    }
    #pragma endscop
}
