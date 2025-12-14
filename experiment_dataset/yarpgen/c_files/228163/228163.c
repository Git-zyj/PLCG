/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(0, 0))) + (((1 + 1) - (0 / 1)))));
    var_21 = ((1 ? 1 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_22 = min((max(0, ((1 ? 1 : 1)))), 1);
                var_23 = ((max(((min((arr_1 [i_0] [2]), 1))), (max((arr_0 [i_0] [0]), 1)))));
                var_24 = (max(var_24, (((~(max((((arr_0 [i_0] [i_1]) ? (arr_0 [i_0] [5]) : (arr_3 [i_1] [i_0]))), 1)))))));
                arr_4 [i_0] [5] [i_0] = ((min(0, (arr_3 [i_0] [i_1]))));
                var_25 = (min((max(((1 ? 3638556512 : 236097694)), (arr_3 [i_1] [i_0]))), 1));
            }
        }
    }
    #pragma endscop
}
