/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((max((max((min(var_13, var_2)), (4985 == var_12))), var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((var_9 | (arr_3 [i_0] [i_2] [i_2]))))));
                    var_18 = (max((((!35184372088831) & (arr_2 [i_0]))), ((~(min(156153461, var_0))))));
                }
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
