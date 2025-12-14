/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = var_5;
                    arr_9 [i_1] [i_1] [1] = (((arr_0 [i_2]) ? 40539 : var_2));
                    var_13 &= (((-(((arr_1 [i_0]) + (arr_1 [i_0]))))));
                }
            }
        }
    }
    var_14 = ((var_3 ? ((85873099 >> (-25149 + 25176))) : (((var_2 ? 24996 : var_5)))));
    #pragma endscop
}
