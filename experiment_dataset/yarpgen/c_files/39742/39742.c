/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 |= (((((((max(1731033522, var_4))) ? var_1 : var_0))) ? var_5 : (5 * 4017944804)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 = (max(458752, (((arr_0 [i_0]) ? 6873794223589635027 : (1 >> var_0)))));
                    arr_9 [i_2] [1] [i_2] = (((min((arr_0 [i_0 + 1]), (arr_5 [i_0 + 1] [i_2] [i_2]))) <= ((((((((arr_8 [i_2]) + (arr_1 [1])))) == (arr_7 [i_2])))))));
                    arr_10 [i_2] [5] = (635197010 % 7971);
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    var_13 = (((528482304 / -75) > (arr_11 [i_3 - 1] [i_3] [i_0])));
                    var_14 -= 0;
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_15 -= (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_16 += (((arr_18 [i_1] [i_0 + 2] [i_4] [i_5] [i_5] [i_4]) || (arr_18 [i_0 - 3] [i_0 - 3] [i_4] [1] [i_4] [i_0 - 3])));
                                arr_19 [i_5] [i_5] [i_4] [i_5 - 1] [i_1] = (((--3475065788) ? ((((((min(var_1, 1)))) <= (var_3 | var_7)))) : (((-5142486643810215195 > (arr_14 [i_0]))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_24 [i_1] [i_7] = (((arr_6 [i_0] [i_0 - 1] [i_0] [i_7]) / (arr_21 [i_0] [i_0])));
                    var_17 = (max(var_17, ((((min(-97, var_5)) * (((((((arr_21 [i_7] [i_1]) == (arr_18 [i_1] [i_1] [i_7] [i_1] [i_7] [i_1]))) && ((((arr_13 [i_0] [i_0] [5] [i_0 + 2]) ^ (arr_21 [1] [1])))))))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_18 *= var_4;
                                arr_30 [i_9] [i_7] [i_7] [i_7] [i_7] [i_0 + 2] = (min((((3348379398 - var_9) ? (min(var_8, (arr_25 [2] [2]))) : ((((15714678709901890493 != (arr_5 [i_8] [i_7] [i_0]))))))), 3659770285));
                                arr_31 [i_7] [i_7] = ((((min((arr_25 [i_9] [i_7]), (arr_25 [i_8] [i_0 - 1])))) ? (((((arr_13 [i_0 - 3] [i_0 + 2] [i_0 + 2] [i_8]) && (arr_25 [i_9] [i_0]))))) : (((arr_5 [i_0] [i_7] [i_0 - 2]) ? (arr_5 [i_0] [i_7] [i_0 - 1]) : (arr_5 [i_0] [i_7] [i_0 - 1])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_19 = (((arr_34 [i_0] [i_0]) != (((max((arr_3 [i_0 + 1]), 78))))));
                            var_20 = (min(((var_2 * (max((arr_32 [0] [i_1] [i_10]), 23663)))), (arr_6 [i_0 - 2] [i_1] [i_10] [i_10])));
                            var_21 = (max(var_21, (var_3 <= 1)));
                            arr_37 [4] [4] = var_9;
                        }
                    }
                }
                var_22 = ((((~var_3) + ((((arr_0 [i_0]) ^ -111))))));
                var_23 = (min(var_23, ((((((1 * (arr_26 [i_1] [i_1] [i_1] [i_1]))))) || (((((((arr_27 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) - 41885))) % 2156955462)))))));
            }
        }
    }
    var_24 = var_9;
    #pragma endscop
}
