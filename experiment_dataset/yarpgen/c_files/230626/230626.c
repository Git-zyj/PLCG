/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((min(var_0, var_7))), 1331572866));
    var_13 ^= (-((0 ? ((min(var_5, var_8))) : var_5)));
    var_14 = (max(var_14, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (min(((((arr_3 [i_1]) ? (arr_2 [i_0] [i_0] [i_0]) : var_4))), (((!(~25))))));
                var_15 = (max(var_15, ((min((((((((var_6 ^ (arr_3 [i_0]))) + 2147483647)) << (var_5 - 41)))), (min((min(var_0, (arr_0 [i_0] [i_0]))), (arr_2 [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
