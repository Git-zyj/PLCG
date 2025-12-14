/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_18 = (min(((min((arr_11 [i_0] [3] [i_2] [i_3] [i_4]), var_1))), 72));
                                var_19 = ((((((arr_4 [3] [i_0 + 1] [i_3 - 1] [3]) | 10))) <= 138538465099776));
                            }
                        }
                    }
                    var_20 = (arr_7 [5] [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    var_21 = (max(var_21, (!var_13)));
    #pragma endscop
}
