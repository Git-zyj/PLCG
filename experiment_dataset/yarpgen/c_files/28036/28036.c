/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((((((arr_1 [i_0] [i_1]) ? var_6 : 9056))) ? ((max(((min(var_0, 9053))), var_2))) : 1441308319484596837));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, var_4));
                                var_20 = (min(var_20, (arr_13 [i_0] [i_0] [1] [i_3] [2])));
                                var_21 = (((((79 ? var_6 : var_11))) >> (((((((arr_13 [i_3] [i_3] [i_0] [i_3] [i_3 - 2]) ? (-2147483647 - 1) : (arr_5 [i_4] [i_4 + 1] [5]))) - -2147483638)) + 35))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}
