/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (~(min((var_10 * 4373530685990272198), (3180523451693372789 % 230))));
                var_17 ^= (((max(4373530685990272206, var_2)) != ((var_10 ? 1215874245486078723 : var_10))));
            }
        }
    }
    #pragma endscop
}
