/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 15678;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, 109));
                    var_21 = (max(var_21, ((((((arr_1 [i_2 + 2]) + 2147483647)) >> (15678 - 15672))))));
                    var_22 -= (max((((3767295696 ? 3646 : 782188085))), (((!(((var_9 ? 86 : (arr_4 [i_2 - 1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
