/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = ((min(1, 1)));
        var_11 = 1;
        var_12 = 3604618518349931957;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_13 = (min(((min(1, 1))), (max(25262, 7734457639778645633))));
                var_14 ^= (max(3604618518349931957, -25290));
                var_15 = (min(11519659480322475703, -6016865912128402695));
            }
        }
    }
    #pragma endscop
}
