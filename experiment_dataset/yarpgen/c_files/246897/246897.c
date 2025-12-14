/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min(132, 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((max(1, 3719207880092769179))) ? (((min((max((arr_0 [i_0]), 109)), -117)))) : (arr_1 [i_0]))))));
                var_20 -= ((((arr_4 [i_1]) ? (arr_2 [i_1]) : 1963910781)));
                var_21 = (arr_3 [i_0] [i_1] [i_0]);
                var_22 ^= ((((((min(-120, (arr_3 [i_0] [i_1] [i_0])))) ? (max((arr_0 [i_1]), -960667156759136166)) : ((((arr_1 [i_0]) ? 1 : var_10))))) + (arr_3 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_23 |= var_7;
    var_24 ^= var_13;
    #pragma endscop
}
