/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    var_14 = (min(var_14, (((((min(2147483647, -1))) ? 11108493699696121069 : -1)))));
    var_15 = (min(var_15, ((max(0, (max(((min(var_11, 45277))), ((4148605115 ? 253 : var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] = var_9;
                var_16 = (max(var_16, -4));
                var_17 = (max((((!((min((-9223372036854775807 - 1), -26)))))), (7897926475436380620 + 15)));
            }
        }
    }
    #pragma endscop
}
