/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (((arr_1 [i_1] [i_0]) ? (arr_1 [i_0] [i_0]) : ((min(var_14, var_2)))));
                var_16 -= ((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_1]))));
            }
        }
    }
    var_17 = ((var_5 ? (max((168 <= 69), var_3)) : ((((min(11084, 40))) ? (6557 | 82) : ((max(7, var_13)))))));
    #pragma endscop
}
