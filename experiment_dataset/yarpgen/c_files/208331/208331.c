/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_8 ? 6914244425026105527 : 6914244425026105550));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 1]) ? (((((((arr_3 [10]) ? 2 : 6914244425026105525))) || ((min(1048064, 255)))))) : (((!((min(-50, 36)))))))))));
                    arr_9 [6] = (((((~(arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (((var_8 ? (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : (((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 54006 : 6914244425026105510))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_19 [i_5] [i_4 - 1] = ((((-(arr_14 [i_4]))) >> ((((var_0 ? 90 : (arr_15 [i_6]))) - 79))));
                        var_13 = (~54591);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_14 = (((((arr_11 [1]) ? var_5 : var_6)) | (arr_17 [i_4] [i_4] [i_4] [i_3])));
                        var_15 *= (((((var_7 ? (arr_13 [i_3] [i_3]) : 37))) ? (arr_13 [i_3] [i_3]) : 17715595895373004655));
                        var_16 = (min(var_16, (((54029 ? 36 : 1)))));

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_17 *= (((arr_13 [i_4] [i_4]) ? (arr_25 [i_3] [i_3] [i_5 - 2] [i_7] [i_7] [i_3]) : 0));
                            var_18 = ((1 == ((var_6 << (65 - 65)))));
                            var_19 = 1;
                            var_20 = (var_10 % 10);
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, var_7));
                            var_22 = var_4;
                            var_23 = (max(var_23, (((-1 ? (~-21) : (arr_11 [i_4 - 1]))))));
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            var_24 = (((((6914244425026105539 ? var_10 : var_7))) ? (arr_21 [i_4] [i_4 - 1] [i_5 + 4] [i_5]) : var_8));
                            arr_31 [i_10] [i_10] [i_5] [i_5] [i_3] [i_3] = -1;
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = (-1 || 1);
                        }
                    }
                    arr_33 [i_5] [i_5] = (((4 << var_7) > 5));
                    arr_34 [i_5] [i_3] [i_4 - 1] [i_5] = -var_4;

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {

                        for (int i_12 = 4; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            var_25 = (arr_30 [i_5] [i_4 - 1] [22] [22] [19]);
                            var_26 = (arr_36 [i_3] [i_12 - 1] [i_5] [i_3]);
                        }
                        for (int i_13 = 4; i_13 < 22;i_13 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, 4362862139015168));
                            var_28 = ((-(8 * var_1)));
                            var_29 |= (-43 ? (((-1 ? -16 : 32))) : (arr_30 [i_11] [i_3 - 1] [i_4 - 1] [i_5 - 3] [i_5]));
                            var_30 |= ((4294967295 ? 4030228279 : 1));
                        }
                        for (int i_14 = 4; i_14 < 22;i_14 += 1) /* same iter space */
                        {
                            var_31 *= 6914244425026105542;
                            arr_49 [i_3] [i_4] [i_3] [i_5] [i_5] [i_5] [i_14] = (arr_24 [i_5 + 3] [i_5] [i_3 - 1]);
                            var_32 ^= ((!(~var_2)));
                            arr_50 [i_3] [i_3] [i_5] [i_3 - 1] [1] = (((arr_14 [i_14 - 3]) <= -1));
                        }
                        var_33 = arr_39 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_11];
                        var_34 = (!135);
                    }
                }
            }
        }
        var_35 = (max(var_35, (arr_22 [i_3] [i_3])));
    }
    var_36 = (~var_10);
    #pragma endscop
}
