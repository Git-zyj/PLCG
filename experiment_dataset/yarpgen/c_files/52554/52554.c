/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (min((arr_0 [i_0]), (min((max(var_8, var_13)), var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = max((max(1, (arr_9 [i_0] [i_0] [i_0] [i_4]))), (((!1) ? (arr_1 [i_3] [i_2]) : (max(1, var_7)))));
                                var_17 = (min(var_17, ((max((max(-5335305310283343750, 1)), 6279521275136562960)))));
                                var_18 |= ((((var_7 || (arr_8 [i_0] [i_2] [13] [i_3]))) ? (arr_3 [i_0]) : ((min((arr_3 [i_0]), (arr_8 [i_4] [i_0] [i_1] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
