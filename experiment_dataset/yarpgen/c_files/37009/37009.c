/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(4294967295, ((((max(var_5, 29))) ? var_15 : 163)));
    var_17 = (var_12 ? ((min(1, 4294967294))) : 4294967295);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min((arr_3 [i_0] [i_0 - 1]), (max((max((arr_0 [i_0]), 1)), ((max(14, 1)))))));
                var_19 = (max((min((arr_0 [i_0]), (238 | 8))), (1 || 1)));
                arr_5 [i_0 - 2] = 1;
                arr_6 [22] [i_1] = ((!(((1 ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 3]))))));
            }
        }
    }
    #pragma endscop
}
