/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_19;
                arr_5 [i_1] [i_0] [10] = (min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])));
                arr_6 [i_1] = (max((~var_18), (!var_18)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] = (min((arr_7 [i_2] [7] [i_2] [7]), ((((~var_4) * (arr_2 [i_0] [i_0]))))));
                            arr_14 [i_0] [i_2] = (((arr_2 [i_0] [i_1]) % (arr_3 [10])));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_18 [i_2] [i_0] [i_3] [i_3] = (((arr_7 [i_2] [i_1] [i_3] [i_4]) ? (~3336784250543322718) : (((var_3 ? (arr_15 [i_0] [i_2] [i_3] [i_3]) : (arr_0 [i_0]))))));
                                arr_19 [i_2] = var_15;
                                var_20 = (((((!(arr_7 [i_2] [i_2 - 2] [i_2 - 2] [i_2])) ? (((!(arr_7 [i_2] [i_2] [i_3] [i_4])))) : (arr_1 [i_4])))));
                                arr_20 [i_0] [i_2] [6] [6] [i_2] [i_0] = (max((((!(arr_10 [i_1] [i_2 - 1] [i_1] [i_2 + 1] [i_0] [i_1])))), (arr_16 [i_0] [i_2] [i_1] [i_2] [i_3] [i_4])));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                arr_24 [i_5] [i_2] [i_2] [i_2] [i_0] = (arr_1 [i_2]);
                                arr_25 [i_1] [i_2] [i_2] = (((((var_4 | (arr_2 [i_1] [i_5])))) ? (arr_9 [i_2 + 1] [i_5 - 1]) : var_8));
                                arr_26 [i_2] [i_1] = (arr_12 [i_5 + 4] [i_1] [i_2] [10] [i_1] [i_3]);
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_21 *= (((arr_29 [i_2 - 3] [i_2 + 1] [i_2 - 1] [i_0] [i_6 + 2] [i_6 + 4] [i_6 + 4]) >> (1028588674 - 1028588659)));
                                var_22 -= (arr_7 [i_1] [i_2 - 2] [i_2 - 1] [i_2 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_18;
    #pragma endscop
}
