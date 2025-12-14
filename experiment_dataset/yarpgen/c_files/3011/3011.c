/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = ((((min((arr_7 [i_1 + 2]), (arr_4 [i_2] [i_1] [i_0])))) && (arr_5 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = (min(((23415 ? -94 : 74)), ((((((((arr_8 [i_0] [i_0] [i_0] [i_4]) + 2147483647)) >> 1))) ? ((1 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_1] [i_1] [i_3] [i_1]))) : 1))));
                                arr_14 [i_4] [i_3] [i_2] [9] [i_0] = (max((((!5695506189274918480) & (max(1, 5357760466645613782)))), 1));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((((-(~1))) != (min((arr_3 [i_3]), (arr_10 [i_0] [i_0] [i_2] [i_1 + 2] [i_0])))));
                                arr_16 [i_4] [i_1] [i_3] [10] [i_1] [i_1] [i_0] = 1;
                                var_18 = -65534;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_3;
    var_20 |= -151480618403929288;
    var_21 = (max((((((min(var_3, var_13))) >= 3575085324))), (min(((var_5 ? 1 : var_0)), var_6))));
    var_22 ^= (((var_7 / var_15) + var_4));
    #pragma endscop
}
