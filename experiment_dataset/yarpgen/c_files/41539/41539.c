/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-((var_14 ? var_14 : 0))))) ? var_5 : var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (((arr_0 [i_1] [4]) && (~0)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (((arr_10 [i_2 - 2] [i_1] [i_2 - 2] [i_3] [i_2 - 2]) ? (arr_10 [i_2 + 1] [i_3] [i_0] [i_2] [i_3]) : (arr_10 [i_2 - 1] [i_1] [i_2] [i_3] [4])));
                        arr_13 [i_0] [9] [i_0] [i_3] = (arr_7 [i_3] [3] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_4] = (((arr_1 [i_0]) + (arr_1 [i_0])));
                        arr_17 [i_0] [i_0] [i_2 + 1] [i_4] = (((arr_8 [i_0] [i_0] [i_2 - 2] [i_2 - 2]) + (arr_8 [10] [i_0] [i_2 - 2] [i_2 - 2])));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            var_18 = ((-(!1)));
                            var_19 = ((((arr_5 [i_0] [i_1]) ? (arr_19 [i_0] [i_6] [i_2 - 1] [i_1]) : var_4)) ^ (((-(arr_11 [i_0])))));
                            arr_23 [i_2] [4] [i_2] [i_2] [i_0] [5] = ((var_3 ? 4098739040 : (arr_4 [i_0] [i_2 - 2] [i_2 - 2])));
                            arr_24 [i_0] [i_0] [i_0] [i_5] [i_0] = (((1 && var_11) + (arr_19 [i_0] [i_0] [i_0] [i_6])));
                        }
                        var_20 = (max(var_9, (((-1 == (arr_3 [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_21 = (!(~var_9));
                        arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] |= (arr_20 [i_2]);
                    }
                    var_22 = (((1 ? (arr_3 [i_0] [i_1]) : (arr_3 [i_2 + 1] [i_1]))));
                }
            }
        }
        var_23 = (min(var_12, 24389));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_24 = (arr_25 [0] [4]);
        var_25 &= 134;
        var_26 |= (((arr_14 [i_8] [i_8] [i_8] [2]) < (arr_5 [i_8] [i_8])));
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            {
                var_27 = (max(var_27, ((((1 | 9156205477992163038) ? (arr_34 [1]) : ((((arr_30 [i_9] [i_10]) ? 1550609651 : var_12))))))));
                var_28 = var_5;
                arr_35 [i_9 - 1] [i_10] [i_9 - 1] = 9156205477992163042;

                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        var_29 *= (arr_33 [i_12]);
                        var_30 = ((0 || (arr_30 [i_9 - 1] [i_9 + 1])));
                        var_31 = var_0;

                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            var_32 = ((((var_3 ? 1 : var_1)) > var_9));
                            var_33 = (max(var_33, (((15 > ((((arr_31 [i_10]) / (arr_42 [i_9] [i_9] [i_11] [i_12] [5])))))))));
                            var_34 = (((arr_38 [i_13 - 1]) || -16089));
                            var_35 -= (((arr_37 [i_11] [i_11] [i_12] [i_11 + 1]) || (arr_37 [i_11] [i_11] [i_12] [i_11 + 2])));
                        }
                    }
                    var_36 = (max(var_36, (((((-(!392785034))) / ((((arr_33 [2]) && ((((arr_44 [i_9] [8] [i_9] [i_10] [i_9]) ? (arr_44 [i_11] [2] [2] [7] [i_9]) : (arr_34 [16]))))))))))));
                    arr_45 [i_10] [0] [i_10] [i_11] = ((~((~(arr_42 [i_9 + 1] [i_11 - 1] [i_11] [i_11] [i_11])))));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_37 = (((((max((var_2 || var_4), (arr_44 [i_14] [i_14] [i_14] [i_9 - 1] [i_9]))))) / (arr_36 [i_9] [i_10] [i_10] [i_10])));
                    var_38 = ((-((((((1 + (arr_44 [i_9] [i_9] [5] [i_14] [i_14])))) >= ((var_13 ? var_8 : -18)))))));
                    arr_49 [i_10] = ((((((arr_31 [i_14]) ^ (arr_44 [0] [0] [i_14] [i_14] [i_9])))) ^ ((var_1 ? (min(0, var_14)) : 2147483638))));
                }
                for (int i_15 = 3; i_15 < 15;i_15 += 1)
                {
                    var_39 = (~-23);
                    var_40 = ((~(arr_51 [i_9])));
                    arr_53 [i_10] [i_10] [i_15] [i_15] = (min((arr_42 [4] [4] [i_15] [i_15 - 2] [4]), (arr_42 [i_9] [i_10] [i_10] [i_15 + 3] [i_10])));
                }
            }
        }
    }
    var_41 = (var_5 / -31);
    var_42 = (max(((-(var_10 || -7214076003527084056))), (1 || 1)));
    #pragma endscop
}
