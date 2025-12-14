/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = var_9;
                arr_4 [i_0] [i_0] [i_0] = ((1082567513 ? (max(var_3, (arr_2 [i_0] [i_1]))) : ((((((-9223372036854775784 ? 3212399783 : 9930515331826408824))) ? (min(var_12, (arr_0 [i_0] [i_1]))) : 3212399791)))));
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
