/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_15 -= ((((min(14841, var_10))) ? (max(184846591, (arr_2 [9]))) : (!var_3)));
                arr_5 [19] [19] [i_0] = ((82 / (arr_3 [i_0] [i_0])));
            }
        }
    }
    var_16 = (min(var_16, (((2147483640 ? var_9 : var_12)))));
    #pragma endscop
}
