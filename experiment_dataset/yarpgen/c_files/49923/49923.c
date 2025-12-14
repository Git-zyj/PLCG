/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= -962956734;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (3968 / -19661);
                var_19 ^= (!(arr_3 [i_1]));
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
