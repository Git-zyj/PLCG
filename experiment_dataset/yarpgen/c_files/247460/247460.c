/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~29874);
    var_13 = (min(var_13, var_0));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (arr_1 [i_1])));
                    var_15 = ((max((max(6755399441055744, 1)), var_3)));
                }
            }
        }
    }
    #pragma endscop
}
