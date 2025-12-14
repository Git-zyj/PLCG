/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (min((var_9 / -1), (arr_0 [i_0])));
                var_13 = ((var_11 ? (arr_1 [i_0] [i_1]) : (max(var_10, (arr_1 [i_1 + 2] [i_0 - 3])))));
                arr_5 [i_0] [i_0] = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
