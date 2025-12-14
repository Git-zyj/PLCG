/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 += (3909234683 % var_8);
                var_20 = (((~11) ? ((52 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) : (((((arr_0 [i_0 - 1]) && 385732614))))));
            }
        }
    }
    var_21 = (min(var_21, (((!((max(var_7, ((min(45, var_7)))))))))));
    #pragma endscop
}
