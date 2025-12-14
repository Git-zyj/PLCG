/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 28672;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = 36848;
                    arr_8 [i_0 - 2] [i_0] = (36864 / 31744);
                    var_12 = 36867;
                }
            }
        }
    }
    var_13 = (-2371 * var_1);
    #pragma endscop
}
