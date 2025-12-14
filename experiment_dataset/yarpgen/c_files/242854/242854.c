/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 |= (8556380160 < 18446744065153171456);
                var_20 -= ((max(17222613234158793796, 38)));
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
