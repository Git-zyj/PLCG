/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_6 <= 1) < ((var_14 + (var_4 && var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((68 ? 4294967295 : 21710));
                arr_6 [i_0] = ((((((((min(-2440201554761876663, (arr_2 [i_1]))) + 9223372036854775807)) << (var_4 - 64)))) ? (((max(34594, (arr_2 [i_1]))))) : (min(((var_12 ? (arr_4 [i_0] [i_1]) : (arr_1 [i_0]))), (-5427212666542476166 <= 249)))));
            }
        }
    }
    var_21 = var_15;
    #pragma endscop
}
