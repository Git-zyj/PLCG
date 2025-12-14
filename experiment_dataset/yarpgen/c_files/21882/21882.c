/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (arr_3 [i_0] [i_1 + 1]);
                arr_5 [i_1] [i_0] = (max(-664980517, var_0));
            }
        }
    }
    var_14 = (max((((max(var_6, -664980517)) ^ ((((-664980510 + 2147483647) << (var_0 - 4124333321)))))), var_3));
    var_15 = ((((max(((max(750, var_7))), ((var_0 ? 416797062 : -1))))) ? var_7 : ((((min(var_7, -55))) ? var_1 : (var_10 > var_1)))));
    #pragma endscop
}
