/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -24700;
    var_13 = (min(((var_2 | (((2055477143 ? 1337306818 : 39))))), 2888285918));
    var_14 = (var_0 >= 127);
    var_15 = ((var_0 << (((max(var_0, var_6)) - 12690555771180700076))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_3 - 2] [i_1] [i_2 - 4] [i_3] = (max(((0 ? (max(var_2, var_0)) : (((var_1 / (arr_2 [i_3])))))), var_7));
                                var_16 = ((1 ? (!11836248041682290635) : (arr_4 [i_1])));
                                arr_14 [i_0 - 3] [i_1] [i_2 + 2] [12] [i_2 + 2] = ((((-(~var_11))) + ((((max((arr_12 [19] [10]), (arr_8 [i_4] [i_3] [i_2] [i_1] [i_0 - 1]))))))));
                            }
                        }
                    }
                    var_17 = (max(var_17, ((((var_0 / (arr_1 [i_0 - 1])))))));
                    arr_15 [i_0 + 1] [i_0 + 1] [4] = (min(((-(arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]))), -316797198));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_18 = (227827658 - -107);
                                var_19 = 37572;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_28 [13] [13] [13] [i_1] [13] = (2566981692927041232 && 54588);
                                var_20 = 26789;
                                var_21 = ((-(arr_21 [i_0 + 2] [i_1] [i_9])));
                                var_22 -= (1407885541 % var_4);
                            }
                        }
                    }
                    var_23 -= (((arr_11 [i_0 + 2] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_0 + 2]) && (arr_11 [i_0 + 1] [i_1] [i_7 + 1] [i_7 - 2] [i_7] [i_0])));
                    var_24 = (min(var_24, (((-(arr_7 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
                }
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    var_25 = ((!(arr_10 [i_10] [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1])));
                    var_26 = ((((((arr_23 [i_0 - 3] [i_10 + 1] [i_10] [i_10]) + 3251))) ? ((9223372036854775807 ? (arr_19 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [0] [i_10 + 1]) : (1 ^ 122))) : (arr_8 [14] [i_1] [14] [i_0 - 3] [i_0])));
                    var_27 = (min((((arr_7 [i_0 - 2] [i_1] [i_10 - 1] [i_10 + 1]) ? (arr_7 [i_0 - 1] [i_1] [i_10] [i_10 + 1]) : var_9)), ((((arr_7 [i_0 - 2] [i_1] [i_0 - 2] [i_10 + 1]) ? (arr_7 [i_0 - 2] [5] [i_0 - 2] [i_10 + 1]) : 145)))));
                }
                arr_32 [i_0] [i_1] = ((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_1])));
            }
        }
    }
    #pragma endscop
}
