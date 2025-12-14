/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max((~var_10), (-1 + 19)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = ((~((var_0 ? ((max(var_6, (arr_2 [i_1])))) : ((1941488952931984652 ? 24 : -16))))));
                    arr_7 [i_1] = ((((var_1 & (-1438740715 & 16505255120777566983))) + 101));
                }
            }
        }
    }
    #pragma endscop
}
