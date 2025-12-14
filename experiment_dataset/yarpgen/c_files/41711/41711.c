/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (max(((247 ? (-32767 - 1) : 11685943756757724330)), (var_11 == var_7)));
                var_15 = (((max(((max((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_1 + 1] [i_0] [i_0])))), (arr_0 [i_0])))) << ((min((var_10 > 1), 1))));
            }
        }
    }
    var_16 = (min(var_12, 1));
    #pragma endscop
}
