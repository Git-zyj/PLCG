/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((var_1 ? var_9 : (var_1 ^ -8240848828363618468)))));
    var_19 = (min(1, 0));
    var_20 = 18446744073709551615;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = var_15;
                var_22 = 1048448;
            }
        }
    }
    #pragma endscop
}
