/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((((max(250, var_7))) ? var_3 : var_10))) ? (((((max(var_6, var_14))) >= (var_2 | 1)))) : (~var_15)));
    var_20 = (min(var_20, (((var_14 ? (~var_11) : (min(((6 ? var_15 : var_10)), var_4)))))));
    var_21 = -126;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_10 [i_0] [10] [i_1] |= ((-(((((max(208, 1))) || 125)))));
                        arr_11 [i_0] [i_0] [i_1] &= (17852 + -17845);
                        arr_12 [i_3] [i_1] [i_2] = arr_9 [i_3] [i_3] [i_0] [i_1] [i_1] [i_0];
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_22 -= (((255 << (((13 ^ 125) - 101)))));
                            var_23 = (max(var_23, 22927));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_24 = (max(var_24, (((~((~((max((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), 13))))))))));
                            var_25 = (min((((!(arr_9 [i_6] [i_6] [i_4] [i_2] [i_1] [i_0])))), (max(21, ((-13 ? (arr_15 [i_6] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0]) : 1))))));
                            var_26 ^= (((((arr_14 [i_6] [i_4]) ? -32 : var_3)) - var_2));
                        }
                        for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_1] [i_4] = var_11;
                            arr_26 [i_4] [i_4] [i_2] [i_1] [i_4] = (arr_1 [i_4]);
                            arr_27 [i_0] [i_1] [i_4] [i_4] [i_4] [i_7 + 2] = ((((1 ? (min(-2147483640, 242)) : 132)) + (max(var_10, ((var_8 ? var_5 : (arr_22 [i_0] [i_4] [i_0] [i_4] [i_0])))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, ((((~var_18) ? 234 : ((-(arr_5 [i_8 - 1] [i_0] [i_0]))))))));
                            arr_31 [i_4] = (~var_14);
                        }

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_28 = (max(var_28, ((max(0, (arr_9 [i_0] [i_0] [i_1] [i_9] [i_9] [i_9]))))));
                            var_29 = (max((((!((max(255, (arr_15 [i_0] [i_1] [i_1] [i_0] [i_4] [i_0] [i_4]))))))), ((max((arr_13 [i_4] [i_0] [i_1] [i_4]), (arr_33 [1] [1] [i_2] [i_2] [i_9]))))));
                            var_30 += ((~((-((21 ? 24 : (arr_1 [i_4])))))));
                            var_31 ^= ((+(((arr_15 [i_9] [i_9] [i_4] [i_4] [i_2] [i_0] [i_0]) ? var_5 : -18))));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_32 -= ((var_7 && ((((((var_0 ? var_3 : var_16))) ? var_16 : ((115 ? var_6 : 255)))))));
                            arr_36 [i_0] [i_0] [i_2] [i_4] [i_1] |= ((!(((4513839973110321764 >> (var_0 - 27352))))));
                        }
                    }
                    arr_37 [i_2] [i_2] [i_0] [i_0] = 10;
                }
            }
        }
    }
    #pragma endscop
}
