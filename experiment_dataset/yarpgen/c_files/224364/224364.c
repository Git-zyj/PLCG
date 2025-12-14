/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1321;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((min((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))), ((min((arr_1 [i_0 - 3]), (arr_1 [i_0 + 1])))))))));
                var_22 = ((!(arr_1 [i_1])));
                var_23 -= (max(((((arr_1 [i_0 - 3]) / (arr_1 [i_0 + 1])))), (86 / -7502087499829025382)));
            }
        }
    }
    #pragma endscop
}
