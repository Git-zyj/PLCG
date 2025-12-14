/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 9892;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((-((var_5 ? var_4 : -463813010))));
                var_18 = (((((!0) >> (var_8 - 1957))) <= (((2047 ? -8109 : 12851)))));
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
