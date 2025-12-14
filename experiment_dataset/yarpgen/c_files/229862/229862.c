/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 96;
    var_21 ^= var_11;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((((arr_2 [i_0] [i_0]) > (((var_14 / (arr_6 [i_0] [i_1] [i_2])))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_22 = (((((!(arr_10 [i_0] [i_1 + 1] [i_1 - 1] [i_2] [i_3] [i_3])))) == (arr_6 [i_0 + 1] [i_1 - 1] [i_3 - 2])));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((((690478519 && (arr_11 [12] [i_0] [i_2] [12]))) ? var_5 : var_2));
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_23 = (-(max(-4657479248253476534, ((min(var_2, var_4))))));
                        var_24 = var_13;
                    }
                    for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_25 = 2878776645;
                        var_26 += (arr_7 [i_5 - 2] [1] [i_1] [i_0]);
                        var_27 = -1;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                var_28 = min((min(var_14, var_15)), ((-(arr_14 [i_0 + 1] [i_0] [i_1] [i_0] [i_6 - 1] [i_7]))));
                                var_29 = var_13;
                                var_30 *= ((56189 ? -69 : 12761));
                                arr_24 [2] |= (arr_21 [i_0 - 1] [i_7 + 1] [i_2] [i_6 + 1] [i_7 + 1]);
                            }
                        }
                    }
                    arr_25 [i_0] [i_1 + 1] [i_0] = var_17;
                    var_31 = (min(var_31, (-7241046858693001574 | 5058590776495879822)));
                }
            }
        }
    }
    var_32 = var_13;
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_33 = (!-1);
                    arr_35 [i_9] [i_9] = (-8059080250477824549 == 1);
                    var_34 |= (59 ? (arr_0 [i_8 - 1]) : ((-((-(arr_29 [i_8 - 2]))))));
                    var_35 = ((((((arr_6 [i_9] [i_9] [i_10]) ? (arr_31 [i_8] [i_9] [i_8]) : (arr_34 [i_8] [i_10] [i_10] [i_9])))) ? -2372249438 : (arr_18 [5] [i_9] [2] [i_10] [i_10] [i_9])));
                    var_36 = (arr_20 [i_8] [i_8] [i_9 + 1] [i_9] [i_10]);
                }
            }
        }
    }
    #pragma endscop
}
