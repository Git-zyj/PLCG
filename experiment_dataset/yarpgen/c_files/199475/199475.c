/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 -= ((116 * (arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 2])));
                var_18 = (min(var_18, (((((((((-109 ? var_1 : (arr_4 [17] [i_0] [i_0])))) ? 20 : (((var_11 | (arr_0 [i_0]))))))) && ((((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0 + 1] [i_1])))))))));
            }
        }
    }
    var_19 = ((((-((-88 ? var_6 : var_4)))) | var_3));
    #pragma endscop
}
