/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~255) ? var_8 : ((~(!98)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = var_3;
                var_14 = (!151);
            }
        }
    }
    var_15 = (max(var_15, var_7));
    #pragma endscop
}
