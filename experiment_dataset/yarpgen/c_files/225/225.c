/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (i_0 % 2 == zero) ? ((((max((0 & var_1), 3577320248166603245)) >> (((min(((((arr_0 [i_0]) ? -1508 : var_16))), (max((arr_1 [i_0]), var_12)))) - 7193747484900810907))))) : ((((max((0 & var_1), 3577320248166603245)) >> (((((min(((((arr_0 [i_0]) ? -1508 : var_16))), (max((arr_1 [i_0]), var_12)))) - 7193747484900810907)) - 5379174071276918185)))));
                var_20 = (((arr_0 [i_0]) | 1));
            }
        }
    }
    #pragma endscop
}
