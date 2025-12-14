/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (((-var_0 & (min(7, ((var_1 ? -970324862143525566 : 1593233187)))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_14 ^= (var_7 ? 25 : var_0);
            var_15 = (-1293310791 ? var_12 : (arr_3 [i_0 + 2] [i_0 + 2]));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_16 = 9763838041313358212;
            var_17 = ((!(arr_5 [i_2 + 1] [i_2 + 1] [i_0 + 3])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_10 [i_0] [i_3] [i_3] = -25;

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_18 = ((~((var_6 ? var_2 : -1593233188))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_4] [i_4] = ((25 ? (((arr_1 [i_6] [i_4]) * var_1)) : ((((arr_1 [i_0 + 1] [i_4]) / (arr_1 [i_5] [i_3]))))));
                            var_19 = (((!-1168610056) ? (max(((var_11 ? (arr_3 [i_4] [i_4]) : (arr_8 [i_5] [i_4] [i_0 + 3]))), 1669516896798497266)) : ((~((var_1 ? var_9 : var_2))))));
                            var_20 = ((!(((var_9 ? var_12 : var_11)))));
                        }
                    }
                }
                var_21 -= ((~(((max(-970324862143525559, (arr_13 [i_4] [i_0 + 1] [i_3] [i_0 + 1])))))));
                var_22 = var_6;
                var_23 = (max(var_23, (((((arr_17 [6] [i_0 - 1] [i_0 - 1] [6]) - (arr_17 [8] [i_0 + 3] [i_0 + 2] [8])))))));
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_24 += var_4;
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((-7 ? (((((var_2 != 2147483633) >= ((min(var_7, 28))))))) : var_1)))));
                                arr_32 [i_8] = (((((((arr_27 [i_10 + 2] [i_7] [i_8] [i_9 - 2]) ^ var_7)) + 2147483647)) >> (((((arr_22 [i_9 - 1] [i_7] [i_0 + 1]) - var_11)) - 288073392))));
                                var_26 = (min(var_26, ((max(((((arr_21 [i_9 - 1] [i_7]) > ((494330771 << (1168610035 - 1168610031)))))), 15)))));
                            }
                        }
                    }
                    var_27 = (min((var_8 && var_7), (((var_6 / -1593233203) << ((65527 ? 6 : var_5))))));
                }
            }
        }
        var_28 += ((221 == (arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 2])));
        var_29 = (max(var_29, (((((((-1593233188 >= (arr_3 [i_0 + 3] [i_0]))))) * (((!(arr_4 [i_0 + 3] [8])))))))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 17;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 19;i_13 += 1)
            {
                {
                    var_30 ^= ((((((arr_13 [i_13] [i_12] [i_12 + 1] [i_11 + 2]) ? 21 : var_6))) ? -var_8 : (~var_11)));
                    var_31 = (min(var_31, (((var_6 ? (arr_5 [i_11 + 3] [i_12 - 2] [i_13 + 1]) : (arr_5 [i_11 + 1] [i_12 - 2] [i_13 - 1]))))));
                    arr_41 [i_11] = ((!(arr_8 [i_13 + 1] [i_12 + 1] [i_11 + 2])));
                }
            }
        }
        var_32 = (max(var_32, var_7));
    }
    var_33 = (max(var_33, var_11));
    var_34 = var_5;
    #pragma endscop
}
