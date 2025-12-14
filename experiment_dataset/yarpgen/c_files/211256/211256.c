/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (max((((((-16884 % (-127 - 1)))) ? -16876 : var_0)), ((max(4294967294, (-127 - 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 += (-110 | 0);
                    var_22 = 60;
                }
            }
        }
    }
    var_23 = (-127 - 1);
    #pragma endscop
}
