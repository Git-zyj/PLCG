/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_14 ? var_19 : var_7))) ? 1 : var_14)) >= 1));
    var_21 = ((var_12 && (((~((1 ? 1 : 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 ^= 1;
                    arr_8 [i_0] [i_2] [i_1] [i_0] = 1544934400;
                }
            }
        }
    }
    #pragma endscop
}
