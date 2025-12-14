/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? (max(((0 ? 18446744073709551615 : 1)), 18446744073709551615)) : (((~(~var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [10] [i_1] [i_3 + 1] = ((!((min((arr_12 [i_3 - 2] [i_3 - 1]), (arr_4 [i_0] [i_2 + 1] [i_3 + 1]))))));
                                var_12 ^= ((!(arr_7 [i_3] [i_3] [i_3 - 1] [0] [i_3 - 2])));
                                arr_15 [i_1] [i_1] [2] [i_3] [i_4] [i_4] = (((((arr_1 [i_2 + 2] [i_3 - 2]) && ((max((arr_4 [i_4] [i_2 + 1] [i_0]), var_6))))) ? ((((!(((var_4 ? (arr_5 [i_1] [i_2] [i_2]) : (arr_9 [i_0] [4] [i_2])))))))) : var_3));
                                var_13 = arr_7 [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_1] [i_2];
                            }
                        }
                    }
                }
                var_14 ^= (min(((((-(arr_1 [i_0] [i_0]))))), (min((max(12210001624740061568, 1128909593)), var_4))));
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
