/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = 2147483647;
                var_14 = (((max((32767 < 1), (2147483647 / var_10))) * ((((-2147483647 - 1) <= -8)))));
                var_15 = min(2147483647, (max(0, 44876)));
                arr_5 [i_0] [i_1] = max(-1606980247, 2147483647);
            }
        }
    }
    var_16 = var_8;
    var_17 = (min(2147483640, 2013097814));
    #pragma endscop
}
