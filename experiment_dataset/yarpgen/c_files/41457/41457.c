/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (min(1, 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((max(((min(var_9, (-2147483647 - 1)))), 1)))));
                arr_6 [22] [i_1] [22] = 1;
                var_13 |= (max((max((((var_8 ? 1 : 1))), (min(1, 1828226499881605697)))), (((!(0 / 1))))));
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
