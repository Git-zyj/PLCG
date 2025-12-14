/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = -1;
                var_11 = (arr_2 [i_1] [i_0] [i_0]);
            }
        }
    }
    var_12 = ((18446744073709551600 << (793020616 - 793020591)));
    var_13 = 112;
    #pragma endscop
}
