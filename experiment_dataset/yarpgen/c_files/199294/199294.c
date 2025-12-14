/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (-386554263 | 4181439976);
        var_13 = (max(var_13, (((!(((4181439955 ? -16385161 : -16385171))))))));
        var_14 = (max(var_14, ((((arr_0 [1] [1]) ? ((1 ? (arr_1 [i_0] [i_0]) : var_2)) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [0] [0]))))))));
        arr_3 [i_0] [5] = ((var_8 ? ((-((-1481364766 ? -100 : 113527312)))) : var_11));
        var_15 = 112;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (max(-1481364766, -1481364763));
        var_16 ^= ((19 ? 16385160 : 100));

        for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_17 &= (((arr_13 [i_2 + 1]) - (arr_13 [i_2 - 2])));
                            var_18 += ((!(~var_9)));
                            arr_18 [i_1] [i_1] [i_2 - 1] [i_3] [i_4 - 1] [i_5 + 1] [i_5] = ((2046 ? -10 : var_7));
                            arr_19 [i_1] [i_1] [i_1] [i_2 - 3] [i_3] [i_3] [9] = (16385160 && 2147483642);
                        }

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_19 ^= var_1;
                            var_20 &= (((~(((arr_16 [i_6] [i_1] [3] [i_1] [i_1]) ? 107 : -47)))));
                            var_21 ^= 41;
                            var_22 ^= 376406237;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_23 ^= ((((min(-1123274349, -16385152))) ? (((((var_6 ? 16385188 : -1765407500))) / (arr_20 [i_1] [i_1] [i_3] [i_4] [i_7] [i_4] [i_7]))) : ((((arr_9 [1] [3]) ? (var_8 * 185) : 1)))));
                            arr_24 [19] [19] [22] [i_4] [17] [i_4 - 2] = (arr_5 [i_1]);
                            var_24 = (((148 < 148) ? ((((arr_23 [i_4 + 3] [i_2 - 2] [i_3] [i_4] [i_4 + 3]) + (arr_23 [i_7] [i_4 + 1] [i_3] [i_2 - 1] [i_1])))) : 7784686500525045533));
                        }
                        arr_25 [8] = 6978;
                        var_25 = ((~(min(0, (arr_8 [i_1] [i_4 + 3])))));
                    }
                }
            }
            arr_26 [i_2] = (min(-16, -3779857969376991665));
            var_26 &= 70;
            var_27 = (!-100);
            arr_27 [i_2 - 2] [i_1] [i_1] = -2097151;
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 22;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_28 = (min(var_28, (~44)));
                            arr_39 [i_8] [i_8] = ((44 ? ((var_10 ? (arr_21 [17]) : 127)) : (((64 + (arr_12 [i_1] [i_1] [i_1]))))));
                        }
                    }
                }
                arr_40 [i_1] &= ((16385161 ? 183 : 1005625572));

                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    arr_43 [14] [i_8] [i_8] [i_1] [i_8 + 1] &= var_3;
                    var_29 = ((1632485291 ? 0 : 4181439976));
                }
            }
            var_30 = (~123);
            var_31 ^= (((arr_11 [i_8 - 1] [i_8 - 1]) ? (arr_23 [i_8 + 1] [i_8] [i_8] [i_8] [i_8]) : (arr_11 [i_8 - 1] [i_8])));
            var_32 &= (!113527319);
            var_33 = 2868498019;
        }
    }
    var_34 &= 0;
    var_35 = var_3;
    #pragma endscop
}
