/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_3 || ((((-1686650384453411604 ^ var_12) ? (var_3 + 34) : (min(var_1, var_8))))))))));
    var_15 = 1848130888;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((-(arr_4 [i_0])));
                var_17 = (max(var_17, (((((max((min(var_9, 0)), (var_9 > var_0)))) || (((min(-35, 191)))))))));
            }
        }
    }
    #pragma endscop
}
