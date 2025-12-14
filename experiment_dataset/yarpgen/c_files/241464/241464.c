/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (max(2803142697598703629, 32136));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_3] [i_2 - 1] [2] [i_2] = (((((((arr_10 [i_2]) ? (arr_10 [i_2]) : (arr_2 [i_4] [i_3] [i_1])))) ? -1244115655 : (2143069497 == var_9))));
                                var_12 = var_1;
                            }
                        }
                    }
                    arr_15 [i_2] = (max((arr_6 [i_0] [i_2 - 1] [6] [i_1 - 1]), var_0));
                }
            }
        }
    }
    var_13 -= -2143069497;
    var_14 = var_6;
    #pragma endscop
}
