/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 ^= (((12 ? (max((arr_3 [i_0] [i_1]), (arr_0 [i_1] [i_0]))) : (!var_3))));
                var_13 = ((var_7 ? ((28337 ? 1597354281883560722 : (-32767 - 1))) : ((min((arr_0 [i_0] [12]), (arr_0 [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
