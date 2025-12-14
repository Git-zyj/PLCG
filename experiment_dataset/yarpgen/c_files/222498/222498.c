/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [5] = -3721;
                arr_7 [9] [10] = (((~2948353959) ? (arr_3 [i_0]) : var_3));
                var_19 -= ((-var_2 ? (((arr_0 [i_0 - 2]) ? 1346613335 : (arr_0 [i_0 + 2]))) : -31476));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_2] [i_0] = (arr_4 [i_2] [i_0]);
                    arr_12 [i_2] [i_1] [i_1] [i_0] = (2948353966 ? var_12 : (arr_5 [i_2]));
                }
            }
        }
    }
    var_20 = (((min((min(2287828610704211968, var_1)), (!27426))) & (((((2948353981 ? 24836 : 2948353956)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            {
                var_21 = ((541910160 ^ (((7568167986573321897 ? 27428 : -16041)))));
                arr_19 [i_3] [i_3] [i_4] = (min(((min(11, 3753057135))), (((((min(245, (arr_14 [i_3]))))) * (min(1401058249, 18446744073709551615))))));
                var_22 = (!-11);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_23 = (arr_14 [22]);
                                arr_27 [i_3] [i_4] [i_3] [i_3] = (max(18446744073709551596, 31469));
                                var_24 = ((((!(!2948353981))) && 503316480));
                                var_25 = ((!((((-560853490 / (arr_22 [i_4] [i_6] [18])))))));
                            }
                        }
                    }
                }
                var_26 = (((arr_18 [i_4] [i_4]) ? -118 : ((((198146802704514976 > 0) > -590294528)))));
            }
        }
    }
    #pragma endscop
}
