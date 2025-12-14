/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((var_4 ? ((max(352421607284501923, 1))) : ((0 ? var_5 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 += (max(1, (((arr_9 [i_0] [i_0] [i_1] [i_2] [i_3]) != var_5))));
                            var_17 = (((((var_2 ? (arr_8 [i_3]) : var_5))) ? ((((-(arr_3 [i_2] [i_3]))))) : -var_5));
                        }
                    }
                }
                var_18 = var_4;
            }
        }
    }
    var_19 = (!(((-(min(var_13, var_0))))));
    var_20 = ((var_13 ? 127 : var_8));
    var_21 = 111;
    #pragma endscop
}
