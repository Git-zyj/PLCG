/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((var_14 >= ((var_9 ? var_0 : var_14))))), (~-852469331)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 2097120;
                var_16 = (-(max(2097120, 2000132359952543360)));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_17 = -852469337;
                        arr_13 [i_1] [i_2] &= (~-401890410);
                    }
                    var_18 = min(((-(arr_11 [i_0 + 1] [i_0] [i_0] [i_0]))), (min(57, 1133078285)));
                    var_19 = (arr_12 [i_0] [i_1] [i_1] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
