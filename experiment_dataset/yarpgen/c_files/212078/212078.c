/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min(((min(26473, var_1))), (var_8 + 119))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((1623977473612835410 ? 18446744073709551594 : (((~(arr_1 [i_1 + 1])))))))));
                var_12 |= (((((-(arr_1 [i_1 + 1])))) ? (var_1 / var_3) : (arr_1 [i_1 - 1])));
            }
        }
    }
    var_13 = (((((var_6 & 64061) ? var_5 : (max(var_9, -1)))) | var_4));
    #pragma endscop
}
