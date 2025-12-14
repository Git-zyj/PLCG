/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(((max(15, -16))), ((5399201678863043006 ? 4235593750 : 2))));
                var_14 = min((min((arr_3 [i_1]), (arr_3 [i_1]))), var_12);
                var_15 = (max(var_15, (-9223372036854775807 - 1)));
            }
        }
    }
    var_16 = var_11;
    #pragma endscop
}
