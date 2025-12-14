/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (((((-(arr_1 [i_1 - 3] [i_0])))) ? (max((arr_4 [i_0] [i_1 - 2]), var_0)) : (((((arr_4 [i_0] [i_1 - 3]) == (arr_4 [i_0] [i_1 + 2])))))));
                var_11 *= (min((arr_3 [12] [12]), ((-(min(268435455, var_8))))));
                var_12 = (arr_4 [i_0] [i_1]);
                var_13 = ((17 ? 12 : (min(25, 32256))));
            }
        }
    }
    var_14 = (max(17, (min(var_9, var_7))));
    #pragma endscop
}
