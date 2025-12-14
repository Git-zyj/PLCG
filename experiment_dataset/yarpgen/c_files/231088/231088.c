/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (min(var_13, var_4));
                var_14 = (max(var_14, (((((26606 * -4512) == 31338))))));
            }
        }
    }
    var_15 = var_7;
    var_16 = var_1;
    #pragma endscop
}
