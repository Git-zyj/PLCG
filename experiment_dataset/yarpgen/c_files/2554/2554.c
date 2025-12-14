/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 15872;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = 0;
                var_18 = ((var_1 >= (min(22662, 40782))));
            }
        }
    }
    var_19 = ((var_13 ? (((var_12 == (~0)))) : (((15251602186397925655 * -90) ? var_12 : ((0 ? 40782 : -21502186))))));
    #pragma endscop
}
