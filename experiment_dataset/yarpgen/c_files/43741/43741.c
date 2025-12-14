/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(var_15, 562949953421311));
                var_16 = (101451413 + 1);
                var_17 = 984526151;
            }
        }
    }
    var_18 *= ((65523 ? ((~(1 * var_13))) : (((-(65505 <= 8))))));
    #pragma endscop
}
