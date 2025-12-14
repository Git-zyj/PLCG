/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min((min(var_11, ((var_3 ? var_3 : var_1)))), (((var_4 | ((var_9 ? var_6 : var_6))))))))));
    var_13 = (min(var_13, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 *= (min((!var_0), (arr_2 [i_1])));
                var_15 = (min(var_15, ((min((((arr_3 [i_0]) ? 15 : ((-21687 ? 1004767272 : (arr_2 [i_0]))))), (((!7282) ? (arr_1 [i_0] [i_0]) : var_4)))))));
                arr_4 [i_0] [i_0] = 63734;
                arr_5 [5] [i_1] = (max((((arr_2 [i_0]) << (((arr_0 [2]) - 81)))), var_9));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((min((((arr_11 [i_3] [i_2] [i_1] [i_0]) << (((((-16 + 2147483647) << (((var_11 + 1439311205) - 27)))) - 2147483618)))), ((-(arr_9 [i_2] [i_2] [i_2 + 1]))))))));
                                var_17 &= ((var_2 | ((max((arr_15 [i_1] [i_2] [i_2] [i_2] [i_2 - 1] [i_3]), (arr_15 [i_0] [i_2] [6] [i_2] [i_2 + 1] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (((var_6 && var_5) ? ((((var_11 ? -242586067822728668 : var_8)))) : ((min((min(var_2, var_10)), var_0)))));
    var_19 = var_3;
    #pragma endscop
}
