/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((var_3 ? var_13 : var_13))), var_5));
    var_18 &= (min((-120 | 5), 5));
    var_19 ^= (max((((var_2 ? var_7 : var_4))), (~var_16)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (min(65530, 39173));
                    arr_6 [i_2 + 1] [14] [10] = (((-(arr_3 [i_2 - 1]))));
                }
            }
        }
    }
    var_21 -= var_8;
    #pragma endscop
}
