/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 += (arr_0 [15] [i_1]);
                var_16 = (((-1224823660 - -1224823650) ? (arr_5 [i_0 + 1] [22] [i_0 - 1]) : (arr_2 [19])));
            }
        }
    }
    #pragma endscop
}
