/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_8 ? var_11 : ((var_8 ? -369798562 : var_0))))) ? var_11 : (((1 | var_4) ? -2818406579461870304 : -22502)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 -= (arr_0 [i_0]);
                    arr_7 [i_0] [i_0] [i_1] [i_2] = 0;
                }
            }
        }
    }
    var_14 = (-22502 ^ var_8);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_15 = (((arr_15 [i_3] [i_5] [i_5 - 2] [i_6] [i_5]) >= (~-24)));
                                var_16 = ((~(-32767 - 1)));
                            }
                            arr_21 [i_3] [i_5] [i_6] [i_3] = (min((-12 / 232), (var_7 & var_7)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_24 [i_8] [i_3] [i_3] [i_8] = -1;
                    var_17 ^= ((var_0 ? -4790212283855807728 : (arr_19 [i_8] [i_4 - 1] [i_4])));
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
                {
                    var_18 = ((3917012101189215476 ? (-2147483647 - 1) : (-9223372036854775807 - 1)));
                    var_19 += ((-(arr_9 [i_9 + 1])));
                    var_20 = (arr_22 [i_3] [i_4 + 1] [i_4 + 2] [i_3]);
                }
                for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    var_21 -= (arr_14 [i_3] [i_4 + 1] [8]);
                    arr_31 [i_3] [i_3] [i_3] = (max((arr_28 [i_3] [i_4] [i_10]), (((0 && (arr_20 [i_4] [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                arr_36 [i_3] [i_3] [i_10] [i_11] [i_12] = (arr_33 [i_3] [i_4] [i_10] [i_10 - 2] [i_3] [i_12]);
                                var_22 ^= (arr_19 [i_3] [i_4] [i_10 + 1]);
                                arr_37 [i_3] [i_4] [i_4] [i_10] [i_11] [i_12] [i_12] &= ((!((min(var_9, 106)))));
                            }
                        }
                    }
                    var_23 ^= ((((((arr_30 [4] [i_4] [i_4 - 1] [4]) ? var_1 : 0))) ? var_11 : (((!((max(8796093014016, 2450565411))))))));
                }
            }
        }
    }
    #pragma endscop
}
