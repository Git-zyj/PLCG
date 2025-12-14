/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= 1152921504606846976;
    var_14 = var_6;
    var_15 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_6;
                arr_6 [i_0] [i_0] [i_0] = ((~(!var_3)));
            }
        }
    }
    #pragma endscop
}
