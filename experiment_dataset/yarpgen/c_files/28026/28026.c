/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = 1644811369799012081;
                arr_6 [i_0] [i_0] [i_1] = ((((((~(arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 1]))) + 2147483647)) >> (((!(arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 2]))))));
                var_12 ^= (((min((~-1644811369799012081), (~var_0)))) ? ((min(var_8, var_9))) : (((1644811369799012092 ? var_10 : (arr_0 [i_1 + 2])))));
            }
        }
    }
    var_13 = ((16347129438327492767 ? 28708 : 12));
    #pragma endscop
}
