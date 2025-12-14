/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(var_2, 1)) >> 1)) >= -20));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 &= (!var_10);
                    arr_9 [i_1] = (min((~175), (949709076 != var_19)));
                }
            }
        }
    }
    var_22 -= 20;
    var_23 = (max(var_23, var_19));
    var_24 = (min(4294967288, 1));
    #pragma endscop
}
