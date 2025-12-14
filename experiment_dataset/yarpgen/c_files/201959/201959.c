/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 *= ((((!(arr_4 [i_2] [i_2 - 2] [i_0 - 1]))) ? (min((!1), 66)) : (((max((arr_12 [i_1] [i_2] [i_3] [i_4]), -4)) / (~965743224)))));
                                arr_16 [i_4] [i_0] [i_1] = ((!(arr_1 [i_0])));
                            }
                        }
                    }
                }
                var_15 = ((((((arr_2 [i_0 - 1]) ? ((max((arr_7 [i_1]), (arr_0 [i_0])))) : ((max(var_8, var_9)))))) ? ((((((arr_6 [i_1] [i_1] [1]) - 228)) - (arr_3 [i_0 + 1])))) : (min(248, (arr_14 [i_0] [i_0] [i_0] [i_0] [i_1])))));
            }
        }
    }

    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_16 = (arr_6 [i_5] [i_5] [i_5]);
        arr_19 [i_5 - 1] = (243 + -681);
        arr_20 [i_5] [i_5] = ((~(!2299083849)));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_17 = ((-((~(arr_12 [i_6] [i_6] [i_6] [i_6])))));
            arr_26 [i_6] [i_6] = (!2299083849);
            arr_27 [i_6] [i_6] = ((~(!205)));
            arr_28 [i_6] [i_6] = ((((min(27, (253 & 4306)))) ? ((min((arr_5 [i_7] [i_7] [0]), (-55 - 27719)))) : (max((var_11 <= -84), (min((arr_6 [10] [i_6] [i_6]), 2299083849))))));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            arr_31 [i_6] = ((-((max(-4, (arr_1 [i_8]))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    {
                        var_18 = (((((var_4 - (arr_6 [i_10 + 1] [i_10 - 2] [i_10])))) ? (arr_6 [i_10 + 1] [i_10 - 1] [i_10]) : (min(1, (arr_10 [i_10 - 2] [i_10] [i_10 - 2] [i_10 - 2])))));
                        arr_40 [i_6] [i_8] [i_8] [i_6] [i_9] [i_6] = ((~((+(min((arr_3 [i_6]), var_0))))));
                    }
                }
            }
            var_19 ^= (~var_11);
            var_20 -= 1;
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_21 = (arr_15 [i_6]);
            var_22 = max(((1995883446 ? 28 : 9098961507181118275)), 683);
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_48 [i_6] [i_6] [i_12] [i_6] = ((~((~(arr_35 [i_11] [i_11])))));
                        arr_49 [i_6] [i_6] [i_12] [i_6] = (min((arr_14 [i_13] [i_11] [i_11] [i_6] [i_6]), -627694697));
                        var_23 = ((((max((arr_29 [i_6] [i_6] [i_6]), (arr_29 [i_6] [i_11] [i_13])))) ? (((~(arr_1 [i_13])))) : (max((min((arr_38 [i_11] [i_11] [i_11] [i_6]), -7635)), (var_8 - var_11)))));
                    }
                }
            }
        }
        var_24 -= (min(228, var_6));
        var_25 = (~(~var_13));
        var_26 *= var_2;
    }
    #pragma endscop
}
