/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((-((((arr_4 [i_0] [i_1 + 1] [i_1 + 1]) <= (arr_4 [i_0] [i_0] [i_1 + 1]))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3 + 2] [i_4]);
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = ((((~(((arr_5 [i_0] [i_0] [i_2] [i_3]) / var_5)))) ^ 6917529027641081856));
                                var_21 += (255 ^ 562949953290240);
                                arr_15 [i_4] [i_0] [i_3 + 2] [i_0] [i_0] [i_0] = (((((((((arr_9 [i_0] [i_0] [6] [i_0]) - (arr_11 [i_4] [i_0] [i_0] [i_1 - 1] [i_0] [i_0] [i_0])))) || (arr_5 [i_0] [i_0] [i_2] [i_3 - 1])))) <= (!29520)));
                            }
                        }
                    }
                    var_22 += (arr_9 [i_0] [i_1 + 1] [i_0] [i_2]);
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1 + 1] [i_0] = (1 <= 1140046066);
                                var_23 = 0;
                                var_24 = (min(var_24, ((min((((arr_18 [i_1] [i_1]) % var_0)), 6075224840890572505)))));
                            }
                        }
                    }
                    var_25 = 246;
                    var_26 = ((!(arr_2 [i_0])));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_30 [i_9] [i_0] [i_1] [i_0] [i_0] = ((((min(6075224840890572506, (arr_2 [i_0])))) && (arr_22 [i_0] [i_0] [i_8] [i_8] [i_0] [i_0])));
                            var_27 = (min((min((((arr_2 [i_0]) ? 1628114467 : (arr_26 [i_0] [i_0] [i_8] [i_0]))), (arr_21 [i_0] [i_1] [i_8]))), (min((((-125 ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : 1798247427))), ((var_18 ? (arr_17 [i_1] [i_0]) : (arr_26 [i_0] [i_0] [i_0] [i_0])))))));
                            var_28 = 1;
                            var_29 = (arr_29 [i_0] [i_1] [i_0] [i_0] [i_1 + 1] [i_9]);
                        }
                    }
                }
                var_30 = (max((1 | 49152), (((arr_19 [i_1 - 1] [i_0]) >> (511 - 480)))));
            }
        }
    }
    var_31 = var_13;
    var_32 = (((((min(1, -4476)))) & (((min(-4744841035093142400, -64632481)) ^ ((max(var_12, -124)))))));
    #pragma endscop
}
