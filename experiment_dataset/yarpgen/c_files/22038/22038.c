/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((arr_0 [i_0 + 1]) > (((arr_0 [i_0 - 1]) ? (((arr_0 [i_0]) | 1)) : (((min(223, var_10))))))));
        arr_3 [i_0] |= max((!var_7), (((arr_1 [i_0]) * (arr_0 [i_0]))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            var_13 = (((arr_4 [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_0 + 1] [i_0 - 1]) : (arr_4 [i_0 - 1] [i_0 + 1])));
            var_14 = (((arr_4 [i_0] [i_0 + 1]) < (arr_4 [i_0] [i_0 + 1])));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_15 |= (((((-(arr_8 [i_2 + 3] [i_0 + 1])))) ? ((((arr_8 [i_2 + 1] [i_0 + 1]) && (arr_8 [i_2 - 2] [i_0 + 1])))) : ((max(var_11, 32095)))));
            var_16 = (arr_9 [i_0] [i_2] [i_0]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_14 [i_3] [i_4] = var_5;
                        arr_15 [i_0] = var_4;
                        arr_16 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] = (min(var_1, ((~((-(arr_7 [i_0] [i_0])))))));
                    }
                }
            }
            var_17 ^= ((max(((13 & (arr_0 [i_2]))), (-2147483647 - 1))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_18 = 1;

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_27 [i_6] [i_5] [i_6 - 1] [i_7] = (arr_12 [i_5 + 1] [i_5 + 1] [i_6 - 1] [i_0]);
                    var_19 = (min(var_19, ((((arr_1 [i_0 - 1]) ? 32 : (arr_1 [i_0 - 1]))))));
                }
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    var_20 = ((~(var_6 <= 1)));

                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        arr_33 [i_9] [i_6] [i_6 - 1] [i_6] [i_0] = (arr_10 [i_0] [i_5] [i_6 - 1] [i_9 + 3]);
                        var_21 ^= 1;
                    }
                    arr_34 [i_0 + 1] [i_5] [i_5] [i_6] [i_8 + 2] [i_6] |= (arr_6 [i_6] [i_6 - 1]);
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_22 = (arr_7 [i_6 - 1] [i_0 - 1]);
                            arr_39 [i_0] [i_5 + 2] [i_6 - 1] [i_6] = var_3;
                            var_23 = ((!(arr_8 [i_0 + 1] [i_0 + 1])));
                        }
                    }
                }
                var_24 = (min(var_24, ((((arr_11 [i_5 + 2] [i_5 - 1] [i_0]) ? (arr_23 [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6] [i_0 + 1]) : (arr_11 [i_5 + 2] [i_5 + 3] [i_5]))))));
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                arr_43 [i_0] [i_5] [i_12] = (arr_35 [i_12] [i_5 + 1] [i_5 - 1] [i_5] [i_0]);
                arr_44 [i_12] [i_5] [i_12] = var_6;

                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    var_25 -= ((arr_9 [i_13 - 1] [i_13 - 1] [i_13 - 1]) ? (arr_32 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0]) : (arr_21 [i_12]));
                    var_26 = ((var_0 ? (arr_17 [i_0 - 1] [i_0] [i_5 + 3]) : (arr_17 [i_0 - 1] [i_0] [i_5 + 3])));
                    arr_47 [i_0] [i_12] [i_12] [i_13 - 1] = ((var_0 ? (arr_17 [i_13 - 1] [i_13 - 1] [i_13 + 2]) : (((((arr_37 [i_13] [i_12] [i_12] [i_5] [i_0]) + 2147483647)) << (var_0 - 2348663498)))));
                }
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                var_27 = (max(var_27, (arr_12 [i_0] [i_5] [i_14] [i_5])));
                arr_51 [i_5 + 3] [i_5 - 1] [i_5 + 3] [i_5 - 2] = (((arr_26 [i_14] [i_0] [i_5] [i_0]) ? (((var_9 ? (arr_24 [i_0 - 1] [i_14] [i_0 - 1] [i_0]) : var_7))) : ((32095 ? (arr_46 [i_0] [i_14] [i_14] [i_5 - 1]) : (arr_31 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])))));
            }
        }
        arr_52 [i_0] = 198;
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 18;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            {
                arr_59 [i_15 + 1] [i_15 + 1] [i_15] = var_4;
                var_28 = (max(var_28, (!var_0)));
            }
        }
    }
    #pragma endscop
}
