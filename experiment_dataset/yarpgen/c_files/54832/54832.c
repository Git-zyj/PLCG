/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_7, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = ((~(((((var_16 ? var_2 : (arr_3 [i_1] [i_1])))) ? ((71655613 ? (arr_2 [i_1]) : 406338797194783155)) : (~1475802830)))));
                var_19 = ((arr_1 [i_0]) + ((max(-71655614, var_12))));
                arr_4 [i_1] [i_1] [i_0] = (((var_2 * var_0) * (var_6 - 222)));
            }
        }
    }
    var_20 = ((var_4 ? (!var_4) : (((!((min(var_13, var_12))))))));
    #pragma endscop
}
