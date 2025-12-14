/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    var_10 = (((((((-6723 || var_7) || var_6)))) & var_0));
                    var_11 = ((((!(-28 - 3535780362))) ? 14699692543809503204 : var_8));
                    var_12 = -8761393666115715056;
                }
                var_13 += (min(255, var_4));
                arr_7 [i_1] [i_0] [i_1] = ((-29 ? 5188563032553693036 : var_9));
                var_14 = (min(var_14, (((!((((min(var_4, (arr_4 [14] [i_0] [i_0]))) ^ (arr_0 [i_1] [i_1])))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_15 = var_7;
                                var_16 += ((!(!38)));
                            }
                            for (int i_6 = 3; i_6 < 19;i_6 += 1)
                            {
                                arr_17 [i_6] [i_4] [i_0] [i_0] [i_1] [i_0] = (var_1 != 1);
                                var_17 = (min(var_17, -8761393666115715056));
                            }
                            for (int i_7 = 3; i_7 < 20;i_7 += 1)
                            {
                                arr_22 [i_0] = ((((~(max(50701, -8761393666115715056))))) ? 30590 : (75 || 184));
                                var_18 = ((((var_3 ? (1 / 1) : 14699692543809503204)) & ((((!(135 == 1454425953)))))));
                            }
                            arr_23 [i_0] [i_1] [14] [i_1] = var_0;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_19 *= 20941;
                    var_20 = var_3;
                    var_21 = (((((min(var_1, 146)) + var_5)) / (((var_2 / 1347043911) ? (var_5 / var_6) : 1382908587))));

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_32 [i_8 + 1] [i_10] [i_10] [i_8 + 1] [i_8] [i_8 + 1] = (var_4 + 1);
                        var_22 = (min(var_22, (!var_9)));

                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_23 = 4266710313;
                            var_24 = 3;
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, ((((~13957530799394261404) ? ((((0 || 33440702596269913) && (-1950476177 || var_4)))) : 27755)))));
                            var_26 = (((((-29 ? 31931 : 216))) ? (max((arr_2 [i_8 - 1] [i_11]), (arr_2 [i_11] [i_11]))) : ((max(-2, 0)))));
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_27 = (min(((-(216 * 16760079274152687347))), ((max((arr_0 [i_8] [i_8]), (((arr_4 [3] [i_9] [3]) ? 42 : var_0)))))));
                            var_28 = ((((((1773163684 ? var_3 : -1)) - (-1133347741248449266 + var_1))) > (((((min(var_0, 39639))) ? ((((-32767 - 1) > -7))) : (0 < 57))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
