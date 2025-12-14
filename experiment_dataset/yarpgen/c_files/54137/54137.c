/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54137
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
                var_13 = ((+(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                var_14 = (arr_0 [i_0]);
            }
        }
    }
    var_15 = var_1;
    var_16 = (((((max(var_12, 0)))) ? (min(var_9, var_4)) : (((-((max(0, 65535))))))));
    #pragma endscop
}
