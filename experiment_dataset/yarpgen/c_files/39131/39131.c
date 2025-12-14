/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (max((arr_0 [i_0]), (min(-4290360119468482340, (((arr_2 [i_1]) ? 3589126321809139871 : 4290360119468482340))))));
                var_15 *= (+(max(((((arr_5 [i_0 - 1] [i_1]) != var_5))), ((-(arr_5 [8] [i_1]))))));
            }
        }
    }
    var_16 = -6023799133062644200;
    var_17 = (var_12 ? var_7 : ((2251799813684736 ? 9223372036854775807 : 9223372036854775805)));
    #pragma endscop
}
