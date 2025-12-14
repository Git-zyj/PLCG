/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 + 1] [i_0 - 1] = (((min(7186182867582794078, var_16)) & ((((arr_1 [i_1] [i_0 - 2]) ? (arr_1 [i_0 - 3] [i_1 + 1]) : (arr_1 [i_0 - 1] [i_1 + 1]))))));
                var_20 = (max(var_20, 125));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = 5;
                                var_22 = (arr_5 [i_0] [i_0 + 1] [i_0]);
                                var_23 -= (max(((((arr_10 [i_0 - 3] [i_0] [i_0 + 1] [i_0] [i_0]) != 31025))), (max(((var_7 ? var_16 : 5)), (var_0 == var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_7, var_1));
    var_25 += ((!(var_17 + var_19)));
    #pragma endscop
}
