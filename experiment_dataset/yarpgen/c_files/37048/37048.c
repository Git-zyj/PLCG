/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_8));
    var_13 = (min((max((~var_9), (3782476483 ^ var_10))), ((max(1822990636269126622, var_4)))));
    var_14 ^= var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [7] [i_2] [i_1 - 1] [i_2] = (var_5 * (max(((((arr_2 [i_0] [3] [i_0]) ^ 73))), 1822990636269126622)));
                    var_15 = ((((min(var_0, (arr_3 [i_0] [i_1])))) ? (min((~1184601225269600148), 1)) : (max((arr_5 [i_0] [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_1 + 1] [i_2 - 1] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
