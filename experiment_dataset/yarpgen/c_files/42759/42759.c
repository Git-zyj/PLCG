/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min((!1), 1));
                var_14 = (~var_4);
                var_15 = (min(var_15, (536805376 <= 0)));
                var_16 = var_3;
            }
        }
    }
    var_17 = ((-(max(((1 ? 9223372036854775802 : 0)), -9029461444920485780))));
    var_18 -= 1;
    #pragma endscop
}
