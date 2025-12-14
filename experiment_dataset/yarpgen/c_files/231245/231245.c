/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 += (max(9206153648503650147, (((-(arr_2 [11]))))));
                                var_20 = (max((arr_1 [20] [i_0]), var_14));
                            }
                        }
                    }
                }
                arr_14 [15] = ((((((((((arr_5 [1] [11] [7]) >= var_15))) >= (arr_9 [3] [10] [16] [19]))))) % ((62 ? -9206153648503650147 : var_0))));

                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    var_21 *= (((var_16 == 210) - (4 << 1)));
                    arr_18 [5] |= var_15;
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    arr_23 [i_6] [10] [1] [11] = arr_2 [13];
                    arr_24 [i_6] = arr_17 [1] [10] [8];
                }
                for (int i_7 = 4; i_7 < 21;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_33 [3] [3] [8] [i_7] = max((((arr_3 [i_8 - 2] [i_7 + 2]) ? (arr_3 [i_8 - 2] [i_7 + 1]) : 9329381092479642595)), (var_14 + -72));
                                var_22 *= (max((((arr_19 [i_7 + 1] [i_7 - 2] [i_8 - 1] [i_8 - 1]) ? (arr_19 [i_7 - 4] [i_7 - 1] [i_8 - 1] [i_8 + 1]) : (arr_2 [i_8 + 1]))), ((-(arr_19 [i_7 - 4] [i_7 + 1] [i_8 - 1] [i_8 - 2])))));
                            }
                        }
                    }
                    arr_34 [i_7] [5] [i_7] = ((-(arr_28 [i_7] [5] [5] [16] [1] [i_7])));
                    var_23 = (min(var_23, ((max(((!(arr_5 [i_7 - 4] [i_7 - 2] [i_7 + 2]))), (arr_2 [8]))))));
                }
            }
        }
    }
    var_24 = 10924817237194866871;
    #pragma endscop
}
