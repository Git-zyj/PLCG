/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = var_10;
                arr_7 [i_0] [i_1] [i_0] = ((1246769406 ? ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) : (((min(6043174448906947347, var_7)) + var_2))));
            }
        }
    }
    var_16 += var_12;
    var_17 = var_3;
    var_18 = var_9;
    #pragma endscop
}
