/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((7680 & ((var_9 ? (-2147483647 - 1) : 1))));
                arr_6 [i_0] [i_0] = ((~(((arr_3 [i_1] [i_1] [i_0]) | (arr_3 [i_1] [i_1] [16])))));
            }
        }
    }
    var_16 += (min(((min(-34401, 7694))), ((-((1449672455 ? var_9 : var_12))))));
    #pragma endscop
}
